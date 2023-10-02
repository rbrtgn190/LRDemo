Logout()
{

	lr_think_time(17);

	web_custom_request("AccountLogoutRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/AccountLogoutRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("AccountLogoutRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>738747973</loginUser><base64Token>Basic ZGF2aWRtOlBhc3N3MHJk</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	return 0;
}