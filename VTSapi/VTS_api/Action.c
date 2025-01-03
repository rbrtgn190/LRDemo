Action()
{
	web_add_auto_header("Content-Type",
		"application/x-www-form-urlencoded");

	web_custom_request("VTS_Command",
	    "URL=http://localhost:8888/api/",
		"Method=POST",
		"Resource=0",
		//"EncType=application/json", 
		"Body=request={"
    	"\"cmd\": \"handshake\","
    	"\"version\": \"1.0\","
    	"\"data\": {"
        "\"version\": \"1.0\""
    	"}",
		LAST
	);
	
//	web_custom_request("VTS_Command",
//	    "URL=http://localhost:8888/api/",
//		"Method=POST",
//		"Resource=0",
//		"EncType=application/json", 
//		"Body={\"cmd\": \"get\"," 
//		      "\"version\": \"1.0\"," 
//		      "\"data\": " 
//		      	"{\"index\": 1}" 
//	          "}",
//		LAST
//	);
	
	return 0;
}
