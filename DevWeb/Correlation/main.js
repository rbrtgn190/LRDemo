// This script was generated and reflects raw data. It is recommended to change this code to your required logic
load.initialize("Initialize", async function () {
});

load.action("Action", async function () {
    load.WebRequest.defaults.returnBody = false;
    load.WebRequest.defaults.headers = {
        "Accept-Encoding": "gzip, deflate",
        "Accept-Language": "en-US,en;q=0.9",
        "Proxy-Connection": "keep-alive",
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/89.0.4389.90 Safari/537.36"
    };

    const webResponse1 = new load.WebRequest({
        id: 1,
        url: "http://advantageonlineshopping.com/",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Upgrade-Insecure-Requests": "1"
        },
        resources: [
            "http://advantageonlineshopping.com/css/main.min.css",
            "http://advantageonlineshopping.com/css/images/Down_arrow.svg",
            "http://advantageonlineshopping.com/vendor/requirejs/require.js",
            "http://advantageonlineshopping.com/main.min.js",
            "http://advantageonlineshopping.com/css/images/closeDark.png",
            "http://advantageonlineshopping.com/css/images/logo.png",
            "http://advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff",
            "http://advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff",
            "http://advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff",
            "http://advantageonlineshopping.com/css/images/arrow_right.png",
            "http://advantageonlineshopping.com/catalog/fetchImage?image_id=speakers",
            "http://advantageonlineshopping.com/catalog/fetchImage?image_id=tablets",
            "http://advantageonlineshopping.com/catalog/fetchImage?image_id=laptops",
            "http://advantageonlineshopping.com/catalog/fetchImage?image_id=mice",
            "http://advantageonlineshopping.com/catalog/fetchImage?image_id=headphones",
            "http://advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff",
            "http://advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff",
            "http://advantageonlineshopping.com/css/images/Banner1.jpg",
            "http://advantageonlineshopping.com/css/images/Special-offer.jpg",
            "http://advantageonlineshopping.com/css/images/chat_logo.png",
            "http://advantageonlineshopping.com/css/images/GoUp.png",
            "http://advantageonlineshopping.com/css/images/facebook.png",
            "http://advantageonlineshopping.com/css/images/twitter.png",
            "http://advantageonlineshopping.com/css/images/linkedin.png",
            "http://advantageonlineshopping.com/css/images/Banner2.jpg",
            "http://advantageonlineshopping.com/css/images/Banner3.jpg",
            "http://advantageonlineshopping.com/css/images/Popular-item3.jpg",
            "http://advantageonlineshopping.com/css/images/Popular-item2.jpg",
            "http://advantageonlineshopping.com/css/images/Popular-item1.jpg",
            "http://advantageonlineshopping.com/css/images/FacebookLogo.png",
            "http://advantageonlineshopping.com/catalog/fetchImage?image_id=3100",
        ],
    }).sendSync();

    const webResponse2 = new load.WebRequest({
        id: 2,
        url: "http://advantageonlineshopping.com/services.properties",
        method: "GET",
        headers: {
            "Accept": "*/*",
            "Referer": "http://advantageonlineshopping.com/"
        },
    }).sendSync();

    const webResponse3 = new load.WebRequest({
        id: 3,
        url: "http://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL",
        method: "GET",
        headers: {
            "Accept": "application/json, text/plain, */*",
            "Referer": "http://advantageonlineshopping.com/"
        },
    }).sendSync();

    const webResponse4 = new load.WebRequest({
        id: 4,
        url: "http://advantageonlineshopping.com//accountservice/ws/GetAccountConfigurationRequest",
        method: "POST",
        headers: {
            "Accept": "application/xml, text/xml, */*; q=0.01",
            "Content-Type": "text/xml; charset=UTF-8",
            "Origin": "http://advantageonlineshopping.com",
            "Referer": "http://advantageonlineshopping.com/",
            "SOAPAction": "com.advantage.online.store.accountserviceGetAccountConfigurationRequest",
            "X-Requested-With": "XMLHttpRequest"
        },
        body: `<?xml version="1.0" encoding="UTF-8"?>        <soap:Envelope xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">
            <soap:Body>
                <GetAccountConfigurationRequest xmlns="com.advantage.online.store.accountservice"></GetAccountConfigurationRequest>
            </soap:Body>
        </soap:Envelope>`,
    }).sendSync();

    const webResponse5 = new load.WebRequest({
        id: 5,
        url: "http://advantageonlineshopping.com/catalog/api/v1/categories",
        method: "GET",
        headers: {
            "Accept": "application/json, text/plain, */*",
            "Referer": "http://advantageonlineshopping.com/"
        },
    }).sendSync();

    const webResponse6 = new load.WebRequest({
        id: 6,
        url: "http://advantageonlineshopping.com/catalog/api/v1/deals/search",
        method: "GET",
        headers: {
            "Accept": "application/json, text/plain, */*",
            "Referer": "http://advantageonlineshopping.com/"
        },
        queryString: {
            "dealOfTheDay": "true"
        },
    }).sendSync();

    const webResponse7 = new load.WebRequest({
        id: 7,
        url: "http://advantageonlineshopping.com/app/tempFiles/popularProducts.json",
        method: "GET",
        headers: {
            "Accept": "application/json, text/plain, */*",
            "Referer": "http://advantageonlineshopping.com/"
        },
    }).sendSync();

    const webResponse8 = new load.WebRequest({
        id: 8,
        url: "http://advantageonlineshopping.com/app/views/home-page.html",
        method: "GET",
        headers: {
            "Accept": "text/html",
            "Referer": "http://advantageonlineshopping.com/"
        },
    }).sendSync();

    const webResponse9 = new load.WebRequest({
        id: 9,
        url: "http://advantageonlineshopping.com//accountservice/ws/AccountLoginRequest",
        method: "POST",
        headers: {
            "Accept": "application/xml, text/xml, */*; q=0.01",
            "Content-Type": "text/xml; charset=UTF-8",
            "Origin": "http://advantageonlineshopping.com",
            "Referer": "http://advantageonlineshopping.com/",
            "SOAPAction": "com.advantage.online.store.accountserviceAccountLoginRequest",
            "X-Requested-With": "XMLHttpRequest"
        },
        body: `<?xml version="1.0" encoding="UTF-8"?>        <soap:Envelope xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">
            <soap:Body>
                <AccountLoginRequest xmlns="com.advantage.online.store.accountservice">
                    <email></email>
                    <loginPassword>Mercury</loginPassword>
                    <loginUser>Mercury</loginUser>
                </AccountLoginRequest>
            </soap:Body>
        </soap:Envelope>`,
        extractors: [
            // Source='Rule' Original value="TWVyY3VyeTpNZXJjdXJ5"
            new load.BoundaryExtractor("t_authorization", {
                leftBoundary: "<ns2:t_authorization>",
                rightBoundary: "</ns2:t_authorization>",
                scope: "body"
            }), 
            // Source='Rule' Original value="151014987"
            new load.BoundaryExtractor("userId", {
                leftBoundary: "<ns2:userId>",
                rightBoundary: "</ns2:userId>",
                scope: "body"
            }), 
            new load.TextCheckExtractor("isLoginSuccess", {
                text: "Login Successful",
                scope: load.ExtractorScope.All,
                failOn: false
            })
        ],
    }).sendSync();

    // load.setUserCredentials({
    //     //The following web request uses Basic authentication, please fill in missing credentials.
    //     username: "Mercury",
    //     password: "Mercury",
    //     host: "advantageonlineshopping.com"
    // });

    const webResponse10 = new load.WebRequest({
        id: 10,
        url: `http://advantageonlineshopping.com/order/api/v1/carts/${webResponse9.extractors['userId']}`,
        method: "GET",
        headers: {
            "Accept": "application/json, text/plain, */*",
            "Referer": "http://advantageonlineshopping.com/",
            "Authorization": `Basic ${webResponse9.extractors['t_authorization']}`
        },
    }).sendSync();

    const webResponse11 = new load.WebRequest({
        id: 11,
        url: `http://advantageonlineshopping.com/order/api/v1/carts/${webResponse9.extractors['userId']}`,
        method: "PUT",
        headers: {
            "Accept": "application/json, text/plain, */*",
            "Content-Type": "application/json;charset=UTF-8",
            "Origin": "http://advantageonlineshopping.com",
            "Referer": "http://advantageonlineshopping.com/",
            "Authorization": `Basic ${webResponse9.extractors['t_authorization']}`
        },
        body: [
            {
                "hexColor": "414141",
                "productId": 16,
                "quantity": 1
            }
        ],
    }).sendSync();

    const webResponse12 = new load.WebRequest({
        id: 12,
        url: "http://advantageonlineshopping.com//accountservice/ws/AccountLogoutRequest",
        method: "POST",
        headers: {
            "Accept": "application/xml, text/xml, */*; q=0.01",
            "Content-Type": "text/xml; charset=UTF-8",
            "Origin": "http://advantageonlineshopping.com",
            "Referer": "http://advantageonlineshopping.com/",
            "SOAPAction": "com.advantage.online.store.accountserviceAccountLogoutRequest",
            "X-Requested-With": "XMLHttpRequest"
        },
        body: `<?xml version="1.0" encoding="UTF-8"?>        <soap:Envelope xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">
            <soap:Body>
                <AccountLogoutRequest xmlns="com.advantage.online.store.accountservice">
                    <loginUser>${webResponse9.extractors['userId']}</loginUser>
                    <base64Token>Basic ${webResponse9.extractors['t_authorization']}</base64Token>
                </AccountLogoutRequest>
            </soap:Body>
        </soap:Envelope>`,
    }).sendSync();

});

load.finalize("Finalize", async function () {
});
