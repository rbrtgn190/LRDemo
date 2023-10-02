Login()
{

	lr_think_time(25);

	web_url("FacebookLogo.png", 
		"URL=http://{host_nimbusserver_aos_com_8000}/css/images/FacebookLogo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", 
		"Snapshot=t9.inf", 
		LAST);

	lr_think_time(4);

	web_custom_request("AccountLoginRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/AccountLoginRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='738747973' 
Name ='CorrelationParameter' 
Type ='Rule' 
AppName ='AOS' 
RuleName ='userId'*/
	web_reg_save_param_xpath(
		"ParamName=CorrelationParameter",
		"QueryString=/SOAP-ENV:Envelope/SOAP-ENV:Body/ns2:AccountLoginResponse/ns2:StatusMessage/ns2:userId/text()",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_custom_request("AccountLoginRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Passw0rd</loginPassword><loginUser>davidm</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("738747973",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/{CorrelationParameter}",
		"Method=OPTIONS",
		"Resource=0",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t12.inf",
		"Mode=HTML",
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1694082020.1.1.1694082080.60.0.0; DOMAIN=nimbusserver.aos.com");

/*Correlation comment: Automatic rules - Do not change!  
Original value='1E8A1931B80F36E94D1728F082AEC451' 
Name ='sessionId' 
Type ='Rule' 
AppName ='AOS' 
RuleName ='sessionid_1'*/
	web_reg_save_param_regexp(
		"ParamName=sessionId",
		"RegExp=JSESSIONID=(.*?);",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Cookies",
		LAST);

	web_url("738747973_2",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/{CorrelationParameter}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t13.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=http://{host_nimbusserver_aos_com_8000}/catalog/fetchImage?image_id=4200", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM,
		LAST);

	web_custom_request("738747973_3",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/{CorrelationParameter}",
		"Method=PUT",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t14.inf",
		"Mode=HTML",
		"Body=[{\"hexColor\":\"C3C3C3\",\"productId\":20,\"quantity\":2}]",
		LAST);

	return 0;
}
