// This script was generated and reflects raw data. It is recommended to change this code to your required logic

const swaggerApi = require('./swaggerApi.js')(load);


load.initialize("Initialize", async function () {
});

load.action("Action", async function () {
    load.WebRequest.defaults.returnBody = false;
    load.WebRequest.defaults.headers = {
        "Accept-Encoding": "gzip, deflate, br",
        "Accept-Language": "en-US,en;q=0.9",
        "Connection": "keep-alive",
        "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/84.0.4147.89 Safari/537.36"
    };

    const webResponse1 = new load.WebRequest({
        id: 1,
        url: "https://petstore.swagger.io/",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "none",
            "Sec-Fetch-User": "?1",
            "Upgrade-Insecure-Requests": "1"
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
            "Accept": "application/json,*/*",
            "Referer": "https://petstore.swagger.io/",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin"
        },
    }).sendSync();

    const webResponse3 = await swaggerApi.loginUser(`test`, `test`).send();


    const getInventoryTransaction = new load.Transaction("getInventory");
    getInventoryTransaction.start();
    const webResponse4 = await swaggerApi.getInventory().send();
    getInventoryTransaction.stop();

//   const addPetTransaction = new load.Transaction("addPet");
//   addPetTransaction.start();
//   const webResponse5 = await swaggerApi.addPet(`{
//   "id": 2,
//   "category": {
//     "id": 2,
//     "name": "string"
//   },
//   "name": "doggie",
//   "photoUrls": [
//     "string"
//   ],
//   "tags": [
//     {
//       "id": 0,
//       "name": "string"
//     }
//   ],
//   "status": "available"
// }`).send();
//   addPetTransaction.stop();


    const getPetTransaction = new load.Transaction("getPetById");
    getPetTransaction.start();
    const webResponse6 = await swaggerApi.getPetById("1").send();
    const webResponse7 = await swaggerApi.getPetById("2").send();
    getPetTransaction.stop();

});

load.finalize("Finalize", async function () {
});