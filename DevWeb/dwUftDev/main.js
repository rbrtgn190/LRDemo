var LFT = require("leanft");
var expect = require("leanft/expect");
var verify = require("leanft/verify");

load.initialize(async function () {
    load.log("---- Initialize ----");
    LFT.init();
});




load.action("Action", async function () {
    load.log("---- Action ----");
   LFT.Reporter.startSpec("Action" + load.config.runtime.iteration);
//   LFT.Reporter.startReportingContext("Action" + load.config.runtime.iteration)
 

    let transactionCat = new load.Transaction("Categories");
    transactionCat.start();
    let categoriesRequest = new load.WebRequest({
        id:1,
        url:"http://advantageonlineshopping.com/catalog/api/v1/categories",
        method:"GET",
        headers:{
            "Accept" :"application/json, text/plain, */*"
        },
        returnBody:true,
        handleHTTPError: (webResponse) =>{
            verify(webResponse.status).toEqual(200);
			if (webResponse.status != 200){
                LFT.Reporter.reportEvent("Status code: " + webResponse.status, LFT.Reporter.Status.Failed);
			}
            return false;
		}				
    }).sendSync();
    transactionCat.stop();

    //LFT.Reporter.reportEvent("Status code: " + categoriesRequest.status, LFT.Reporter.Status.Passed);
    LFT.Reporter.reportEvent("Duration: " + categoriesRequest.duration, LFT.Reporter.Status.Passed);
    LFT.Reporter.reportEvent("Return body: " + categoriesRequest.body, LFT.Reporter.Status.Passed);

    //let res = verify(categoriesRequest.status).toEqual(200);
    //expect(categoriesRequest.status).toEqual(200);

    LFT.Reporter.endSpec();
    // LFT.Reporter.endReportingContext();
});



load.finalize(async function () {
    load.log("---- Finalize ----");
    LFT.Reporter.generateReport();
    LFT.cleanup();
});
