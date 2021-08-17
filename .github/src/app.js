require("dotenv").config()
const axios = require("axios").default
const fs = require("fs")

const path = require("path")
const util = require("util")

const {Worker , MessageChannel, workerData } = require("worker_threads")

const URL = "https://leetcode.com/api/submissions/"
const PROBLEM_URL = "https://leetcode.com/api/problems/all"

const all_problems = require("./problemstat.json");

const INTERVAL = 3000;

const cookieVal = "sdf"

const {SolutionDetails, aldyPresentSol} = require("./SolutionDetails.js")

const readFileDir = util.promisify(fs.readdir)
const codeWrite = util.promisify(fs.writeFile)

//function mapFileWithId(){
	//return new Promise( async (resolve , reject ) => {
		//const subPresent = await readFileDir("../../") ;
		//subPresent.map(val => {
			//if(val.indexOf("_") >= 0)
			//{
				//let f = val.split("_")[0]
				//aldyPresentSol[f] = 1
			//}
		//})
		//return resolve();
	//})
//}

//function SolutionDetails ({id, lang , runtime, memory, code, title_slug})
//{
	//this.id = id
	//this.lang = lang
	//this.memory = memory
	//this.runtime = runtime
	//this.code = code
	//this.title_slug = title_slug
	//this.fmtData = ""
	//this.ext = this._getExtension(this.lang)
//}

//SolutionDetails.prototype.IsPresent = function(){
	//if(aldyPresentSol[this.id] === 1 )
	//{
		//return true;
	//}
	//else
	//{
		//return false;
	//}
//}

//SolutionDetails.prototype.fmtHdl = async function(){
	//this.fmtData += `id = ${this.id} \n` ;
	//this.fmtData += `lang = ${this.lang} \n`
	//this.fmtData += `runtime  = ${this.runtime} \n`
	//this.fmtData += `memory = ${this.memory}\n`
	//this.fmtData += `title_slug = ${this.title_slug}\n`
	//this.fmtData += `code =\n \`\`\`${this.code}\`\`\``
	//await this._fileWriteHdl()
//}

//SolutionDetails.prototype._fileWriteHdl = async function() {
	//try {
		//console.log("this ext", this.ext)
		//await codeWrite(`../../${this.id}_${this.title_slug}.${this.ext}`,this.fmtData)
		//if(Object.keys(aldyPresentSol).length > 1)
		//{
			//aldyPresentSol[this.id] = 1 ;
		//}
		//console.log("file written ")
	//}
	//catch(er)
	//{
		//console.log(er.message)
	//}
//}

//SolutionDetails.prototype._getExtension = function(lang) {

	//switch(lang )
	//{
		//case 'CPP' : this.ext = "cxx"
			//break;
		//case 'JS' : this.ext = "js"
			//break;
		//case 'python' : this.ext = "py"
			//break ;
		//case 'java' : this.ext = "java"
			//break;
		//case 'golang' : this.ext = "go"
			//break;
		//case 'rust' : this.ext = "rs"
			//break ;
		//case 'c' : this.ext = "c"
			//break;
		//case 'swift' : this.ext = "swift"
			//break ;
		//case 'c#' : this.ext = "cs"
			//break ;
		//case 'ruby' : this.ext = "rb"
			//break ;
		//case 'scala' : this.ext = "sc"
			//break;
		//case 'kotlin' : this.ext = "kt"
			//break ;
		//case 'typescript' : this.ext = 'ts'
			//break;
		//case 'php' : this.ext = 'php'
			//break;
		//case 'erlang' : this.ext  = 'erl'
			//break;
		//case 'racket' : this.ext = 'rkt'
			//break ;
		//case 'elixir' : this.ext = 'ex'
			//break;
		//default : this.ext = "md"
			//break ;
	//}

	//return this.ext
//}

const worker = new Worker('./worker.js' )


worker.on('message', ()=>{
	console.log("done writnin")
})

worker.on('messageerror' , (err)=>[
	console.log("messageerror ", err)
])

worker.on('error', (err)=>{
	console.log(err ," messsage ")
})

worker.on('exit', ()=>{
	console.log("done compltet")
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
				console.log(res.data)
				worker.postMessage({workerData : res.data} )
				//clearTimeout(sleep)
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
	for(let i = 0 ; i < all_problems.stat_status_pairs.length ; i++ )
	{
		const question = all_problems.stat_status_pairs[i]
		await solutionPromise(question.stat)
		await sleep(INTERVAL )
	}
	worker.postMessage({workerData : 'EXIT'}  )
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
				//if(!sol_obj.IsPresent())
				//{
					//sol_obj.fmtHdl()
				//}
				//else
				//{
					//isFilePrsnt = true ;
					//break ;
				//}
				console.log(sol_obj)
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
//DailyFetch()

process.on('exit', ()=>{
	console.timeEnd()
	console.log("exited peacefully!!")
})
