require("dotenv").config()
const axios = require("axios").default
const fs = require("fs")

const path = require("path")
const util = require("util")

const respJSON = require("../leetcoderes.json")

const URL = "https://leetcode.com/api/submissions"
const PROBLEM_URL = "https://leetcode.com/api/problems/all"


const cookieVal = "LEETCODE_SESSION=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJfYXV0aF91c2VyX2lkIjoiMjA3Mzc3NSIsIl9hdXRoX3VzZXJfYmFja2VuZCI6ImFsbGF1dGguYWNjb3VudC5hdXRoX2JhY2tlbmRzLkF1dGhlbnRpY2F0aW9uQmFja2VuZCIsIl9hdXRoX3VzZXJfaGFzaCI6IjU3MGFiN2MwNDI5MDk4YjUyZjA2OTFlMWJmMzliODBjNjM0NjE2YWIiLCJpZCI6MjA3Mzc3NSwiZW1haWwiOiJzdGFydW4uMTk5OEBnbWFpbC5jb20iLCJ1c2VybmFtZSI6Ik1lX09OIiwidXNlcl9zbHVnIjoiTWVfT04iLCJhdmF0YXIiOiJodHRwczovL3d3dy5ncmF2YXRhci5jb20vYXZhdGFyL2U5MTdjYWMzMWY5NzZhMDYyM2IxNDYwMTk2ZjRmMDFiLnBuZz9zPTIwMCIsInJlZnJlc2hlZF9hdCI6MTYyODQ4MjU0OCwiaXAiOiI2MS4wLjM1Ljk4IiwiaWRlbnRpdHkiOiIyOTI4YWM4YWMwMjNiOTdmMzljMDMzZDM1YjllZDE3NiIsInNlc3Npb25faWQiOjg0NTE4MjAsIl9zZXNzaW9uX2V4cGlyeSI6MTIwOTYwMH0.qgfaGy7PebjYmheNbVOJOJIeRc0OGF-0oGdmNLQt2G8; Domain=.leetcode.com; expires=Mon, 23 Aug 2021 04:15:48 GMT; HttpOnly; Max-Age=1209600; Path=/; SameSite=Lax; Secure"

const readFileDir = util.promisify(fs.readdir)
const codeWrite = util.promisify(fs.writeFile)
let aldyPresentSol = {}

;(async (  )=>{
	try {
		const subPresent = await readFileDir(__dirname) ;
		subPresent.map(val => {
			if(val.indexOf("_") >= 0)
			{
				let f = val.split("0")[0]
				aldyPresentSol[f] = 1
			}
		})
	}
	catch(Er)
	{
		return new Error("some err ", Er)
	}
})()

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

SolutionDetails.prototype.IsPresent = ()=>{
	if(aldyPresentSol[this.id] === 1 )
	{
		return true;
	}
	else
	{
		return false;
	}
}

SolutionDetails.prototype.fmtHdl = function(){
	this.fmtData += `id = ${this.id}` ;
	this.fmtData += '\n'
	this.fmtData += `runtime  = ${this.runtime} \n`
	this.fmtData += `memory = ${this.memory}\n`
	this.fmtData += `title_slug = ${this.title_slug}\n`
	this.fmtData += `code =\n \`\`\`${this.code}\`\`\``
	this._fileWriteHdl()
}

SolutionDetails.prototype._fileWriteHdl = async function() {
	let vs_sol = this.id ;
	//if(!fs.existsSync(`./${this.id}_${this.title_slug}`))
	//{
		try {
			await codeWrite(`${this.id}_${this.title_slug}.md`,this.fmtData)
			aldyPresentSol[this.id] = 1 ;
		}
		catch(er)
		{
			throw er;
		}
	//}
}
// two func
// 1 should fetch every information ProblemURL
// 	check if file exist if not then
// 	fetch everything present
// 2 should fetch recent information everyday from URL
// 	 keep a file of what last problem was synced in the repo
//
// will fetch all problems and their solutions

// file name = <id>_<title_slug>


//;(async function(){
	//try {
		//const r_resp = await axios({
			//method: 'GET',
			//baseURL : PROBLEM_URL ,
			//headers : { 'cookie' : cookieVal }
		//})

		//const l_problemObj = (r_resp.data)

		//l_problemObj.stat_status_pairs.map(async (bVal, index )=>{
			//const l_submittedSol = await axios({
				//method : 'GET',
				//baseURL : URL + "/" + bVal.stat.question__title_slug,
				//headers : {
					//'cookie' : cookieVal
				//}
			//})


			//console.log(l_submittedSol)
		//})
	//}catch(err){
		//console.log(err) ;
	//}
//})();

;(async function (){
	//const r_recentSubmittedSols = await axios({
		//method : 'GET',
		//baseURL : URL,
		//headers : {
			//cookie : cookieVal
		//}
	//})
	respJSON/*r_recentSubmittedSols.data*/.submissions_dump.map(bVal => {
		if(bVal.status_display === 'Accepted')
		{
			const sol_obj = new SolutionDetails(bVal);

			if(!sol_obj.IsPresent())
			{
				sol_obj.fmtHdl()

			}
		}
	})


})()

process.on('exit', ()=>{
	console.log("sdf")
})
