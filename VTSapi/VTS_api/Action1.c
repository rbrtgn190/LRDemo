Action1()
{

	lr_start_transaction("handshake");

	web_reg_find("Search=Body",
		"Text=status\":{\"code\":0,\"error\":\"OK\"}",
		LAST);

	web_custom_request("handshake", 
		"URL=http://localhost:8888/api/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"Body=request={\r\n    \"cmd\": \"handshake\",\r\n    \"version\": \"1.0\",\r\n    \"data\": {\r\n        \"version\": \"1.0\"\r\n    }\r\n}", 
		LAST);

	lr_end_transaction("handshake", LR_AUTO);
	
	lr_start_transaction("get");

	web_reg_find("Search=Body",
	"Text=status\":{\"code\":0",
	LAST);

	web_custom_request("get", 
		"URL=http://localhost:8888/api/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		"Body=request={\r\n    \"cmd\": \"get\",\r\n    \"version\": \"1.0\",\r\n    \"data\": {\r\n        \"index\": 1\r\n    }\r\n}", 
		LAST);
	
	lr_end_transaction("get", LR_AUTO);

	

	lr_start_transaction("retrieve");

	web_reg_find("Search=Body",
		"Text=status\":{\"code\":0",
		LAST);

	web_custom_request("retrieve", 
		"URL=http://localhost:8888/api/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		"Body=request={\r\n    \"cmd\": \"retrieve\",\r\n    \"version\": \"1.0\",\r\n    \"data\": {}\r\n}", 
		LAST);

	lr_end_sub_transaction("retrieve", LR_AUTO);

	return 0;
}