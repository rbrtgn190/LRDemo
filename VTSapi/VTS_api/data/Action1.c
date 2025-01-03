Action1()
{

	web_custom_request("api", 
		"URL=http://localhost:8888/api/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"Body=request={\r\n    \"cmd\": \"handshake\",\r\n    \"version\": \"1.0\",\r\n    \"data\": {\r\n        \"version\": \"1.0\"\r\n    }\r\n}", 
		LAST);

	lr_think_time(16);

	web_custom_request("api_2", 
		"URL=http://localhost:8888/api/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		"Body=request={\r\n    \"cmd\": \"get\",\r\n    \"version\": \"1.0\",\r\n    \"data\": {\r\n        \"index\": 1\r\n    }\r\n}", 
		LAST);

	lr_think_time(4);

	web_custom_request("api_3", 
		"URL=http://localhost:8888/api/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		"Body=request={\r\n    \"cmd\": \"retrieve\",\r\n    \"version\": \"1.0\",\r\n    \"data\": {}\r\n}", 
		LAST);

	return 0;
}