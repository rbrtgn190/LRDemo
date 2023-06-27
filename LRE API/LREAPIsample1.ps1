Set-PSDebug -Trace 1

#[Net.ServicePointManager]::Expect100Continue = $true
[Net.ServicePointManager]::Expect100Continue

$body = '{"ClientIdKey":"I_KEY_6xxxxxx","ClientSecretKey":"S_KEY_xxxx"}'
$loginUri =  "https://lreorgdemo.saas.microfocus.com/LoadTest/rest/authentication-point/AuthenticateClient?tenant=63acd16e-6797-431a-b734-788ab1ef1db9"

$loginReq=Invoke-WebRequest -Uri $loginUri   -Method 'POST' -ContentType 'application/json' -Body $body -SessionVariable ForCookies

echo "----------------------- loginReq.Content -------------------------"
$loginReq
$loginReq.Content 

echo "-----------------------  Cookies --------------------------------"
#$cookies = $ForCookies.Cookies.GetCookies($loginUri )

$lwsso = $ForCookies.Cookies.GetCookies($loginUri )["LWSSO_COOKIE_KEY"].Value
$AWSALB  = $ForCookies.Cookies.GetCookies($loginUri )["AWSALB"].Value
$AWSALBCORS  = $ForCookies.Cookies.GetCookies($loginUri )["AWSALBCORS"].Value
#$ASPXAUTH  = $ForCookies.Cookies.GetCookies($loginUri )[".ASPXAUTH"].Value

$headers= New-Object "System.Collections.Generic.Dictionary[[String],[String]]"
$headers.Add('Accept','*/*')
$headers.Add('LWSSO_COOKIE_KEY',$lwsso)
$headers.Add('AWSALB',$AWSALB)
$headers.Add('AWSALBCORS',$AWSALBCORS)
#$headers.Add('Cookie', ".ASPXAUTH="+$ASPXAUTH+";AWSALB="+$AWSALB+";AWSALBCORS="+$AWSALBCORS+";lwsso="+$lwsso)
$headers.Add('Cookie', "AWSALB="+$AWSALB+";AWSALBCORS="+$AWSALBCORS+";lwsso="+$lwsso+";LoginClient=qc")

$headers


echo "-----------------------  r2 Create Test Run  --------------------------------"

$r2=Invoke-WebRequest -Uri https://lreorgdemo.saas.microfocus.com/Loadtest/rest/domains/DEFAULT/projects/jmguerin_project/Runs?tenant=63acd16e-6797-431a-b734-788ab1ef1db9 -Method 'POST' -ContentType 'application/xml' -Body '<Run xmlns="http://www.hp.com/PC/REST/API"><PostRunAction>Collate And Analyze</PostRunAction><TestID>175</TestID><TestInstanceID>8</TestInstanceID><TimeslotDuration><Hours>0</Hours><Minutes>30</Minutes></TimeslotDuration><VudsMode>false</VudsMode></Run>' -Headers $headers  -WebSession $ForCookies #-SessionVariable $ForCookies
$r2

#echo "---------------------- r3 Scripts ------------------------"
#$r3= Invoke-WebRequest https://lreorgdemo.saas.microfocus.com/Loadtest/rest/domains/DEFAULT/projects/jmguerin_project/Scripts?tenant=63acd16e-6797-431a-b734-788ab1ef1db9 -Method 'GET' -Headers $headers -WebSession $ForCookies #-SessionVariable $ForCookies

#$3 |Out-File ".\3.txt"
