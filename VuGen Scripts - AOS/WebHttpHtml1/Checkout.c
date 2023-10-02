Checkout()
{

	lr_think_time(13);

	web_url("738747973_4",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/{CorrelationParameter}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t24.inf",
		"Mode=HTML",
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1694082020.1.1.1694082099.41.0.0; DOMAIN=nimbusserver.aos.com");

	web_url("shoppingCart.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountByIdRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdRequest_2",
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountByIdRequest",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{CorrelationParameter}</accountId><base64Token>Basic ZGF2aWRtOlBhc3N3MHJk</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>",
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountByIdNewRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest_2",
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountByIdNewRequest",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{CorrelationParameter}</accountId><base64Token>Basic ZGF2aWRtOlBhc3N3MHJk</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>",
		LAST);

	web_url("738747973_5",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/{CorrelationParameter}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t30.inf",
		"Mode=HTML",
		LAST);

	web_custom_request("shippingcost", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/shippingcost/", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("shippingcost_2",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/shippingcost/",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body={\"seaddress\":{\"addressLine1\":\"768 9th. Avenue\",\"addressLine2\":\"\",\"city\":\"New york\",\"country\":\"us\",\"postalCode\":5521495,\"state\":\"New York\"},\"secustomerName\":\"David Morgan\",\"secustomerPhone\":529987145,\"senumberOfProducts\":3,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId}\"}",
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest_2",
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountPaymentPreferencesRequest",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{CorrelationParameter}</accountId><base64Token>Basic ZGF2aWRtOlBhc3N3MHJk</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>",
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1694082020.1.1.1694082115.25.0.0; DOMAIN=nimbusserver.aos.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1694082020.1.1.1694082118.22.0.0; DOMAIN=nimbusserver.aos.com");

	web_url("orderPayment-page.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/Bell.png", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		LAST);

	web_custom_request("GetCountriesRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetCountriesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/Check.png", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/User.jpg", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/Shipex.png", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		LAST);

	web_custom_request("GetCountriesRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	return 0;
}
