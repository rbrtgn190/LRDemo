For TC1.0: the browser Chromium 122.0.6261.129 is used.
For TC2.0: the browser Chrome 131.0.6778.86 is used.

And while replying TC2.0 scripts, you can enable Dev Tool for Chrome browser to check the Network har logs.
At Network Pane of Dev Tool, checking the network log for the request Wikipedia.org, you can check the detailed information about Request Header content, "HeaderFromjs:Supercool" is configured successfully.
So the API Utils.addAutoHeader("HeaderFromJS", "Supercool", false) working as expected in TC2.0 scripts.

Please note that:

While TC1.0 scripts replying, the built-in Chromium browser is invoked which is located under the folder path: <Vugen installed path>\bin\chrome, and this Chromium version is lower than the latest Google Chrome version.
While TC2.0 scripts replying, the native Google Chrome browser is invoked which is the Google Chrome installed in the testing machine and always in the latest version.

For the Request Header content logs difference between TC1.0 & TC2.0, it is the feature in Google Chromium browser level, instead of TruClient product side.



Princia Mugisha


----------------------
"Evaluate JavaScript code Utils.addAutoHeader('Hea...ercool', false) "  //// "HeaderFromjs:Supercool"

Load mode replay : 
Output.txt (console) will show EvaluateJavaScript processing, but not the additional header:
t=00003849ms: Step 1: Evaluate JavaScript code Utils.addAutoHeader("Hea...ercool", false)  started.    [MsgId: MMSG-205180]
t=00003855ms: Step 1: Evaluate JavaScript code Utils.addAutoHeader("Hea...ercool", false)  successfully completed with End Event "Action Completed".    [MsgId: MMSG-205180]
t=00003857ms: Step 2: Navigate to https://www.wikipedia.org/ started.    [MsgId: MMSG-205180]
t=00003867ms: Request headers for "https://www.wikipedia.org/" (328 byte(s)) (internal ID=0)    [MsgId: MMSG-204699]
		  GET https://www.wikipedia.org/
		  Upgrade-Insecure-Requests: 1
		  User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) HeadlessChrome/131.0.0.0 Safari/537.36
		  sec-ch-ua: "Google Chrome";v="131", "Chromium";v="131", "Not_A Brand";v="24"
		  sec-ch-ua-mobile: ?0
		  sec-ch-ua-platform: "Windows"
		  
Tip: to be able to DevTools not to close in interactive replay mode, run step by step

