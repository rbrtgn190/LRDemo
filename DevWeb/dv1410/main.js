
load.initialize("Initialize", async function () {
});

load.action("Action", async function () {
    load.WebRequest.defaults.returnBody = false;

});

load.finalize("Finalize", async function () {
});
