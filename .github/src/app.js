require("dotenv").config()
const axios = require("axios").default
const fs = require("fs")

const path = require("path")
const util = require("util")

const URL = "https://leetcode.com/api/submissions/"
const PROBLEM_URL = "https://leetcode.com/api/problems/all"

const all_problems = require("./problemstat.json");

const cookieVal = "__stripe_mid=c56e4539-ff74-4baf-8510-634f443ee4f235aca0; gr_user_id=c42f4611-513a-4330-bdf9-ed44d4add817; cf_clearance=71937098e3b433c5b1101ad08a382754194fb97c-1624900995-0-150; NEW_PROBLEMLIST_PAGE=1; csrftoken=tNYAAHcAmvjhJA9rr82z1eezNUdvVzJhvgDCVlMGpXcbz7fpKEqxiTvhCMlWNIqI; c_a_u=\"TWVfT04=:1mEYXC:gHCwojxyjN8dZbp0eLDLmNU8nyk\"; LEETCODE_SESSION=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJfYXV0aF91c2VyX2lkIjoiMjA3Mzc3NSIsIl9hdXRoX3VzZXJfYmFja2VuZCI6ImFsbGF1dGguYWNjb3VudC5hdXRoX2JhY2tlbmRzLkF1dGhlbnRpY2F0aW9uQmFja2VuZCIsIl9hdXRoX3VzZXJfaGFzaCI6IjU3MGFiN2MwNDI5MDk4YjUyZjA2OTFlMWJmMzliODBjNjM0NjE2YWIiLCJpZCI6MjA3Mzc3NSwiZW1haWwiOiJzdGFydW4uMTk5OEBnbWFpbC5jb20iLCJ1c2VybmFtZSI6Ik1lX09OIiwidXNlcl9zbHVnIjoiTWVfT04iLCJhdmF0YXIiOiJodHRwczovL3d3dy5ncmF2YXRhci5jb20vYXZhdGFyL2U5MTdjYWMzMWY5NzZhMDYyM2IxNDYwMTk2ZjRmMDFiLnBuZz9zPTIwMCIsInJlZnJlc2hlZF9hdCI6MTYyODgzMDY4NSwiaXAiOiIxMTcuMjAxLjc1LjIzIiwiaWRlbnRpdHkiOiIyOTI4YWM4YWMwMjNiOTdmMzljMDMzZDM1YjllZDE3NiIsIl9zZXNzaW9uX2V4cGlyeSI6MTIwOTYwMCwic2Vzc2lvbl9pZCI6MTE1Mjk5MjZ9.fs55FSgmmqgbwrcZn5oEv4joyBrHfYu8p-kbLqtsJ6E" ;


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



function SolutionDetails ({id, lang , runtime, memory, code, title_slug})
{
	this.id = id
	this.lang = lang
	this.memory = memory
	this.runtime = runtime
	this.code = code
	this.title_slug = title_slug
	this.fmtData = ""
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

SolutionDetails.prototype.fmtHdl = async function(){
	this.fmtData += `id = ${this.id} \n` ;
	this.fmtData += `lang = ${this.lang} \n`
	this.fmtData += `runtime  = ${this.runtime} \n`
	this.fmtData += `memory = ${this.memory}\n`
	this.fmtData += `title_slug = ${this.title_slug}\n`
	this.fmtData += `code =\n \`\`\`${this.code}\`\`\``
	await this._fileWriteHdl()
}

SolutionDetails.prototype._fileWriteHdl = async function() {
	try {
		await codeWrite(`../../${this.id}_${this.title_slug}.md`,this.fmtData)
		if(Object.keys(aldyPresentSol).length > 1)
		{
			aldyPresentSol[this.id] = 1 ;
		}
		console.log("file written ")
	}
	catch(er)
	{
		console.log(er.message)
	}
}
const INTERVAL = 3000;

let solutionPromise = (question) => new Promise((resolve, reject) => {
	console.log("starting solution request")
	axios({
		method : 'GET',
		baseURL : `${URL}${question.question__title_slug}`,
		headers : {
			cookie : cookieVal
		}
	})
		.then(async (res)=>{
			const solutionDetails = res.data.submissions_dump
			if (solutionDetails.length > 0 )
			{
				console.log("im also here")
				console.log(res.data.submissions_dump)
				for(let i = 0 ; i < solutionDetails.length ; i++ )
				{
					if(solutionDetails[i].status_display === 'Accepted')
					{
						const sol_obj = new SolutionDetails(solutionDetails[i]);
						sol_obj.fmtHdl()
					}
				}
			}
			resolve()
		})
		.catch(err => {
			console.log("err",err.message)
		})
		.then(()=>{
			clearTimeout(sleep)
		})
})

const sleep = (ms) => new Promise((res) => setTimeout(res, ms));

async function OneTimeFetch(){
	const promiseArr = []
	for(let i = 0 ; i < all_problems.stat_status_pairs.length ; i++ )
	{
		const question = all_problems.stat_status_pairs[i]
		await solutionPromise(question.stat)
		await sleep(INTERVAL )
	}
}

async function DailyFetch (){
	try {
		const r_recentSubmittedSols = await axios({
			method : 'GET',
			baseURL : URL,
			headers : {
				cookie : cookieVal
			}
		})

		await mapFileWithId();
		const bVal = r_recentSubmittedSols.data.submissions_dump;
		let isFilePrsnt = false ;
		for(let i = 0 ; i  < bVal.length ; i++ )
		{
			if(bVal[i].status_display === 'Accepted')
			{
				const sol_obj = new SolutionDetails(bVal[i]);
				if(!sol_obj.IsPresent())
				{
					sol_obj.fmtHdl()
				}
				else
				{
					isFilePrsnt = true ;
					break ;
				}
			}
		}

		if(isFilePrsnt )
		{
			console.log("File started to repeat")
		}
	} catch (err)
	{
		console.log(err.message )
	}
}

console.time()
OneTimeFetch()

process.on('exit', ()=>{
	console.timeEnd()
	console.log("exited peacefully!!")
})
