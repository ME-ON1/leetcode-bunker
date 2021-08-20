const path = require("path")

require("dotenv").config()

const axios = require("axios").default

const fs = require("fs")

const util = require("util")

const INTERVAL = 3000;
const {Worker , workerData } = require("worker_threads")

const URL = "https://leetcode.com/api/submissions/"
const PROBLEM_URL = "https://leetcode.com/api/problems/all"

const all_problems = require("./problemstat.json");

const cookieVal = "LEETCODE_SESSION=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJfYXV0aF91c2VyX2lkIjoiMjA3Mzc3NSIsIl9hdXRoX3VzZXJfYmFja2VuZCI6ImFsbGF1dGguYWNjb3VudC5hdXRoX2JhY2tlbmRzLkF1dGhlbnRpY2F0aW9uQmFja2VuZCIsIl9hdXRoX3VzZXJfaGFzaCI6IjU3MGFiN2MwNDI5MDk4YjUyZjA2OTFlMWJmMzliODBjNjM0NjE2YWIiLCJpZCI6MjA3Mzc3NSwiZW1haWwiOiJzdGFydW4uMTk5OEBnbWFpbC5jb20iLCJ1c2VybmFtZSI6Ik1lX09OIiwidXNlcl9zbHVnIjoiTWVfT04iLCJhdmF0YXIiOiJodHRwczovL3d3dy5ncmF2YXRhci5jb20vYXZhdGFyL2U5MTdjYWMzMWY5NzZhMDYyM2IxNDYwMTk2ZjRmMDFiLnBuZz9zPTIwMCIsInJlZnJlc2hlZF9hdCI6MTYyOTIxNzA4MywiaXAiOiI2MS4wLjMyLjcyIiwiaWRlbnRpdHkiOiIyOTI4YWM4YWMwMjNiOTdmMzljMDMzZDM1YjllZDE3NiIsIl9zZXNzaW9uX2V4cGlyeSI6MTIwOTYwMCwic2Vzc2lvbl9pZCI6MTE1Mjk5MjZ9.jltsrtWLm0fPS576ZZG0RoqvyFb8XHvKiaf_Vpu5kN8; Domain=.leetcode.com; expires=Thu, 02 Sep 2021 05:17:22 GMT; HttpOnly; Max-Age=1209600; Path=/; SameSite=Lax; Secure" ;

const {SolutionDetails} = require("./SolutionDetails.js")

const readFileDir = util.promisify(fs.readdir)
const codeWrite = util.promisify(fs.writeFile)

let aldyPresentSol = {}

function mapFileWithId(){
	return new Promise( async (resolve , reject ) => {
		const subPresent = await readFileDir("../../") ;
		subPresent.map(val => {
			if(val.indexOf("_") >= 0)
			{
				let f = val.split("_")[0]
				aldyPresentSol[f] = 1
			}
		})
		return resolve();
	})
}

SolutionDetails.prototype.IsPresent = function(){
	if(aldyPresentSol[this.id] === 1 )
	{
		return true;
	}
	else
	{
		return false;
	}
}

const worker = new Worker('./worker.js' )


worker.on('message', ()=>{
	console.log("done writing")
})

worker.on('messageerror' , (err)=>[
	console.log("messageerror ", err)
])

worker.on('error', (err)=>{
	console.log(err ," messsage ")
})

worker.on('exit', ()=>{
	console.log("done this Work")
})

let solutionPromise = (question) => new Promise((resolve, reject) => {
	axios({
		method : 'GET',
		baseURL : `${URL}${question.question__title_slug}`,
		headers : {
			cookie : cookieVal
		}
	})
		.then(async (res)=>{
				//console.log(res.data)
				console.log(res, "reaching herre")
				worker.postMessage({workerData : res.data} )
				resolve()
		})
		.catch(err => {
			console.log("err",err.message)
		})
		.then(()=>{
			clearTimeout(sleep)
			resolve()
		})
})

const sleep = (ms) => new Promise((res) => setTimeout(res, ms));

async function OneTimeFetch(){
	try {
	for(let i = 0 ; i < all_problems.stat_status_pairs.length ; i++ )
	{
		const question = all_problems.stat_status_pairs[i]
		await solutionPromise(question.stat)
		await sleep(INTERVAL )
	}
	worker.postMessage({workerData : 'EXIT'}  )
	}
	catch(err)
	{
		process.exit(err) ;
	}
}

async function DailyFetch (){
	console.log("is it running")
	try {
		const r_recentSubmittedSols = await axios({
			method : 'GET',
			baseURL : URL,
			headers : {
				cookie : cookieVal
			}
		})

		const bVal = r_recentSubmittedSols.data.submissions_dump;
		await FileWriteHdl(bVal)
		console.log("reachign here")
		process.exit()
	} catch (err)
	{
		console.log(err.message )
		//process.exit(err);
		throw err
	}
}

const FileWriteHdl = async bVal => {

		for(let i = 0 ; i  < bVal.length ; i++ )
		{
			if(bVal[i].status_display === 'Accepted')
			{
				const sol_obj = new SolutionDetails(bVal[i]);
				if(!sol_obj.IsPresent())
				{
					console.log("running")
					await sol_obj.fmtHdl()
					aldyPresentSol[this.id] = 1 ;
				}
			}
		}
}

;(async ()=>{
	console.time()
	await mapFileWithId()
	//if(Object.keys(aldyPresentSol).length >= 1)
	//{
		DailyFetch()
	//}
	//else
	//{
		//OneTimeFetch()
	//}
})()

process.on('exit', (err)=>{
	console.timeEnd()
	if(err)
	{
		console.log("err", err.message)
	}
	else
	{
		console.log("exited peacefully!!")
	}
})
