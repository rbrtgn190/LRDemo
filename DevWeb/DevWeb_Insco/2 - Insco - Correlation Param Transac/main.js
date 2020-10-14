// This script was generated and reflects raw data. It is recommended to change this code to your required logic
load.initialize(async function () {
});

load.action("Action", async function () {

    const HTMLTitle = new load.RegexpExtractor("HTMLTitle", {
        expression: "<title>(.*?)</title>",
        flags: "i",
        groupNumber: -1
        } );
    const MSGError = new load.BoundaryExtractor("messageerror", "class=\"message-error\"><td>", "</td>");
    const LoggedInAs = new load.BoundaryExtractor("loggedinas", "<p>Logged in as</p><label for=\"logout-form\" class=\"login\>", "</label>");
    
    var username = load.params.user;
    var password = load.params.password;


    load.WebRequest.defaults.returnBody = false;
    load.WebRequest.defaults.headers = {
        "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3",
        "Accept-Encoding": "gzip, deflate",
        "Accept-Language": "fr-FR,fr;q=0.9,en-US;q=0.8,en;q=0.7",
        "Cache-Control": "no-cache",
        "Connection": "keep-alive",
        "Pragma": "no-cache",
        "Upgrade-Insecure-Requests": "1",
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/73.0.3683.86 Safari/537.36"
    };









    const webResponse1 = new load.WebRequest({
        id: 1,
        url: "http://demo.borland.com/InsuranceWebExtJS/",
        method: "GET",
        resources: [
            "http://demo.borland.com/InsuranceWebExtJS/javascript/menu.js",
            "http://demo.borland.com/InsuranceWebExtJS/css/style.css",
            "http://demo.borland.com/InsuranceWebExtJS/images/login.gif;jsessionid=1576411CB36EF57546A9FECBF33C7B09",
            "http://demo.borland.com/InsuranceWebExtJS/images/submit2.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/main_services.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/highlights.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/signup.gif;jsessionid=1576411CB36EF57546A9FECBF33C7B09",
            "http://demo.borland.com/InsuranceWebExtJS/images/profile.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/spacer.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/h_back2.jpg",
            "http://demo.borland.com/InsuranceWebExtJS/images/pimp1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/ltc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/lbc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rtc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rbc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/pimp2.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/pimp3.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/ltc1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rtc1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/lbc1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rbc1.gif",
        ],
        extractors: [
            // Source='Rule' Original value="1576411CB36EF57546A9FECBF33C7B09"
            new load.BoundaryExtractor("InscoSessionID", {
                "leftBoundary": "JSESSIONID=",
                "rightBoundary": ";"
            }), 
        ],
    }).sendSync();









    const Login = new load.Transaction("Login");
    Login.start();

    const webResponse2 = new load.WebRequest({
        id: 2,
        url: `http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=${webResponse1.extractors['InscoSessionID']}`,
        method: "POST",
        headers: {
            "Content-Type": "application/x-www-form-urlencoded",
            "Origin": "http://demo.borland.com",
            "Referer": "http://demo.borland.com/InsuranceWebExtJS/"
        },
        resources: [
            "http://demo.borland.com/InsuranceWebExtJS/css/style.css",
            "http://demo.borland.com/InsuranceWebExtJS/javascript/menu.js",
            "http://demo.borland.com/InsuranceWebExtJS/images/details.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/logout.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/spacer.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/main_services.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/highlights.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/profile.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/submit2.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/h_back2.jpg",
            "http://demo.borland.com/InsuranceWebExtJS/images/pimp1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/lbc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rtc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/ltc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rbc.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/pimp2.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/pimp3.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/ltc1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rtc1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/lbc1.gif",
            "http://demo.borland.com/InsuranceWebExtJS/images/rbc1.gif",
        ],
        body: {
            "login-form": "login-form",
            "login-form:email": `${username}`, //"john.smith@gmail.com",
            "login-form:password": `${password}`, //"john",
            "login-form:login.x": "40",
            "login-form:login.y": "7",
            "javax.faces.ViewState": "j_id1:j_id2"
        },
        extractors: [
            HTMLTitle, //"{\"full\": \"<title>InsuranceWeb: Home</title>\", \"groups\": [\"InsuranceWeb: Home\"]}"
            MSGError,
            LoggedInAs
        ],
        returnBody: true
    }).sendSync();

    load.log("=============== Parameters ==========");
    load.log("Iteration : " + load.config.runtime.iteration + " ; UserName : " + username + " ; Password : " + password);
    load.log("=====================================");


    if (webResponse2.textCheck("message-error")) {
        // Login Failed !!!
        load.log(`>>>>>>> Erreur : ${webResponse2.extractors.messageerror}`, load.LogLevel.error);
        load.log(`>>>>>>> Iteration : ${load.config.runtime.iteration} ; UserName : [${username}]  ; Password :  [${password}]`);
        Login.stop(load.TransactionStatus.Failed);
    } else {
        // Login Succeed
        load.log(">>>>>>> Logged in :-)");
        // load.log(`>>>>>>> Logged in as : ${webResponse2.extractors.loggedinas}`); // TODO Fix loggedinas correlation fails
        Login.stop(load.TransactionStatus.Passed);
    }
    load.log("=====================================");











    const webResponse3 = new load.WebRequest({
        id: 3,
        url: "http://demo.borland.com/InsuranceWebExtJS/index.jsf",
        method: "POST",
        headers: {
            "Content-Type": "application/x-www-form-urlencoded",
            "Origin": "http://demo.borland.com",
            "Referer": `http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=${webResponse1.extractors['InscoSessionID']}`
        },
        // resources: [
        //     "http://demo.borland.com/InsuranceWebExtJS/css/style.css",
        //     "http://demo.borland.com/InsuranceWebExtJS/javascript/menu.js",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/login.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/signup.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/profile.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/main_services.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/highlights.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/spacer.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/submit2.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/h_back2.jpg",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/pimp1.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/ltc.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/lbc.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/rtc.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/rbc.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/pimp2.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/pimp3.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/ltc1.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/lbc1.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/rtc1.gif",
        //     "http://demo.borland.com/InsuranceWebExtJS/images/rbc1.gif",
        // ],
        body: {
            "logout-form": "logout-form",
            "logout-form:logout.x": "12",
            "logout-form:logout.y": "7",
            "javax.faces.ViewState": "j_id1:j_id3"
        },
    }).sendSync();




});

load.finalize(async function () {
});
