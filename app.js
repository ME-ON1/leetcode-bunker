const axios = require("axios").default
const fs = require("fs")
require("dotenv").config()

const path = require("path")
const util = require("util")
const URL = "https://leetcode.com/api/submissions"
const PROBLEM_URL = "https://leetcode.com/api/problems/all"


const cookieVal = process.env.COOKIE_SECRET || "nothing" ;

const readFileDir = util.promisify(fs.readdir)
const codeWrite = util.promisify(fs.writeFile)
let aldyPresentSol = {}

const mapFilePresentInDir = async (  )=>{
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
        mapFilePresentInDir() ;
	const r_recentSubmittedSols = await axios({
		method : 'GET',
		baseURL : URL,
		headers : {
			cookie : cookieVal
		}
	})
	r_recentSubmittedSols.data.submissions_dump.map(bVal => {
		let r_submittedSol = {}
		if(bVal.status_display === 'Accepted')
		{
			const {
				id ,
				lang,
				runtime,
				memory,
				title_slug,
				code
			} = bVal ;

			r_submittedSolObj = Object.assign(r_submittedSol , {id, lang , runtime, memory , title_slug, code})
			filePresenceHdl(r_submittedSol)
		}
	})


})()

const filePresenceHdl = (r_sol ) =>{
	if(aldyPresentSol[r_sol.id] === 1)
	{
		return ;
	}
	else
	{
		fileWriteHdl(r_sol)
	}
}

const fileWriteHdl = async (r_sol) =>{
	let s = ""
	let p = r_sol.code.split("\n")

	p.forEach(val =>{
		let nw = "\t \t" + val ;
		return val  = nw ;
	})

	console.log(p , "whas")

	p.forEach(val => console.log(val))
	//s = `#### Solution Id is - ${r_sol.id} \n #### ProblemTitle - ${r_sol.title_slug} \n #### RunTime - ${r_sol.runtime}\n #### memory - ${r_sol.memory} \n #### langauge - ${r_sol.lang} \n \n #### code - \n \t \t \t  ${r_sol.code}`
	//console.log(s)
	////await codeWrite(`${r_sol.id}_${r_sol.title_slug}.md`, s) ;
}


process.on('exit', ()=>{
	console.log("sdf")
})
