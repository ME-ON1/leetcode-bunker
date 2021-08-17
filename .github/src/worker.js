const {worker, parentPort } =require("worker_threads")

const {SolutionDetails } = require("./SolutionDetails")


parentPort.on('message' , (data) => {

	if(data.workerData === 'EXIT')
	{
		process.exit()
	}
	else
	{
		parentPort.postMessage(writeSol(data.workerData))
	}
})

const writeSol = (data) => {
	console.log("am i here ?")
	const solutionDetails = data.submissions_dump
	if (solutionDetails.length > 0 )
	{
		console.log("im also here")
		console.log(solutionDetails)
		for(let i = 0 ; i < solutionDetails.length ; i++ )
		{
			if(solutionDetails[i].status_display === 'Accepted')
			{
				const sol_obj = new SolutionDetails(solutionDetails[i]);
				sol_obj.fmtHdl()
			}
		}
	}
}

