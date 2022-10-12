Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("UA-CPU", 
		"AMD64");

/*	web_url("favicon.ico", 
		"URL=https://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("favicon.ico_2", 
		"URL=https://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);*/

	web_revert_auto_header("UA-CPU");

	web_add_cookie("_ga=GA1.2.842289835.1542120126; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.637907777.1542120126; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com", 
		"URL=http://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.eot?", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.eot?", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.eot?", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.eot?", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j71&a=936534940&t=pageview&_s=1&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1058&vp=674x869&je=1&fl=28.0%20r0&_u=IEBAAEQ~&jid=401104430&gjid=2043768415&cid=842289835.1542120126&tid=UA-81334227-1&_gid=637907777.1542120126&_r=1&z=890268973", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.eot?", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/css/images/arrow_right.png", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j71&a=936534940&t=pageview&_s=2&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1058&vp=674x869&je=1&fl=28.0%20r0&_u=KEBAAEQ~&jid=&gjid=&cid=842289835.1542120126&tid=UA-81334227-1&_gid=637907777.1542120126&z=198571570", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j71&a=936534940&t=pageview&_s=3&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2Fsearch%2F%3FviewAll%3Dlaptop&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1058&vp=674x869&je=1&fl=28.0%20r0&_u=KEBAAEQ~&jid=&gjid=&cid=842289835.1542120126&tid=UA-81334227-1&_gid=637907777.1542120126&z=1453880032", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j71&a=936534940&t=pageview&_s=4&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2Fproduct%2F2%3FviewAll%3Dlaptop&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1058&vp=674x869&je=1&fl=28.0%20r0&_u=KEBAAEQ~&jid=&gjid=&cid=842289835.1542120126&tid=UA-81334227-1&_gid=637907777.1542120126&z=947427958", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1201", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j71&a=936534940&t=pageview&_s=5&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1058&vp=674x869&je=1&fl=28.0%20r0&_u=KEBAAEQ~&jid=&gjid=&cid=842289835.1542120126&tid=UA-81334227-1&_gid=637907777.1542120126&z=434379226", ENDITEM, 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ALL_2", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("SOAPAction");

	web_revert_auto_header("X-Requested-With");

	web_url("categories", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUID=V=2&GUID=5E9A8658EE9D44038CE53B657A0691FC&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20181113; DOMAIN=iecvlist.microsoft.com");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1479242656000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_url("search-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/search-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_url("product-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}