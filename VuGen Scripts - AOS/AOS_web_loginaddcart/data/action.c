Action()
{

	web_set_user("davidm", 
		lr_unmask("64f849be08db067599c7c745"), 
		"{host_nimbusserver_aos_com_8002}");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=nimbusserver.aos.com");

	web_url("nimbusserver.aos.com:8000", 
		"URL=http://{host_nimbusserver_aos_com_8000}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		LAST);

	web_url("ALL", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.143467447.1693930200; DOMAIN=nimbusserver.aos.com");

	web_add_cookie("_gid=GA1.2.653243541.1693930200; DOMAIN=nimbusserver.aos.com");

	web_add_cookie("_gat=1; DOMAIN=nimbusserver.aos.com");

	web_url("popularProducts.json", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	lr_start_transaction("1_login");

	web_custom_request("AccountLoginRequest", 
		"URL=http://{host_nimbusserver_aos_com_8001}//accountservice/ws/AccountLoginRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
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
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/738747973", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_url("738747973_2", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/738747973", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_login",LR_AUTO);

	lr_think_time(26);

	lr_start_transaction("2_panier");

	web_url("738747973_3", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/738747973", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("2_panier",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("3_Home");

	lr_end_transaction("3_Home",LR_AUTO);

	lr_start_transaction("4_BrowseSpeakers");

	web_url("products", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/category_banner_4.png", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/css/images/Filter.png", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_url("all_data", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("20", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/products/20", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("4_BrowseSpeakers",LR_AUTO);

	lr_think_time(39);

	lr_start_transaction("5_Add2Cart");

	web_custom_request("414141", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/738747973/product/20/color/414141?quantity=1", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("414141_2", 
		"Action=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/738747973/product/20/color/414141?quantity=1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=9D6B9FA529F6123C25CFB50307B5DBB5", ENDITEM, 
		LAST);

	lr_end_transaction("5_Add2Cart",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("6_Panier");

	web_url("738747973_4", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/738747973", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>738747973</accountId><base64Token>Basic ZGF2aWRtOlBhc3N3MHJk</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>738747973</accountId><base64Token>Basic ZGF2aWRtOlBhc3N3MHJk</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("738747973_5", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/738747973", 
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
		"Body={\"seaddress\":{\"addressLine1\":\"768 9th. Avenue\",\"addressLine2\":\"\",\"city\":\"New york\",\"country\":\"us\",\"postalCode\":5521495,\"state\":\"New York\"},\"secustomerName\":\"David Morgan\",\"secustomerPhone\":529987145,\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"9D6B9FA529F6123C25CFB50307B5DBB5\"}", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>738747973</accountId><base64Token>Basic ZGF2aWRtOlBhc3N3MHJk</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

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
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/Shipex.png", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/User.jpg", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
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

	lr_end_transaction("6_Panier",LR_AUTO);

	return 0;
}