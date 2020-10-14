// This script was generated and reflects raw data. It is recommended to change this code to your required logic

const swaggerApi = require('./swaggerApi.js')(load);


load.initialize("Initialize", async function () {
});

load.action("Action", async function () {
    load.WebRequest.defaults.returnBody = false;

    const webResponse1 = new load.WebRequest({
        id: 1,
        url: "http://petstore.swagger.io/",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate",
            "Accept-Language": "en-US,en;q=0.9",
            "Proxy-Connection": "keep-alive",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.121 Safari/537.36"
        },
        resources: [
            "https://petstore.swagger.io/swagger-ui.css",
            "https://petstore.swagger.io/swagger-ui-bundle.js",
            "https://petstore.swagger.io/swagger-ui-standalone-preset.js",
            "https://petstore.swagger.io/favicon-32x32.png",
            "https://validator.swagger.io/validator?url=https%3A%2F%2Fpetstore.swagger.io%2Fv2%2Fswagger.json",
        ],
    }).sendSync();

    const webResponse2 = new load.WebRequest({
        id: 2,
        url: "https://petstore.swagger.io/v2/swagger.json",
        method: "GET",
        headers: {
            "accept": "application/json,*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://petstore.swagger.io/",
            "sec-fetch-dest": "empty",
            "sec-fetch-mode": "cors",
            "sec-fetch-site": "same-origin",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.121 Safari/537.36"
        },
    }).sendSync();

    const TRT1 = new load.Transaction("findPetsByStatus");
    TRT1.start();
    let webRequest3 = swaggerApi.findPetsByStatus(`available`);
    const webResponse3 = await webRequest3.send();
    TRT1.stop();

    const TRT2 = new load.Transaction("getInventory");
    TRT2.start();
    let webRequest4 = swaggerApi.getInventory();
    const webResponse4 = await webRequest4.send();
    TRT2.stop();

    const TRT3 = new load.Transaction("createUsersWithArrayInput");
    TRT3.start();
    let webRequest5 = swaggerApi.createUsersWithArrayInput(`[
        {
          "id": 0,
          "username": "string",
          "firstName": "string",
          "lastName": "string",
          "email": "string",
          "password": "string",
          "phone": "string",
          "userStatus": 0
        }
      ]`);
    const webResponse5 = await webRequest5.send();
    TRT3.stop();

});

load.finalize("Finalize", async function () {
});
