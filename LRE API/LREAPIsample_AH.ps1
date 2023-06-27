################## LoadRunner API URL ##########################

$LR_Auth = "http://xxxxxxxxxxxxp/loadtest/rest/authentication-point/authenticate"
$LR_Auth_Admin = "http://xxxxxxxxxxxxp/Admin/rest/authentication-point/authenticate"

################## ########### ##########################

################## LoadRunner Authentication ##########################

$webrequest = Invoke-WebRequest -Uri $LR_Auth `
-Method "POST" `
-Headers @{
"Accept"="application/json, text/plain, */*"
  "Content-Encoding"="gzip"
  "X-XSRF-Header"="dbbc7dd2188e72f1128"
  "User-Agent"="Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.150 Safari/537.36"
  "Referer"="http://xxxxxxxxxxxxp/Loadtest/pcx/login?ReturnUrl=%2FLoadtest"
  "Accept-Encoding"="gzip, deflate"
  "Accept-Language"="en-US,en;q=0.9"
} `
-ContentType "application/json" `
-Body "{`"Token`":`"xxxxxxxxxxxxMw==`"}" -SessionVariable websession


################## Get LWSSO Token to make LoadRunner API Requests ##########################

$cookies = $websession.Cookies.GetCookies($LR_Auth)


# Here, you can output all of $cookies, or you can go through them one by one. 

foreach ($cookie in $cookies) { 
     # You can get cookie specifics, or just use $cookie 
     # This gets each cookie's name and value 
     Write-Host "$($cookie.name) = $($cookie.value)" 
}

################## LoadRunner Configuration  ##########################

$LRServer = "http://xxxxxxxxxxxxp/Loadtest"
$LRServerAdmin = "http://xxxxxxxxxxxxp/Admin"
 
$domainName1 = "DDDXCOM"
$projectName1 = "Test_Loadrunner"
$domainName2 = "WINDCHILL"
$projectName2 = "Test_Jmeter_scripts"

$runID = "1192"
$ResultID = "5651"

################## LoadRunner API Command ##########################

## LoadRunner API Admin : https://admhelp.microfocus.com/lre/en/all/api_refs/Performance_Center_REST_API/Content/Results.htm
## LoadRunner API : https://admhelp.microfocus.com/lre/en/all/api_refs/Performance_Center_REST_API/Content/HTML_Results_Report.htm


$LR_RunResults = $LRServer + "/LoadTest/rest/domains/" + $domain1 + "/projects/" + $projectName1 + "/Runs/" + $runID + "/Results/" + $ResultID + "/data"
$LR_RunResults2 = "http://xxxxxxxxxxxxp/loadtest/PCWeb/Dialogs/DownloadResult.aspx?resultID=" + $runID

Write-Host $LR_RunResults2
#$LR_ResultsUrl = $LR_RunResults2 | Out-File "C:\Users\zxmulcapg049\Desktop\LRResultIDUrl.txt"

################## Make LoadRunner API Requests with the cookie in 'Invoke-WebRequest' and -WebSession $session   ##########################

$session = [Microsoft.PowerShell.Commands.WebRequestSession]::new()
$session.Cookies.Add($cookie)


$response = Invoke-WebRequest -Uri $LR_RunResults `
-Method "GET" `
-WebSession $session

############################### Do Not Work !! (no option like --comprss in Linux Bash) ###########################

#wget $LR_RunResults2  -OutFile "C:\.....\.....LR_Results.zip"

# replace by ? : /LoadTest/rest/domains/{domainName}/projects/{projectName}/Runs/{ID}/Results/{ResultID}/data

###############################  Work with a call to Chrome.exe ###########################

[system.Diagnostics.Process]::Start("chrome",$LR_RunResults2)

####################### Seems to Work but No Full Response Body ###########################

$session = [Microsoft.PowerShell.Commands.WebRequestSession]::new()
$session.Cookies.Add($cookie)


###############################    LoadRunner API Run Extended  ##################################

$response2 = Invoke-WebRequest -Uri "http://xxxxxxxxxxxxp/Loadtest/rest/domains/DDDX_COM/projects/Test_Loadrunner/runs/1000/Extended" -Method "GET" `
-WebSession $session 
$response2 |Out-File "C:\Users\zxmulcapg049\Desktop\apiRunExtended.xml"