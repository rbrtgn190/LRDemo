// This script was generated and reflects raw data. It is recommended to change this code to your required logic
load.initialize("Initialize", async function () {
});

load.action("Action", async function () {
    load.WebRequest.defaults.returnBody = false;

    const webResponse1 = new load.WebRequest({
        id: 1,
        url: "https://microfocusinternational.sharepoint.com/_forms/spfxsinglesignon.aspx",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "none",
            "Sec-Fetch-User": "?1",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        resources: [
            "https://secure.aadcdn.microsoftonline-p.com/lib/1.0.16/js/adal.min.js",
        ],
    }).sendSync();

    const webResponse2 = new load.WebRequest({
        id: 2,
        url: "https://microfocusinternational.sharepoint.com/",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Referer": "https://microfocusinternational.sharepoint.com/_forms/spfxsinglesignon.aspx",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "same-origin",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse3 = new load.WebRequest({
        id: 3,
        url: "https://login.live.com/Me.htm",
        method: "GET",
        headers: {
            "accept": "application/signed-exchange;v=b3;q=0.9,*/*;q=0.8",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "purpose": "prefetch",
            "referer": "https://login.microsoftonline.com/",
            "sec-fetch-dest": "empty",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "v": "3"
        },
    }).sendSync();

    const webResponse4 = new load.WebRequest({
        id: 4,
        url: "https://login.microsoftonline.com/common/instrumentation/reportpageload",
        method: "POST",
        headers: {
            "Accept": "application/json",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-type": "application/json; charset=UTF-8",
            "Origin": "https://login.microsoftonline.com",
            "Referer": "https://login.microsoftonline.com/856b813c-16e5-49a5-85ec-6f081e13b527/oauth2/authorize?client_id=00000003-0000-0ff1-ce00-000000000000&response_mode=form_post&protectedtoken=true&response_type=code%20id_token&resource=00000003-0000-0ff1-ce00-000000000000&scope=openid&nonce=36BA9A868C74E52377E380CD16133F6D8BC12829006B50A0-82839EDEEE25487379BD7C9BF0339CE128B26E83A737A85BFC55C91EE99C4BB0&redirect_uri=https%3A%2F%2Fmicrofocusinternational.sharepoint.com%2F_forms%2Fdefault.aspx&claims=%7B%22id_token%22%3A%7B%22xms_cc%22%3A%7B%22values%22%3A%5B%22CP1%22%5D%7D%7D%7D&wsucxt=1&cobrandid=11bd8083-87e0-41b5-bb78-0bc43c8a8e8a&client-request-id=9d6d869f-f062-0000-6804-dd58fdbacab1",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "canary": "AQABAAAAAAB2UyzwtQEKR7-rWbgdcBZIAHotJmvXOJ8sXAvfDKBq2REL0VJKssx5Q5JdRhFBkHHz5Fa5TEmzVFFUGGLm9Ax5_dWYiCE0V8d6jEVu0wP63LyEnGsUQTkENBjIoyr7GhQMtthXtBCfq85_n8Pd4AQmGVNop-Am-c2QRnKKUJ9d90LwKSwDqUaEjt6NQXEWR6PtTkEqE-uO4LngWk5BliNcHzGfQXTwujB1Qr9mEjEwuyAA",
            "client-request-id": "9d6d869f-f062-0000-6804-dd58fdbacab1",
            "hpgact": "1800",
            "hpgid": "1104",
            "hpgrequestid": "3d875faa-8efb-475d-b0cc-3572c84f0900"
        },
        body: {
            "hostBuildNumber": "2.1.11169.11",
            "serverExecutionTime": 74,
            "requestCountry": "FR",
            "plt": 0,
            "performanceData": {
                "navigation": {
                    "type": 0,
                    "redirectCount": 0
                },
                "timing": {
                    "connectStart": 1603443427415,
                    "navigationStart": 1603443426265,
                    "loadEventEnd": 1603443428430,
                    "domLoading": 1603443427855,
                    "secureConnectionStart": 1603443427421,
                    "fetchStart": 1603443427415,
                    "domContentLoadedEventStart": 1603443428320,
                    "responseStart": 1603443427781,
                    "responseEnd": 1603443427783,
                    "domInteractive": 1603443428320,
                    "domainLookupEnd": 1603443427415,
                    "redirectStart": 0,
                    "requestStart": 1603443427510,
                    "unloadEventEnd": 0,
                    "unloadEventStart": 0,
                    "domComplete": 1603443428323,
                    "domainLookupStart": 1603443427415,
                    "loadEventStart": 1603443428323,
                    "domContentLoadedEventEnd": 1603443428320,
                    "redirectEnd": 0,
                    "connectEnd": 1603443427510
                },
                "entries": [
                    {
                        "name": "https://login.microsoftonline.com/856b813c-16e5-49a5-85ec-6f081e13b527/oauth2/authorize\u003Fclient_id=00000003-0000-0ff1-ce00-000000000000&response_mode=form_post&protectedtoken=true&response_type=code%20id_token&resource=00000003-0000-0ff1-ce00-000000000000&scope=openid&nonce=36BA9A868C74E52377E380CD16133F6D8BC12829006B50A0-82839EDEEE25487379BD7C9BF0339CE128B26E83A737A85BFC55C91EE99C4BB0&redirect_uri=https%3A%2F%2Fmicrofocusinternational.sharepoint.com%2F_forms%2Fdefault.aspx&claims=%7B%22id_token%22%3A%7B%22xms_cc%22%3A%7B%22values%22%3A%5B%22CP1%22%5D%7D%7D%7D&wsucxt=1&cobrandid=11bd8083-87e0-41b5-bb78-0bc43c8a8e8a&client-request-id=9d6d869f-f062-0000-6804-dd58fdbacab1",
                        "entryType": "navigation",
                        "startTime": 0,
                        "duration": 2165.854999999283,
                        "initiatorType": "navigation",
                        "nextHopProtocol": "http/1.1",
                        "workerStart": 0,
                        "redirectStart": 0,
                        "redirectEnd": 0,
                        "fetchStart": 1150.260000009439,
                        "domainLookupStart": 1150.260000009439,
                        "domainLookupEnd": 1150.260000009439,
                        "connectStart": 1150.8949999988545,
                        "connectEnd": 1245.0450000033015,
                        "secureConnectionStart": 1156.1300000030315,
                        "requestStart": 1245.1100000034785,
                        "responseStart": 1516.3849999953527,
                        "responseEnd": 1518.3099999994738,
                        "transferSize": 49186,
                        "encodedBodySize": 47539,
                        "decodedBodySize": 186534,
                        "serverTiming": [],
                        "workerTiming": [],
                        "unloadEventStart": 0,
                        "unloadEventEnd": 0,
                        "domInteractive": 2055.0050000019837,
                        "domContentLoadedEventStart": 2055.114999995567,
                        "domContentLoadedEventEnd": 2055.3749999962747,
                        "domComplete": 2057.9799999977695,
                        "loadEventStart": 2058.00000000454,
                        "loadEventEnd": 2165.854999999283,
                        "type": "navigate",
                        "redirectCount": 0
                    },
                    {
                        "name": "https://login.live.com/Me.htm\u003Fv=3",
                        "entryType": "resource",
                        "startTime": 1616.8550000002142,
                        "duration": 0,
                        "initiatorType": "link",
                        "nextHopProtocol": "h2",
                        "workerStart": 0,
                        "redirectStart": 0,
                        "redirectEnd": 0,
                        "fetchStart": 1616.8550000002142,
                        "domainLookupStart": 0,
                        "domainLookupEnd": 0,
                        "connectStart": 0,
                        "connectEnd": 0,
                        "secureConnectionStart": 0,
                        "requestStart": 0,
                        "responseStart": 0,
                        "responseEnd": 1616.8550000002142,
                        "transferSize": 0,
                        "encodedBodySize": 0,
                        "decodedBodySize": 0,
                        "serverTiming": [],
                        "workerTiming": []
                    },
                    {
                        "name": "https://aadcdn.msftauth.net/shared/1.0/content/js/OldConvergedLogin_PCore_44nYPjXE6TrAgja6fktsbQ2.js",
                        "entryType": "resource",
                        "startTime": 1620.0749999989057,
                        "duration": 408.72000000672415,
                        "initiatorType": "script",
                        "nextHopProtocol": "h2",
                        "workerStart": 0,
                        "redirectStart": 0,
                        "redirectEnd": 0,
                        "fetchStart": 1620.0749999989057,
                        "domainLookupStart": 0,
                        "domainLookupEnd": 0,
                        "connectStart": 0,
                        "connectEnd": 0,
                        "secureConnectionStart": 0,
                        "requestStart": 0,
                        "responseStart": 0,
                        "responseEnd": 2028.7950000056298,
                        "transferSize": 0,
                        "encodedBodySize": 0,
                        "decodedBodySize": 0,
                        "serverTiming": [],
                        "workerTiming": []
                    },
                    {
                        "name": "https://aadcdn.msftauth.net/shared/1.0/content/images/ellipsis_white_5ac590ee72bfe06a7cecfd75b588ad73.svg",
                        "entryType": "resource",
                        "startTime": 2148.4999999956926,
                        "duration": 231.61000000254717,
                        "initiatorType": "img",
                        "nextHopProtocol": "h2",
                        "workerStart": 0,
                        "redirectStart": 0,
                        "redirectEnd": 0,
                        "fetchStart": 2148.4999999956926,
                        "domainLookupStart": 0,
                        "domainLookupEnd": 0,
                        "connectStart": 0,
                        "connectEnd": 0,
                        "secureConnectionStart": 0,
                        "requestStart": 0,
                        "responseStart": 0,
                        "responseEnd": 2380.10999999824,
                        "transferSize": 0,
                        "encodedBodySize": 0,
                        "decodedBodySize": 0,
                        "serverTiming": [],
                        "workerTiming": []
                    },
                    {
                        "name": "first-paint",
                        "entryType": "paint",
                        "startTime": 2212.1699999988778,
                        "duration": 0
                    },
                    {
                        "name": "first-contentful-paint",
                        "entryType": "paint",
                        "startTime": 2212.1699999988778,
                        "duration": 0
                    }
                ],
                "connection": {
                    "onchange": null,
                    "effectiveType": "4g",
                    "rtt": 100,
                    "downlink": 1.5,
                    "saveData": false
                }
            },
            "inlineMode": 5
        },
        queryString: {
            "mkt": "en-US"
        },
    }).sendSync();

    const webResponse5 = new load.WebRequest({
        id: 5,
        url: "https://login.microsoftonline.com/common/GetCredentialType",
        method: "POST",
        headers: {
            "Accept": "application/json",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-type": "application/json; charset=UTF-8",
            "Origin": "https://login.microsoftonline.com",
            "Referer": "https://login.microsoftonline.com/856b813c-16e5-49a5-85ec-6f081e13b527/oauth2/authorize?client_id=00000003-0000-0ff1-ce00-000000000000&response_mode=form_post&protectedtoken=true&response_type=code%20id_token&resource=00000003-0000-0ff1-ce00-000000000000&scope=openid&nonce=36BA9A868C74E52377E380CD16133F6D8BC12829006B50A0-82839EDEEE25487379BD7C9BF0339CE128B26E83A737A85BFC55C91EE99C4BB0&redirect_uri=https%3A%2F%2Fmicrofocusinternational.sharepoint.com%2F_forms%2Fdefault.aspx&claims=%7B%22id_token%22%3A%7B%22xms_cc%22%3A%7B%22values%22%3A%5B%22CP1%22%5D%7D%7D%7D&wsucxt=1&cobrandid=11bd8083-87e0-41b5-bb78-0bc43c8a8e8a&client-request-id=9d6d869f-f062-0000-6804-dd58fdbacab1",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "canary": "AQABAAAAAAB2UyzwtQEKR7-rWbgdcBZIAHotJmvXOJ8sXAvfDKBq2REL0VJKssx5Q5JdRhFBkHHz5Fa5TEmzVFFUGGLm9Ax5_dWYiCE0V8d6jEVu0wP63LyEnGsUQTkENBjIoyr7GhQMtthXtBCfq85_n8Pd4AQmGVNop-Am-c2QRnKKUJ9d90LwKSwDqUaEjt6NQXEWR6PtTkEqE-uO4LngWk5BliNcHzGfQXTwujB1Qr9mEjEwuyAA",
            "client-request-id": "9d6d869f-f062-0000-6804-dd58fdbacab1",
            "hpgact": "1800",
            "hpgid": "1104",
            "hpgrequestid": "3d875faa-8efb-475d-b0cc-3572c84f0900"
        },
        body: {
            "username": "jeanmatthieu.guerin@microfocus.com",
            "isOtherIdpSupported": true,
            "checkPhones": false,
            "isRemoteNGCSupported": true,
            "isCookieBannerShown": false,
            "isFidoSupported": true,
            "originalRequest": "rQIIAa1RMW_TQBj1xalJSiuiTowIZaK6-M7ns8-ROvgcp0iVWhADFAlFtnNuLBLbPTsKysgATKh_ACExZgImlIkRRQyZK7FXTBUTEkIiEQtjB97w9Om9Nzy9746KW7jdRH9B4JohimMMI7G-_oHc2Wy8fTF6E14qyqD67dHv-eLDDPBBWeZFW9dHSSSzOIvGRZKWQqZBmWRpMGwVg0CKPFuJrSgb6b04k6NC74s4GA_LVlDkzz4BsATgAoBZ5ZRY3HVcZjHPNn1qENv2CUNeB1uYkK7VYdzDBjMchCxOkYsgMxhx_I7v-wY1mU1sh3dsz-FdRIjj-aswNyyfEXdluYzyrkep52DfdxzP5BydV24cueNyYKwpk8lU_KjU1x17eVaUM_VK03xUm4xaIcMkgtgSFJpOQCGjIoJWjBgWmITUsBeqluUiTfrLKvhe3UJqu1bTGupN5ZbyswrebawGnvVe7v16_WT__VcqvxzVlcWGPt4_uTuRQz08ZsPdB4_LyWExOii9ydOH8iCR02l8mO_e9_mptI73UBufaeBM0-ZavaY2lNuqdw9faOBSA6-uKfP6f_jW8jo438Kb9SgLZZD2k_5OE-OwzxAjkNkCQROHFIahzSAKI5NELGCCBc-3rxT7vK38AQ2",
            "country": "FR",
            "forceotclogin": false,
            "isExternalFederationDisallowed": false,
            "isRemoteConnectSupported": false,
            "federationFlags": 0,
            "isSignup": false,
            "flowToken": "AQABAAEAAAB2UyzwtQEKR7-rWbgdcBZIxNCrwBxYtgl1hDUhl8F9V1x3jsV1yokxuMvp1q7xXcvCAr4kUfXJIaPqQguqXpXuCqCkPa5wD9NJfuLDpC7tgd2Lgy1BcJwLrKBBKUYZlujmB2YDt2qiZvuHbsbTJ5ZoeMExnMhdiwwbUmEj-BB5V8g0fVjg_pi9Tmq_Z5C_4_EJ_M_NkUpByHQV34X6JY3ggD5fz8wDNumOmoosd3NZUzSbdL1RjzRZrm_kAGspyvYocKu6w_j8CAVfH7WVp_37BQni_orXbwOtsowf3gSCRCP3CmH5rgfztBFpGGNF5V3ChX4ne5N61LXH-tdTS3QGp2VjOxwFAKrYvYitxmLxfUwJsOVmfqH66bKlrEe_f7LWdF6bYyy3NFPudGJ3dSQkZygX2ox7pyvtAgmgarQaA8rPTDC-2ldFQ2RG7ZwYIy1X1CFUycAvy1bYiy0tKyuy7c8PO6aDid9zSP-G_NNwySAA",
            "isAccessPassSupported": true
        },
        queryString: {
            "mkt": "en-US"
        },
    }).sendSync();

    const webResponse6 = new load.WebRequest({
        id: 6,
        url: "https://authenticate.microfocus.net/nidp/wsfed/ep",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Referer": "https://login.microsoftonline.com/",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "cross-site",
            "Sec-Fetch-User": "?1",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "client-request-id": "9d6d869f-f062-0000-6804-dd58fdbacab1",
            "wa": "wsignin1.0",
            "wtrealm": "urn:federation:MicrosoftOnline",
            "wctx": "LoginOptions=3&estsredirect=2&estsrequest=rQIIAa2RsYvTUBzH85pebOsdlsPB8Tg6ebz2vby85CVwYJOmJxzcKQ56B1KS9OUabZPcS0qlo4M6yf0DIjh2Uifp5CjFoXPBxelwOpwEEWxx0PEGv8OXH7_fd_jx-d6UcR1bNfRHBK4cojDEMOCr6R-JzUr19bPBK_9CknrFLw9-TWfvJsDu5XmaWY3GIApEEibBMIvinIvYy6Mk9vr1rOcJnibLZT1IBo1OmIhB1ujy0Bv287qXpU8-ADAH4ByASeGU6HbTbDKdOYbmUpUYhksYclpYx4S09RazHawy1URItylqIshURky35bquSjVmEMO0W4Zj2m1EiOm4y7Ct6i4jzeWpyajddih1TOy6puloto0WhWuHzWHeU1eWiGjMvxfKqx87aZLlE_lSaN7LNUZ1n2ESQKxzCjXTo5BRHkA9RAxzTHyqGjNZSVIeR92v8vYj7sUDL897ER_WT4ZcRPGtvwhXqOZF8K24jmSrVFKq8g1pS_pRBG_Wli1MOs93f758uPf2MxWfDsvSbK0x3Du5PRL9hn_E-jv3jvPRQTbYz53R4_tiPxLjcXiQ7tx17VOhH-0iC58p4ExRpkq5JFelbdm5g88VcKGAF1ekafk_VLqoXFeRiiBGUCVbiFnUsFR0PL8KFuu4Ug4SX3hxN-pu1jD2uwwxApnBEdSwT6HvGwwiP9BIwDzGmfd041KxjxvSbw2",
            "cbcxt": "",
            "username": "jeanmatthieu.guerin@microfocus.com",
            "mkt": "",
            "lc": ""
        },
    }).sendSync();

    const webResponse7 = new load.WebRequest({
        id: 7,
        url: "https://authenticate.microfocus.net/nidp/wsfed/ep",
        method: "POST",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Cache-Control": "max-age=0",
            "Connection": "keep-alive",
            "Content-Type": "application/x-www-form-urlencoded",
            "Origin": "https://authenticate.microfocus.net",
            "Referer": "https://authenticate.microfocus.net/nidp/wsfed/ep?client-request-id=9d6d869f-f062-0000-6804-dd58fdbacab1&wa=wsignin1.0&wtrealm=urn%3afederation%3aMicrosoftOnline&wctx=LoginOptions%3D3%26estsredirect%3d2%26estsrequest%3drQIIAa2RsYvTUBzH85pebOsdlsPB8Tg6ebz2vby85CVwYJOmJxzcKQ56B1KS9OUabZPcS0qlo4M6yf0DIjh2Uifp5CjFoXPBxelwOpwEEWxx0PEGv8OXH7_fd_jx-d6UcR1bNfRHBK4cojDEMOCr6R-JzUr19bPBK_9CknrFLw9-TWfvJsDu5XmaWY3GIApEEibBMIvinIvYy6Mk9vr1rOcJnibLZT1IBo1OmIhB1ujy0Bv287qXpU8-ADAH4ByASeGU6HbTbDKdOYbmUpUYhksYclpYx4S09RazHawy1URItylqIshURky35bquSjVmEMO0W4Zj2m1EiOm4y7Ct6i4jzeWpyajddih1TOy6puloto0WhWuHzWHeU1eWiGjMvxfKqx87aZLlE_lSaN7LNUZ1n2ESQKxzCjXTo5BRHkA9RAxzTHyqGjNZSVIeR92v8vYj7sUDL897ER_WT4ZcRPGtvwhXqOZF8K24jmSrVFKq8g1pS_pRBG_Wli1MOs93f758uPf2MxWfDsvSbK0x3Du5PRL9hn_E-jv3jvPRQTbYz53R4_tiPxLjcXiQ7tx17VOhH-0iC58p4ExRpkq5JFelbdm5g88VcKGAF1ekafk_VLqoXFeRiiBGUCVbiFnUsFR0PL8KFuu4Ug4SX3hxN-pu1jD2uwwxApnBEdSwT6HvGwwiP9BIwDzGmfd041KxjxvSbw2&cbcxt=&username=jeanmatthieu.guerin%40microfocus.com&mkt=&lc=",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "same-origin",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        resources: [
            "https://authenticate.microfocus.net/common/public/css/login.css",
            "https://authenticate.microfocus.net/common/public/js/login.js",
            "https://authenticate.microfocus.net/common/public/img/login_bg1.jpg",
            "https://authenticate.microfocus.net/common/public/img/mf_logo.png",
        ],
        body: "",
        queryString: {
            "id": "IDNamePasswordForm",
            "sid": "0",
            "option": "credential"
        },
    }).sendSync();

    const webResponse8 = new load.WebRequest({
        id: 8,
        url: "https://authenticate.microfocus.net/nidp/wsfed/ep",
        method: "POST",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Cache-Control": "max-age=0",
            "Connection": "keep-alive",
            "Content-Type": "application/x-www-form-urlencoded",
            "Origin": "https://authenticate.microfocus.net",
            "Referer": "https://authenticate.microfocus.net/nidp/wsfed/ep?id=IDNamePasswordForm&sid=0&option=credential&sid=0",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "same-origin",
            "Sec-Fetch-User": "?1",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        body: {
            "option": "credential",
            "Ecom_User_ID": "jeang",
            "Ecom_Password": "FY21stillH@me",
            "submit": "Login"
        },
        queryString: {
            "sid": "0"
        },
    }).sendSync();

    const webResponse9 = new load.WebRequest({
        id: 9,
        url: "https://authenticate.microfocus.net/nidp/wsfed/ep",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Referer": "https://authenticate.microfocus.net/nidp/wsfed/ep?sid=0&sid=0",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "same-origin",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "sid": "0"
        },
    }).sendSync();

    const webResponse10 = new load.WebRequest({
        id: 10,
        url: "https://login.microsoftonline.com/login.srf",
        method: "POST",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Cache-Control": "max-age=0",
            "Connection": "keep-alive",
            "Content-Type": "application/x-www-form-urlencoded",
            "Origin": "https://authenticate.microfocus.net",
            "Referer": "https://authenticate.microfocus.net/nidp/wsfed/ep?sid=0",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "cross-site",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        body: {
            "wa": "wsignin1.0",
            "wresult": "<wst:RequestSecurityTokenResponse xmlns:wst=\"http://schemas.xmlsoap.org/ws/2005/02/trust\"><wst:RequestedSecurityToken xmlns:wst=\"http://schemas.xmlsoap.org/ws/2005/02/trust\"><saml:Assertion xmlns:saml=\"urn:oasis:names:tc:SAML:1.0:assertion\" AssertionID=\"idN6W9uf-pmM-NfRMVPpRvU1jMZaQ\" IssueInstant=\"2020-10-23T08:57:44Z\" Issuer=\"https://authenticate.microfocus.net/nidp/wsfed/\" MajorVersion=\"1\" MinorVersion=\"1\"><saml:Conditions NotBefore=\"2020-10-23T03:57:44Z\" NotOnOrAfter=\"2020-10-23T13:57:44Z\"><saml:AudienceRestrictionCondition><saml:Audience>urn:federation:MicrosoftOnline</saml:Audience></saml:AudienceRestrictionCondition></saml:Conditions><saml:AuthenticationStatement AuthenticationInstant=\"2020-10-23T08:57:44Z\" AuthenticationMethod=\"name/password/uri\"><saml:Subject><saml:NameIdentifier Format=\"urn:oasis:names:tc:SAML:1.1:nameid-format:unspecified\">nrZ3d5m6mU6eFJC4du+Vcw==</saml:NameIdentifier><saml:SubjectConfirmation><saml:ConfirmationMethod>urn:oasis:names:tc:SAML:1.0:cm:bearer</saml:ConfirmationMethod></saml:SubjectConfirmation></saml:Subject></saml:AuthenticationStatement><saml:AttributeStatement><saml:Subject><saml:NameIdentifier Format=\"urn:oasis:names:tc:SAML:1.1:nameid-format:unspecified\">nrZ3d5m6mU6eFJC4du+Vcw==</saml:NameIdentifier><saml:SubjectConfirmation><saml:ConfirmationMethod>urn:oasis:names:tc:SAML:1.0:cm:bearer</saml:ConfirmationMethod></saml:SubjectConfirmation></saml:Subject><saml:Attribute AttributeName=\"ImmutableID\" AttributeNamespace=\"http://schemas.microsoft.com/LiveID/Federation/2008/05\"><saml:AttributeValue>nrZ3d5m6mU6eFJC4du+Vcw==</saml:AttributeValue></saml:Attribute><saml:Attribute AttributeName=\"Mail\" AttributeNamespace=\"http://schemas.xmlsoap.org/claims\"><saml:AttributeValue>jeanmatthieu.guerin@microfocus.com</saml:AttributeValue></saml:Attribute></saml:AttributeStatement><ds:Signature xmlns:ds=\"http://www.w3.org/2000/09/xmldsig#\">\r\n<ds:SignedInfo>\r\n<ds:CanonicalizationMethod Algorithm=\"http://www.w3.org/2001/10/xml-exc-c14n#\"/>\r\n<ds:SignatureMethod Algorithm=\"http://www.w3.org/2001/04/xmldsig-more#rsa-sha256\"/>\r\n<ds:Reference URI=\"#idN6W9uf-pmM-NfRMVPpRvU1jMZaQ\">\r\n<ds:Transforms>\r\n<ds:Transform Algorithm=\"http://www.w3.org/2000/09/xmldsig#enveloped-signature\"/>\r\n<ds:Transform Algorithm=\"http://www.w3.org/2001/10/xml-exc-c14n#\"/>\r\n</ds:Transforms>\r\n<ds:DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\"/>\r\n<ds:DigestValue>v47fTTBffHt3nF7BGFXBWh7TmiNebcX/Txwl7pOKR3g=</ds:DigestValue>\r\n</ds:Reference>\r\n</ds:SignedInfo>\r\n<ds:SignatureValue>\r\nvfrZyHgHXvk2uGzkBZ3P4YxX57dvjmUby07BoyAmo5gpENfGfZCCeDZTCNT9kcWROsKHiWcHaDZb\r\nXyXrWLSOJcoSn3r1VBEqltTfHk898ChDfczEpT45NndZdAsYlc3PViK0ntumfjpsWp7XY7d+yQ5Z\r\n0erGrEupCUTapfFfrVZ1PkCJdJKTnbi0r4pK35dt5ATGX0qibLkVNUBxCl+kAIhpzDdnip9mc9Wj\r\nNhtSMPRbXRAhtIj1ESlQKWf944fFNdS86LOQc/D13xaqHfkW+67TIjOCW5wOVuF8b3slXxVQu9Kx\r\nC82ZK6wcoCBiGO6/etDnmi/y0YnPoGf0J2ruSA==\r\n</ds:SignatureValue>\r\n<ds:KeyInfo>\r\n<ds:X509Data>\r\n<ds:X509Certificate>\r\nMIIG6jCCBdKgAwIBAgIQBeRga1/VYwwV4JEeghU0nzANBgkqhkiG9w0BAQsFADBwMQswCQYDVQQG\r\nEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3d3cuZGlnaWNlcnQuY29tMS8w\r\nLQYDVQQDEyZEaWdpQ2VydCBTSEEyIEhpZ2ggQXNzdXJhbmNlIFNlcnZlciBDQTAeFw0yMDA2MjIw\r\nMDAwMDBaFw0yMjA5MTQxMjAwMDBaMHcxCzAJBgNVBAYTAkdCMRAwDgYDVQQHEwdOZXdidXJ5MSEw\r\nHwYDVQQKExhNaWNybyBGb2N1cyAoSVApIExpbWl0ZWQxDTALBgNVBAsMBElTJlQxJDAiBgNVBAMT\r\nG2F1dGhlbnRpY2F0ZS5taWNyb2ZvY3VzLm5ldDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoC\r\nggEBAMY7HQlFEKdVuBr5yUguFFcTHtdsAMhBVvnp7zA7yTxopSY1o3YORbtxEz5Gk4dtRelFc5Kh\r\nuSPhgcVnirHXH+uT6e1KjwwBV4BdBO4laOwLboN4cmHc0nMguLE2tKd2bApDUOW3e6mXvkSPZQBW\r\nyTdDv+nzoSZrIW7Uy57PqrDSy6QrH6tcFzu224r7YAL3bIuSsRF2N3O0Zes6JYDlLJBy360rkNfh\r\nCnO4hNqRU+xA/EG+Rlz/mI/NQ5zi7RA8sshJvz4bkBtRPhE4u4dX9GxtoRTT7DuDM67TU4ZkrQvr\r\nhZ1WY6HJo/jXxJs+0oG7wmAqmYQbv4zEuNG+JdDG8TMCAwEAAaOCA3cwggNzMB8GA1UdIwQYMBaA\r\nFFFo/5CvAgd1PMzZZWRiohK4WXI7MB0GA1UdDgQWBBTCAGAGCA4unooIWDBHA1dzdoO+rzAmBgNV\r\nHREEHzAdghthdXRoZW50aWNhdGUubWljcm9mb2N1cy5uZXQwDgYDVR0PAQH/BAQDAgWgMB0GA1Ud\r\nJQQWMBQGCCsGAQUFBwMBBggrBgEFBQcDAjB1BgNVHR8EbjBsMDSgMqAwhi5odHRwOi8vY3JsMy5k\r\naWdpY2VydC5jb20vc2hhMi1oYS1zZXJ2ZXItZzYuY3JsMDSgMqAwhi5odHRwOi8vY3JsNC5kaWdp\r\nY2VydC5jb20vc2hhMi1oYS1zZXJ2ZXItZzYuY3JsMEwGA1UdIARFMEMwNwYJYIZIAYb9bAEBMCow\r\nKAYIKwYBBQUHAgEWHGh0dHBzOi8vd3d3LmRpZ2ljZXJ0LmNvbS9DUFMwCAYGZ4EMAQICMIGDBggr\r\nBgEFBQcBAQR3MHUwJAYIKwYBBQUHMAGGGGh0dHA6Ly9vY3NwLmRpZ2ljZXJ0LmNvbTBNBggrBgEF\r\nBQcwAoZBaHR0cDovL2NhY2VydHMuZGlnaWNlcnQuY29tL0RpZ2lDZXJ0U0hBMkhpZ2hBc3N1cmFu\r\nY2VTZXJ2ZXJDQS5jcnQwDAYDVR0TAQH/BAIwADCCAX8GCisGAQQB1nkCBAIEggFvBIIBawFpAHcA\r\nKXm+8J45OSHwVnOfY6V35b5XfZxgCvj5TV0mXCVdx4QAAAFy3hbCxgAABAMASDBGAiEAwBdO91cr\r\nh0fQwRXb7UsNdfpztG8WB+fZadyqoKCKcRICIQDF/TXhRW8fMMEr+VkwhzSVljl+XLhigQn8Odhc\r\nAhRPowB2AEHIyrHfIkZKEMahOglCh15OMYsbA+vrS8do8JBilgb2AAABct4WwnIAAAQDAEcwRQIh\r\nAOG9qwgN6uiCBk/Sch6oLYBUdqjuhtNfRXRxA11ZSm0IAiA0yc7EFuGp68kHJJucvc9J5SawSZdt\r\n9cxeEbC5ynLxWQB2AG9Tdqwx8DEZ2JkApFEV/3cVHBHZAsEAKQaNsgiaN9kTAAABct4WxIgAAAQD\r\nAEcwRQIhALBAycFlzdynyGNhaqqHJbxdRqW5WBMmL+vcIt9FZdU7AiAV7V00q2L1/TmlGugiN/yq\r\n7P1fHFGlslZyKyZc4wXxQzANBgkqhkiG9w0BAQsFAAOCAQEABOHWNXxlnYuNKourfP/PTvTHg+uc\r\n6Ulabp56wKfg1ACueTqAAOZ8zLH2v2vN92FYetvGoxN+QISvd5MzjmgbWS8KpFmwCm08B4v/Zdxn\r\nHy0PXBh2MqSHcEFBN6aQWqfUBG0laeotlf2sHY/64qKnXNTIUQ0+/DcI0MNEEiuT0VLZ8RWvFvZ+\r\nvV5NLCyFUaD5m/8JYqPuJVqERChzXCOHCinnudlyDZObb8o/gYo3RZJH02C+VPWpnqJfVBNzqwYh\r\nt9Ec9yJpY4Ed6z5VF1mcY8mD9vfSXpn6okKl4i10uAZYA9f3OOMJAaV71nDfgNwuvTIXsHoNhZ4j\r\nFnAMKo8xng==\r\n</ds:X509Certificate>\r\n</ds:X509Data>\r\n</ds:KeyInfo>\r\n</ds:Signature></saml:Assertion></wst:RequestedSecurityToken></wst:RequestSecurityTokenResponse>",
            "wctx": "LoginOptions=3&estsredirect=2&estsrequest=rQIIAa2RsYvTUBzH85pebOsdlsPB8Tg6ebz2vby85CVwYJOmJxzcKQ56B1KS9OUabZPcS0qlo4M6yf0DIjh2Uifp5CjFoXPBxelwOpwEEWxx0PEGv8OXH7_fd_jx-d6UcR1bNfRHBK4cojDEMOCr6R-JzUr19bPBK_9CknrFLw9-TWfvJsDu5XmaWY3GIApEEibBMIvinIvYy6Mk9vr1rOcJnibLZT1IBo1OmIhB1ujy0Bv287qXpU8-ADAH4ByASeGU6HbTbDKdOYbmUpUYhksYclpYx4S09RazHawy1URItylqIshURky35bquSjVmEMO0W4Zj2m1EiOm4y7Ct6i4jzeWpyajddih1TOy6puloto0WhWuHzWHeU1eWiGjMvxfKqx87aZLlE_lSaN7LNUZ1n2ESQKxzCjXTo5BRHkA9RAxzTHyqGjNZSVIeR92v8vYj7sUDL897ER_WT4ZcRPGtvwhXqOZF8K24jmSrVFKq8g1pS_pRBG_Wli1MOs93f758uPf2MxWfDsvSbK0x3Du5PRL9hn_E-jv3jvPRQTbYz53R4_tiPxLjcXiQ7tx17VOhH-0iC58p4ExRpkq5JFelbdm5g88VcKGAF1ekafk_VLqoXFeRiiBGUCVbiFnUsFR0PL8KFuu4Ug4SX3hxN-pu1jD2uwwxApnBEdSwT6HvGwwiP9BIwDzGmfd041KxjxvSbw2"
        },
    }).sendSync();

    const webResponse11 = new load.WebRequest({
        id: 11,
        url: "https://login.microsoftonline.com/kmsi",
        method: "POST",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Cache-Control": "max-age=0",
            "Connection": "keep-alive",
            "Content-Type": "application/x-www-form-urlencoded",
            "Origin": "https://login.microsoftonline.com",
            "Referer": "https://login.microsoftonline.com/login.srf",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "same-origin",
            "Sec-Fetch-User": "?1",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        body: {
            "LoginOptions": "1",
            "type": "28",
            "ctx": "rQIIAa2RsYvTUBzHk6YX23qH5XBwPI5OHq95Ly8veQkcmKTpCQd3ioPegZQkfblG2yT3klLp6KBOcv-ACI6d1Ek6OUpx6FxwcTqcDidBBFscdLzB7_Dlx-_3HX58vjcl1ERWA_4RBisHMIoQCNlq-kd8s1Z__WzwKrgQhF75y4Nf09m7iej0iiLLLUUZxCFPozQc5nFSMJ74RZwmfr-Z93zOsnS5bIbpQOlEKR_kSpdF_rBfNP08e_JBFOeieC6Kk9Ip1h3btKlOXUPziIoNw8MUui2kI4zbeos6LlKpakKoOwTaEFCVYtNreZ6nEo0a2DCdluGaThtibLreMuyoukexvTzZlDhtlxDXRJ5nmq7mOHBRunZoD4ueurKUx2P2vVRd_djJ0ryYSJdC815qUKIHFOEQIJ0RoJk-AZSwEOgRpIghHBDVmElymrEk7n6Vth8xPxn4RdGL2bB5MmQ8Tm79RbhCNS-L38rrULIqFbku3RC2hB9l8c3asoVJ5_nuz5cP995-JvzTYVWYrSnDvZPbI95XgiPa37l3XIwO8sF-4Y4e3-f7MR-Po4Ns567nnHL9aBda6EwWz2R5KlcrUl3Yltw76FwWL-TSiyvCtPofKl3UrqtQhQBBoOItSC1iWCo8nl8VF-uoVg3TgPtJN-5uNhAKuhRSDKjBINBQQEAQGBTAINRwSH3KqP9041KxjxvCbw2",
            "hpgrequestid": "9febd4f6-597c-4951-b34c-45adc7cf1900",
            "flowToken": "AQABAAEAAAB2UyzwtQEKR7-rWbgdcBZIgZM6SsuuiRtxPM1P3_3U3xx_W5Yj28QMpOlGPVbAS-yWn-vPGtj16gXi47IzJ25M1HvZHPoAWssHRmuXG4Q5qrvy_UXgdyMog3IENTG_HP7kpvoGKuiVNpqf9zzYthpL3whgS907R5dOpIP_6Z49Lt7a3E5a75N4FPd6C9pm4ZdpJ7RpLhnwLov0-wd1aPNx4OvMEoyNkB0QEbaRf6w0jDcTF66vUY1uoGBXz5qFqPGfqKsnaAjZ4XXGYmYlf8hJzvtmkmoyxbKs_OXEPH0ZfPScEfl2_4hTA19_2ywHmVOEGkWbFRpEgnW8KK35G3TAZWNEoAeiS0QpCMPEHmCJsU3jwxBi2n_6gaZSsGDhus5KzB6rs_qT7CHj8HGlXr0sbaXGIKEBlHqTsnLcp2nG38p_-borWgum6chqp9PhwfVPprXyfL2Aecsxe-ECGvzyxdTPl1Ix1A-nnVz9Hvaehm6y3VFNMAPf8CXN5MW2NX_vd5l5rOGsDxEKwnAsDnpgMVsZRu_Rk6fWr3XX3eovmBQUjVBBYJ9HtFy3I1iv34ZGXJ0DxbZzawWgr36Sv1myeSquECUP9rHjynJM-mH435lKKhE0SgmViv4lNkWv-4nwpnmpzFJYC3uq0mWnDi-VitQ6h4LpSW0rLxPwGEieBQcE_EsegOJ5-ob8ZJ1Z4XeBF8t7qJ4Ff2yoIqr_hLcA7mSB6VneHx1hBs2Hl8Rq-x1fa45weOE6y9Yj7t8Q-qa-8Zrh1kTkIJtRSzBu1H2VIAA",
            "canary": "uGgHwrl/bY8l+SZtwNsmKtCwkWrKirzzfNp+QEBqr6Y=9:1",
            "i2": "",
            "i17": "",
            "i18": "",
            "i19": "4966"
        },
    }).sendSync();

    const webResponse12 = new load.WebRequest({
        id: 12,
        url: "https://microfocusinternational.sharepoint.com/_forms/default.aspx",
        method: "POST",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Cache-Control": "max-age=0",
            "Connection": "keep-alive",
            "Content-Type": "application/x-www-form-urlencoded",
            "Origin": "https://login.microsoftonline.com",
            "Referer": "https://login.microsoftonline.com/",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "cross-site",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        resources: [
            "https://microfocusinternational.sharepoint.com/_layouts/15/1033/styles/Themable/corev15.css?rev=MWXKtEgV%2B2xCwAwBnJNADA%3D%3DTAG1056",
            "https://microfocusinternational.sharepoint.com/ScriptResource.axd?d=XtXUxRpiXw8hkjRNCh26wcjllSn5tqd0XQHp4umfUEZaW0Z5Tg9PThOFKETkSAVjgITRuKKre2p9BVEanrrNJvIeRXbK_DdEhKW-Jtqx8bixH7yxm3L2CPdYHg_rRsMkYwqvsF--usML4CQE_BoU0eYDVtthqSNDoj8uhATdX31LGnhbDNTtS0iBSwr7LZjz0&t=ffffffffce034dab",
            "https://microfocusinternational.sharepoint.com/ScriptResource.axd?d=TXhGdaT9op-bGYqeIi0gjdnEOcULibcTHsKmR127EUqmuaEVlVMZcWVwxQQzrwS6O2B6Vm_m4QrwHuCubsYAV-7yR1yJlxMzb60Hz7P5tYj_zpsEmR5U4fzTERyO9xJJnhfGR8MGummt_MkJ2esPdvgVlM9S_gOZjJeKRc-yQxYxlQWaoChnIH1TMjdx8sJg0&t=ffffffffce034dab",
            "https://microfocusinternational.sharepoint.com/WebResource.axd?d=O2qkG7L3n4LeOy-FfN4DUALG029OD7JZDs1ahXhfsdLTrWUrclJ9qrBf1-Z9qsMeQdQZj94irGceVBxI6HY4-MZBHF_wa0guMn684CtrXHM1&t=637290505350350503",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/spcommon.png?rev=47",
            "https://microfocusinternational.sharepoint.com/Style%20Library/mf_logo_blue_large.png?rev=47",
            "https://microfocusinternational.sharepoint.com/Style%20Library/mf_logo_blue_large.png",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/searchresultui.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/tabtitlerowbottombg.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/fgimg.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/create_upgradient.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/create_defaultgradient.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/menu-down.gif?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/selbg.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/1033/images/spintl.png",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/menu-right.gif?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/UserSquiggle.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/1033/images/formatmap32x32.png?rev=47",
            "https://microfocusinternational.sharepoint.com/_layouts/15/1033/images/formatmap16x16.png?rev=47",
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.shared.6bdfb0da2d02c1f44a67c226d1317b33.css",
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.bootstrapper.589362e00c9183985f81.js",
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.vendor.ff142101e36337c56d2bd618683d2cc2.js",
            "https://microfocusinternational.sharepoint.com/_layouts/15/images/spcommon.png",
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.responsive.b0488bf889d2b1b8c00e.js",
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.core.3cf0344bcc3a991d59c4.js",
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.plus.3ab24d1aeef36ea50a83.js",
            "https://amcdn.msftauth.net/me?partner=Sharepoint&version=10.20266.2&market=en-US&wrapperId=suiteshell",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/require.js",
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.chat.596dc1589dac1d925a74.js",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/splistwebpack/plt.react.chunk.js",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/splistwebpack/plt.office-ui-fabric-react.chunk.js",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/splistwebpack/en-us/plt.resx-plt.chunk.js",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/splistwebpack/plt.items-view.chunk.js",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/splistwebpack/plt.odsp-common.chunk.js",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/splistwebpack/splistwebpack.js",
            "https://spoprod-a.akamaihd.net/files/odsp-next-prod-webpack_2020-10-09-sts_20201009.002/splistwebpack/plt.listviewdataprefetch.standalone.chunk.js",
            "https://r4.res.office365.com/footprint/v3.2/scripts/fp-min.js",
        ],
        body: {
            "code": "0.ARsAPIFrheUWpUmF7G8IHhO1JwMAAAAAAPEPzgAAAAAAAAAbAAA.AQABAAIAAAB2UyzwtQEKR7-rWbgdcBZIz79oJCio2HgZb5QmavLE5TY9gQA5yGUJf790RaGwFYKRIv8YJPjC4c-C3wIKfazfcod8G1crYFzqMNNMzo6mztJF5Rxf6WWOlBvVJo0D-18w7oir4QiJx9PQe88HpYRMlwvI7KWBkMdxbXBNlFYyoZIp_x7RVe1Bkv_Sv2Iuij5ASFar0bFyeItAQVWRqZBOR0vzP-H1bN8kCRdYwdjhA6HcX7b7z1jV6IHtHq83fpHlizj58amvhuXhSL2i6IsfspRFxtwvMM34cfoArpuv46eweBrQC-j2JgDOpCGuPTw3rjY8RH9Ay1ewhuRTsuHwQNJxpIuvtG3qIX7Rdv7k_oee7-NEG_U4J1b-kjOBqYcwzmXzOZR1yQo9cBAsHI8_LjcAZSfqCtYCRZH2sdh_izpYlFFn3YacTMO2NwaoASn-joy0wXEpZ-8NhmfVkb1XdkYjAK84NOFll15K4COGPgxsUOhWedgZhFn_TF9Bh8OfU7gzhYKzNCN0aThgz7Wv4oyAnX7170jsGNDjIoAn8CG7ilE2Fri7oGQ_nAMdcPy3fFWYVPUKsQlZZ8zcdBW5hTox_J6htVlaw3B3sH4AmZZno6Oye-viSiETCt-0JeEf6ZZ_617L57f5sIOOndoKBDzUmeRecDpmfD24UCrBp-NFdI8UrTtrmcv-TUT171UdphOEvZiUMAUGTt0EYr7vR2cIqluhInqQhHByPWfKiAT6jp3cXfSEw-8ji8t_Cq3q_HEdgbY3U7l2tcqbA3F8mdwtq9vlXg8l_f9r5sRSRSAA",
            "id_token": "eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiIsIng1dCI6ImtnMkxZczJUMENUaklmajRydDZKSXluZW4zOCIsImtpZCI6ImtnMkxZczJUMENUaklmajRydDZKSXluZW4zOCJ9.eyJhdWQiOiIwMDAwMDAwMy0wMDAwLTBmZjEtY2UwMC0wMDAwMDAwMDAwMDAiLCJpc3MiOiJodHRwczovL3N0cy53aW5kb3dzLm5ldC84NTZiODEzYy0xNmU1LTQ5YTUtODVlYy02ZjA4MWUxM2I1MjcvIiwiaWF0IjoxNjAzNDQzMTcwLCJuYmYiOjE2MDM0NDMxNzAsImV4cCI6MTYwMzQ0NzA3MCwiYXV0aF90aW1lIjoxNjAzNDQzNDY0LCJjX2hhc2giOiJ3cVFLdVcyZ0FFcFlISDN0VlhiZGZnIiwiZV9leHAiOjI2Mjc5OSwiZmFtaWx5X25hbWUiOiJHdWVyaW4iLCJnaXZlbl9uYW1lIjoiSmVhbiBNYXR0aGlldSIsImlwYWRkciI6IjkyLjE2OS4yNi4zMSIsIm5hbWUiOiJKZWFuIE1hdHRoaWV1IEd1ZXJpbiIsIm5vbmNlIjoiMzZCQTlBODY4Qzc0RTUyMzc3RTM4MENEMTYxMzNGNkQ4QkMxMjgyOTAwNkI1MEEwLTgyODM5RURFRUUyNTQ4NzM3OUJEN0M5QkYwMzM5Q0UxMjhCMjZFODNBNzM3QTg1QkZDNTVDOTFFRTk5QzRCQjAiLCJvaWQiOiIyYmMwMDljNi1kMDliLTQ0NzMtOGMzYS0wMTc2Yzk3OTFmOWIiLCJvbnByZW1fc2lkIjoiUy0xLTUtMjEtMTk5NDMyNjgzMi0xMDY2NzM5NTc1LTU1MjI4MDEtMzE3OTEiLCJwdWlkIjoiMTAwMzdGRkVBNEZGQTg3NCIsInJoIjoiMC5BUnNBUElGcmhlVVdwVW1GN0c4SUhoTzFKd01BQUFBQUFQRVB6Z0FBQUFBQUFBQWJBQXcuIiwic2lkIjoiZTVjMTQ0MTYtYmEwYi00NDkwLWJiZjMtN2QxNTFkOWUxMTE5Iiwic2lnbmluX3N0YXRlIjpbImttc2kiXSwic3ViIjoidTlZeHBLQ21jbFFrV3hGZExCU2QzNWRlSlpVWVZ5X0dveUd5eUNTODdfNCIsInRpZCI6Ijg1NmI4MTNjLTE2ZTUtNDlhNS04NWVjLTZmMDgxZTEzYjUyNyIsInVuaXF1ZV9uYW1lIjoiSmVhbk1hdHRoaWV1Lkd1ZXJpbkBtaWNyb2ZvY3VzLmNvbSIsInVwbiI6IkplYW5NYXR0aGlldS5HdWVyaW5AbWljcm9mb2N1cy5jb20iLCJ1dGkiOiJJUmlXX3l6WFZFLWlMZk5wVHdvVkFBIiwidmVyIjoiMS4wIiwid2lkcyI6WyJiNzlmYmY0ZC0zZWY5LTQ2ODktODE0My03NmIxOTRlODU1MDkiXSwieG1zX2NjIjpbIkNQMSJdLCJ4bXNfbXBjaSI6MjU5MjAwLCJ4bXNfcGNpIjozNjAwfQ.psGT6d6f2-N0t9VE_pdQWfoAEWhYGVdJx4z2X_4ES9FmZTQPrX7mFlZilf88PVA-eHjEslVSQ1CrbZoszhSpd0_islVgeWVT_gJPF8F8C-Vep6lziYk9yQJ2aRGK8ZQ2sSZeQVahHy08cL_JLLhlcTmfQ9bybgdWQlYPhDEGoMGTDBFTk41SVmoz7teN8PQSjP9ZcA5PgB7TqRMDAMhRF2P9cjRCDzPDAubkbg2Hg0Xljj5heYEwj25LiUfGcrhY20-axiMAAtePrTryPXcaEl__E42d43PLf3OlYhb4jLSK2j6auUevG7F2dIVEP4YCF_WNlaDEJwNepeTKaiL2WQ",
            "session_state": "e5c14416-ba0b-4490-bbf3-7d151d9e1119",
            "correlation_id": "9d6d869f-f062-0000-6804-dd58fdbacab1"
        },
    }).sendSync();

    const webResponse13 = new load.WebRequest({
        id: 13,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/1033/initstrings.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse14 = new load.WebRequest({
        id: 14,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/init.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse15 = new load.WebRequest({
        id: 15,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/blank.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse16 = new load.WebRequest({
        id: 16,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/theming.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse17 = new load.WebRequest({
        id: 17,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002//online/scripts/sposuitenav.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse18 = new load.WebRequest({
        id: 18,
        url: "https://microfocusinternational.sharepoint.com/_layouts/15/online/handlers/SpoSuiteLinks.ashx",
        method: "POST",
        headers: {
            "Accept": "*/*",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "text/plain;charset=UTF-8",
            "Origin": "https://microfocusinternational.sharepoint.com",
            "Referer": "https://microfocusinternational.sharepoint.com/SitePages/Redirect.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "Locale": "en-US",
            "v": "2",
            "mobilereq": "0"
        },
    }).sendSync();

    const webResponse19 = new load.WebRequest({
        id: 19,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/1033/strings.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse20 = new load.WebRequest({
        id: 20,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.init.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse21 = new load.WebRequest({
        id: 21,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/1033/sp.res.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse22 = new load.WebRequest({
        id: 22,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/cui.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse23 = new load.WebRequest({
        id: 23,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/clienttemplates.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse24 = new load.WebRequest({
        id: 24,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.ui.dialog.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse25 = new load.WebRequest({
        id: 25,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.runtime.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse26 = new load.WebRequest({
        id: 26,
        url: "https://microfocusinternational.sharepoint.com/_api/Microsoft.SharePoint.Portal.UserProfiles.MySiteLinks.GetMySiteLinks",
        method: "GET",
        headers: {
            "ACCEPT": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/x-www-form-urlencoded",
            "Referer": "https://microfocusinternational.sharepoint.com/SitePages/Redirect.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        body: "",
    }).sendSync();

    const webResponse27 = new load.WebRequest({
        id: 27,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse28 = new load.WebRequest({
        id: 28,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/core.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse29 = new load.WebRequest({
        id: 29,
        url: "https://shell.cdn.office.net/shellux/o365/versionless/en/shellstrings.67d7988e65d5484aaa0ad81759c844e1.json",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "origin": "https://microfocusinternational.sharepoint.com",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "empty",
            "sec-fetch-mode": "cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse30 = new load.WebRequest({
        id: 30,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.core.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse31 = new load.WebRequest({
        id: 31,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/inplview.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse32 = new load.WebRequest({
        id: 32,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/dragdrop.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse33 = new load.WebRequest({
        id: 33,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/mquery.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse34 = new load.WebRequest({
        id: 34,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.ribbon.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse35 = new load.WebRequest({
        id: 35,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.ui.mylinksribbon.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse36 = new load.WebRequest({
        id: 36,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/1033/sp.publishing.resources.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse37 = new load.WebRequest({
        id: 37,
        url: "https://statica.akamai.odsp.cdn.office.net/bld/_layouts/15/16.0.20614.12002/sp.ui.pub.ribbon.js",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "script",
            "sec-fetch-mode": "no-cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse38 = new load.WebRequest({
        id: 38,
        url: "https://outlook.office.com/owa/SuiteServiceProxy.aspx",
        method: "GET",
        headers: {
            "accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "iframe",
            "sec-fetch-mode": "navigate",
            "sec-fetch-site": "cross-site",
            "upgrade-insecure-requests": "1",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "suiteServiceUserName": "JeanMatthieu.Guerin@microfocus.com",
            "suiteServiceReturnUrl": "https://microfocusinternational.sharepoint.com/SitePages/Redirect.aspx",
            "apiver": "1"
        },
    }).sendSync();

    const webResponse39 = new load.WebRequest({
        id: 39,
        url: "https://webshell.suite.office.com/iframe/TokenFactoryIframe",
        method: "GET",
        headers: {
            "accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "iframe",
            "sec-fetch-mode": "navigate",
            "sec-fetch-site": "cross-site",
            "upgrade-insecure-requests": "1",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        resources: [
            "https://shell.cdn.office.net/shellux/o365/versionless/suiteux.shell.tokenfactoryiframe.f31f9e12f7fa3b3a06c6.js",
        ],
        queryString: {
            "origin": "https://microfocusinternational.sharepoint.com",
            "shsid": "f2a42f1d-2369-4169-850b-bd554a02f743",
            "apiver": "oneshell",
            "cshver": "20201022.1",
            "upn": "JeanMatthieu.Guerin@microfocus.com"
        },
    }).sendSync();

    const webResponse40 = new load.WebRequest({
        id: 40,
        url: "https://config.fp.measure.office.com/conf/v2/o365se/fpconfig.min.json",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "origin": "https://microfocusinternational.sharepoint.com",
            "referer": "https://microfocusinternational.sharepoint.com/",
            "sec-fetch-dest": "empty",
            "sec-fetch-mode": "cors",
            "sec-fetch-site": "cross-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "monitorId": "O365se"
        },
    }).sendSync();

    const webResponse41 = new load.WebRequest({
        id: 41,
        url: "https://login.microsoftonline.com/common/oauth2/authorize",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Referer": "https://webshell.suite.office.com/iframe/TokenFactoryIframe?origin=https%3A%2F%2Fmicrofocusinternational.sharepoint.com&shsid=f2a42f1d-2369-4169-850b-bd554a02f743&apiver=oneshell&cshver=20201022.1&upn=JeanMatthieu.Guerin%40microfocus.com",
            "Sec-Fetch-Dest": "iframe",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "cross-site",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "response_type": "id_token",
            "client_id": "89bee1f7-5e6e-4d8a-9f3d-ecd601259da7",
            "redirect_uri": "https://webshell.suite.office.com/iframe/TokenFactoryIframe",
            "state": "838677c5-d0ef-4eb0-bc6b-6fc5faa3db0c",
            "client-request-id": "da4ddba6-c6a4-4508-8699-965449de3777",
            "x-client-SKU": "Js",
            "x-client-Ver": "1.0.15",
            "nonce": "8d549648-ce1d-423e-8418-2e12886e5259",
            "prompt": "none",
            "login_hint": "JeanMatthieu.Guerin@microfocus.com"
        },
    }).sendSync();

    const webResponse42 = new load.WebRequest({
        id: 42,
        url: "https://microfocusinternational.sharepoint.com/sites/infocus/",
        method: "GET",
        headers: {
            "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Referer": "https://microfocusinternational.sharepoint.com/SitePages/Redirect.aspx",
            "Sec-Fetch-Dest": "document",
            "Sec-Fetch-Mode": "navigate",
            "Sec-Fetch-Site": "same-origin",
            "Upgrade-Insecure-Requests": "1",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        resources: [
            "https://microfocusinternational.sharepoint.com/sites/onesource/config/home-config.js",
            "https://microfocusinternational.sharepoint.com/sites/infocus/code/bootstrap.js",
            "https://cdn.jsdelivr.net/npm/es6-promise/dist/es6-promise.auto.min.js",
            "https://cdn.jsdelivr.net/npm/whatwg-fetch/dist/fetch.umd.min.js",
            "https://cdnjs.cloudflare.com/ajax/libs/bluebird/3.3.4/bluebird.min.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/bootstrap.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6/css/base.css",
            "https://microfocusinternational.sharepoint.com/sites/infocus/code/config.js?_=1603443485492",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/static/jquery.legacy.min.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/config/integration-config.js?_=1603443485492",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6/js/vue-app.js",
            "https://static.microfocus.com/js/mf-header-footer.js?v=1603443485492",
            "https://microfocusinternational.sharepoint.com/sites/infocus/code/app.js?_=1603443485492",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6/js/icon-pack.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/ce1d841cbe7cfa1404f3.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/5fa5e7808fcdc413fba7.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/354ab05250708b0f2496.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/c1acde5489051734cc24.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/36fa7105d50d33e1be99.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/56c69f0542094b2fcac3.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/316791043eacd260cc92.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/3c0a114be35ec2a71179.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/299f5ac9cd54d97e884a.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/b0c2b2258032a92199ed.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/6858cf15d4f61b68a4ce.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/82c81a9b2ad46fa73acc.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/3b603671220a54e79066.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/b6d6fd0bcfa6726a48c4.js",
            "https://microfocusinternational.sharepoint.com/sites/onesource/os_dist/2.0.6//js/6ce03ae3af4a2aae3c25.js",
            "https://wsanalyticsbeacon.itcs.softwaregrp.com/beacon?id=30&loc=z&preventDefault=true",
            "https://microfocusinternational.sharepoint.com/sites/onesource/ag-fonts/AktivGroteskRg.woff",
            "https://microfocusinternational.sharepoint.com/sites/onesource/ag-fonts/AktivGroteskLt.woff",
            "https://microfocusinternational.sharepoint.com/sites/onesource/ag-fonts/AktivGroteskMd.woff",
            "https://microfocusinternational.sharepoint.com/sites/onesource/ag-fonts/AktivGroteskBd.woff",
        ],
    }).sendSync();

    const webResponse43 = new load.WebRequest({
        id: 43,
        url: "https://browser.pipe.aria.microsoft.com/Collector/3.0/",
        method: "POST",
        headers: {
            "Accept": "*/*",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Origin": "https://microfocusinternational.sharepoint.com",
            "Referer": "https://microfocusinternational.sharepoint.com/",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "no-cors",
            "Sec-Fetch-Site": "cross-site",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        body: "bQkLAkphMzg3Y2ZjZjYwMTE0YTQzYTc2OTlmOWZiYjQ5Mjg5ZS05YmNlYjlmZS0xYzA2LTQ2MGYtOTZjNS02YTBiMjQ3MzU4YmMtNzIzOAoBSRJhY3RfZGVmYXVsdF9zb3VyY2WpJDRkNjIyYmYxLTJhYzAtNDM0Ny1iM2YxLTk3N2NlOTQ1ZWQ5NNEGopPvyqpdywgKASkkNjA0OTliNGMtMGQ5ZS00NjU1LTk5MjMtOWZmNTNmMGVhMDZicaCT78qqXakGY3VzdG9tyQYJYXd0X3N0YXRzzQ0JCQ4IVGVuYW50SWQgYzZjMTkwYTFiNzNjNGE2M2JiYTg5ODM1ZDU0NmNmMjgWcmVjb3Jkc19yZWNlaXZlZF9jb3VudAEyEEFwcEluZm8uTGFuZ3VhZ2UFZW4tVVMRVXNlckluZm8uTGFuZ3VhZ2UFZW4tVVMRVXNlckluZm8uVGltZVpvbmUGKzAyOjAwFkRldmljZUluZm8uQnJvd3Nlck5hbWUGQ2hyb21lGURldmljZUluZm8uQnJvd3NlclZlcnNpb24NODYuMC40MjQwLjExMRFEZXZpY2VJbmZvLk9zTmFtZQdXaW5kb3dzFERldmljZUluZm8uT3NWZXJzaW9uAzguMRBFdmVudEluZm8uSW5pdElkJDMwZWEyZGI0LTkxNzQtNDlmZS04MzEwLTJkNmMxMmNjNjhlNhJFdmVudEluZm8uU2VxdWVuY2UBMRRFdmVudEluZm8uU2RrVmVyc2lvbhBBV1QtV2ViLUpTLTEuOC42DkV2ZW50SW5mby5OYW1lCWF3dF9zdGF0cw5FdmVudEluZm8uVGltZRgyMDIwLTEwLTIzVDA4OjU4OjAzLjg1NloAAEpjNmMxOTBhMWI3M2M0YTYzYmJhODk4MzVkNTQ2Y2YyOC1mMmEwNDgyZi1hMDBkLTQ4ZDktODIyZS1lODljYzg5ZWI2NGQtNzY4OAoBSRJhY3RfZGVmYXVsdF9zb3VyY2WpJDRhNmNjMzA1LTZiMTQtNDQ4Ni05ZmRhLTdlNjY2NmM5MjQ5MdEGppPvyqpdywgKAikkMDVkYzFhZTMtNWU1ZC00MDU2LTg2ZTktYzkyZjRlMjc4YzIzcYjw7sqqXakJZXhjZXB0aW9uyQYKbW9uaXRvcmluZ80NCQkhD01vbml0b3JpbmdfTmFtZRxVc2VyUGhvdG9fR2V0UGhvdG9VcmxfRmFpbGVkE01vbml0b3JpbmdfU2V2ZXJpdHkFRXJyb3IKQXBwSW5mby5JZAhPbmVTaGVsbA9BcHBJbmZvLlZlcnNpb24KMjAyMDEwMjIuMQtDb250ZXh0X0VudgdFVVNwcm9kDENvbnRleHRfU2l0ZQpTaGFyZXBvaW50EUNvbnRleHRfU2l0ZVN1YklkClNoZWxsU2l0ZXMVQ29udGV4dF9Xb3JrbG9hZEFwcElkClNoYXJlUG9pbnQMQ29udGV4dF9QYWdlL2h0dHBzOi8vbWljcm9mb2N1c2ludGVybmF0aW9uYWwuc2hhcmVwb2ludC5jb20vC0NvbnRleHRfU0lEJGYyYTQyZjFkLTIzNjktNDE2OS04NTBiLWJkNTU0YTAyZjc0MwtDb250ZXh0X1BJRCIxNjAzNDQzNDgxOTAwXzAuMDE5OTcwNDM1NDMzMjgxNjk3C0NvbnRleHRfVElEJDg1NmI4MTNjLTE2ZTUtNDlhNS04NWVjLTZmMDgxZTEzYjUyNwtDb250ZXh0X1VJRCQyYmMwMDljNi1kMDliLTQ0NzMtOGMzYS0wMTc2Yzk3OTFmOWIMQ29udGV4dF9QVUlEEDEwMDM3RkZFQTRGRkE4NzQSQ29udGV4dF9Jc0NvbnN1bWVyBWZhbHNlD0NvbnRleHRfRmxpZ2h0c/8CMTVHQSxTRTM3MjA4MVRva2VuRmFjdG9yeURpc2FtYmlndWF0aW9uLFNFMzcyMDg5RWR1VGhlbWluZ0VuYWJsZWQsU0U0MDQ0OTFFbmFibGVXZWJDcnlwdG8sU0U0MDQ0OTVTaG93VW5pdmVyc2FsTWVDb250cm9sLFNFNDA0NDk5Qm9vdEluZm9DYWNoaW5nRW5hYmxlZCxTRTQwNDUwM1VzZU15QXBwbGljYXRpb25zQXBwQ29sbGVjdG9yLFNFNDA0NTExRW5hYmxlVU1DRm9yV2F2ZTIsU0U0MDQ1MTNFbmFibGVXaGl0ZWJvYXJkLFNFNDA0NTMxQ1BOSVBpbkVuYWJsZWQsU0U0MDQ1MzVDYWNoZVNlYXJjaENvbmZpZ3VyYXRpb25JbkxvY2FsU3RvcmFnZSxTRTQwNDUzN0dldFNlYXJjaENvbmZpZ3VyYXRpb25Gcm9tRUNTLFNFNDA0NTU5Q29uc3VtZXJVTUNFbmFibGVkRm9yV2F2ZTETQ29udGV4dF9GbGlnaHRSaW5ncwlXb3JsZFdpZGUPQ29udGV4dF9TZWdtZW50GUR5bmFtaWNzMzY1LE9mZmljZVByb1BsdXMUVXNlckluZm8uT01TVGVuYW50SWQkODU2YjgxM2MtMTZlNS00OWE1LTg1ZWMtNmYwODFlMTNiNTI3C1VzZXJJbmZvLklkEDEwMDM3RkZFQTRGRkE4NzQPVXNlckluZm8uSWRUeXBlCU9yZ0lkUFVJRBBBcHBJbmZvLkxhbmd1YWdlBWVuLVVTEVVzZXJJbmZvLkxhbmd1YWdlBWVuLVVTEVVzZXJJbmZvLlRpbWVab25lBiswMjowMBZEZXZpY2VJbmZvLkJyb3dzZXJOYW1lBkNocm9tZRlEZXZpY2VJbmZvLkJyb3dzZXJWZXJzaW9uDTg2LjAuNDI0MC4xMTERRGV2aWNlSW5mby5Pc05hbWUHV2luZG93cxREZXZpY2VJbmZvLk9zVmVyc2lvbgM4LjEQRXZlbnRJbmZvLkluaXRJZCQzZDk2YzZlNS05ZThjLTQwZTctOThlMy00YjRmOGYyYzFkZmMSRXZlbnRJbmZvLlNlcXVlbmNlATIURXZlbnRJbmZvLlNka1ZlcnNpb24QQVdULVdlYi1KUy0xLjguNg5FdmVudEluZm8uTmFtZQptb25pdG9yaW5nDkV2ZW50SW5mby5UaW1lGDIwMjAtMTAtMjNUMDg6NTg6MDEuNjA0WgApJDg0MmQxMzc3LWFlOTEtNDA3ZS04NDRmLWZiYzM3NzJiMjkzN3Hg7+7Kql2pCmltcHJlc3Npb27JBgppbXByZXNzaW9uzQ0JCSIPSW1wcmVzc2lvbl9OYW1lCk5hdkJhckZ1bGwTSW1wcmVzc2lvbl9DYXRlZ29yeQZOYXZCYXISSW1wcmVzc2lvbl9Db250ZXh0bVRlbmFudExvZ286MTtUZW5hbnRUaGVtZUNvbG9yczowMDc5RUYsRkZGRkZGLDAwNzlFRixGRkZGRkY7VXNlclRoZW1lOk9mZmljZTtSZWFjdFZlcnNpb246MTYuOS4wO1RoaW5IZWFkZXI6MTsKQXBwSW5mby5JZAhPbmVTaGVsbA9BcHBJbmZvLlZlcnNpb24KMjAyMDEwMjIuMQtDb250ZXh0X0VudgdFVVNwcm9kDENvbnRleHRfU2l0ZQpTaGFyZXBvaW50EUNvbnRleHRfU2l0ZVN1YklkClNoZWxsU2l0ZXMVQ29udGV4dF9Xb3JrbG9hZEFwcElkClNoYXJlUG9pbnQMQ29udGV4dF9QYWdlL2h0dHBzOi8vbWljcm9mb2N1c2ludGVybmF0aW9uYWwuc2hhcmVwb2ludC5jb20vC0NvbnRleHRfU0lEJGYyYTQyZjFkLTIzNjktNDE2OS04NTBiLWJkNTU0YTAyZjc0MwtDb250ZXh0X1BJRCIxNjAzNDQzNDgxOTAwXzAuMDE5OTcwNDM1NDMzMjgxNjk3C0NvbnRleHRfVElEJDg1NmI4MTNjLTE2ZTUtNDlhNS04NWVjLTZmMDgxZTEzYjUyNwtDb250ZXh0X1VJRCQyYmMwMDljNi1kMDliLTQ0NzMtOGMzYS0wMTc2Yzk3OTFmOWIMQ29udGV4dF9QVUlEEDEwMDM3RkZFQTRGRkE4NzQSQ29udGV4dF9Jc0NvbnN1bWVyBWZhbHNlD0NvbnRleHRfRmxpZ2h0c/8CMTVHQSxTRTM3MjA4MVRva2VuRmFjdG9yeURpc2FtYmlndWF0aW9uLFNFMzcyMDg5RWR1VGhlbWluZ0VuYWJsZWQsU0U0MDQ0OTFFbmFibGVXZWJDcnlwdG8sU0U0MDQ0OTVTaG93VW5pdmVyc2FsTWVDb250cm9sLFNFNDA0NDk5Qm9vdEluZm9DYWNoaW5nRW5hYmxlZCxTRTQwNDUwM1VzZU15QXBwbGljYXRpb25zQXBwQ29sbGVjdG9yLFNFNDA0NTExRW5hYmxlVU1DRm9yV2F2ZTIsU0U0MDQ1MTNFbmFibGVXaGl0ZWJvYXJkLFNFNDA0NTMxQ1BOSVBpbkVuYWJsZWQsU0U0MDQ1MzVDYWNoZVNlYXJjaENvbmZpZ3VyYXRpb25JbkxvY2FsU3RvcmFnZSxTRTQwNDUzN0dldFNlYXJjaENvbmZpZ3VyYXRpb25Gcm9tRUNTLFNFNDA0NTU5Q29uc3VtZXJVTUNFbmFibGVkRm9yV2F2ZTETQ29udGV4dF9GbGlnaHRSaW5ncwlXb3JsZFdpZGUPQ29udGV4dF9TZWdtZW50GUR5bmFtaWNzMzY1LE9mZmljZVByb1BsdXMUVXNlckluZm8uT01TVGVuYW50SWQkODU2YjgxM2MtMTZlNS00OWE1LTg1ZWMtNmYwODFlMTNiNTI3C1VzZXJJbmZvLklkEDEwMDM3RkZFQTRGRkE4NzQPVXNlckluZm8uSWRUeXBlCU9yZ0lkUFVJRBBBcHBJbmZvLkxhbmd1YWdlBWVuLVVTEVVzZXJJbmZvLkxhbmd1YWdlBWVuLVVTEVVzZXJJbmZvLlRpbWVab25lBiswMjowMBZEZXZpY2VJbmZvLkJyb3dzZXJOYW1lBkNocm9tZRlEZXZpY2VJbmZvLkJyb3dzZXJWZXJzaW9uDTg2LjAuNDI0MC4xMTERRGV2aWNlSW5mby5Pc05hbWUHV2luZG93cxREZXZpY2VJbmZvLk9zVmVyc2lvbgM4LjEQRXZlbnRJbmZvLkluaXRJZCQzZDk2YzZlNS05ZThjLTQwZTctOThlMy00YjRmOGYyYzFkZmMSRXZlbnRJbmZvLlNlcXVlbmNlATEURXZlbnRJbmZvLlNka1ZlcnNpb24QQVdULVdlYi1KUy0xLjguNg5FdmVudEluZm8uTmFtZQppbXByZXNzaW9uDkV2ZW50SW5mby5UaW1lGDIwMjAtMTAtMjNUMDg6NTg6MDEuNTg0Ws0iCQgBFEltcHJlc3Npb25fSXRlbUNvdW50AAAAAAAAAAAAAAA=",
        queryString: {
            "qsp": "true",
            "content-type": "application/bond-compact-binary",
            "client-id": "NO_AUTH",
            "sdk-version": "AWT-Web-JS-1.8.6",
            "x-apikey": "a387cfcf60114a43a7699f9fbb49289e-9bceb9fe-1c06-460f-96c5-6a0b247358bc-7238,c6c190a1b73c4a63bba89835d546cf28-f2a0482f-a00d-48d9-822e-e89cc89eb64d-7688",
            "client-time-epoch-millis": "1603443483862",
            "time-delta-to-apply-millis": "use-collector-delta"
        },
    }).sendSync();

    const webResponse44 = new load.WebRequest({
        id: 44,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/contextinfo",
        method: "POST",
        headers: {
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "text/plain;charset=UTF-8",
            "Origin": "https://microfocusinternational.sharepoint.com",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest",
            "accept": "application/json;odata=verbose"
        },
        body: "[object Object]",
    }).sendSync();

    const webResponse45 = new load.WebRequest({
        id: 45,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/Web/CurrentUser",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24expand": "Groups",
            "%24select": "Id,LoginName,Title,Groups",
            "_": "1603443488874"
        },
    }).sendSync();

    const webResponse46 = new load.WebRequest({
        id: 46,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/SP.UserProfiles.PeopleManager/GetMyProperties",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24select": "Id,DisplayName,Email,LoginName,PersonalUrl,Title,UserUrl,AccountName,PictureUrl,Department",
            "_": "1603443488902"
        },
    }).sendSync();

    const webResponse47 = new load.WebRequest({
        id: 47,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/SP.UI.ApplicationPages.ClientPeoplePickerWebServiceInterface.clientPeoplePickerSearchUser",
        method: "POST",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Origin": "https://microfocusinternational.sharepoint.com",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-RequestDigest": "0x120A334345C93D1ACFB0697DF191CD16106E8FCD9179E06BC76AC7447B3E4DBBE0D2213BE1DFCF301883ACC2523623F8877F4194D0483CA5796C54893CE36A9F,23 Oct 2020 08:58:07 -0000",
            "X-Requested-With": "XMLHttpRequest"
        },
        body: {
            "queryParams": {
                "__metadata": {
                    "type": "SP.UI.ApplicationPages.ClientPeoplePickerQueryParameters"
                },
                "AllowEmailAddresses": true,
                "AllowMultipleEntities": false,
                "AllUrlZones": false,
                "MaximumEntitySuggestions": 10,
                "PrincipalSource": 15,
                "PrincipalType": 1,
                "QueryString": "wake",
                "Required": false
            }
        },
    }).sendSync();

    const webResponse48 = new load.WebRequest({
        id: 48,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/contextinfo",
        method: "POST",
        headers: {
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "text/plain;charset=UTF-8",
            "Origin": "https://microfocusinternational.sharepoint.com",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest",
            "accept": "application/json;odata=verbose"
        },
        body: "[object Object]",
    }).sendSync();

    const webResponse49 = new load.WebRequest({
        id: 49,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/ensureuser",
        method: "POST",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Origin": "https://microfocusinternational.sharepoint.com",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-RequestDigest": "0x921D99E3FA6A237256A11E9C5999CCCD9B98A24F6DD2FD6479563DF4B53B95B035F458CE242C455195FCC797C1B02F188E9C57461ED910FE480AA4CB19FC5EE8,23 Oct 2020 08:58:08 -0000",
            "X-Requested-With": "XMLHttpRequest"
        },
        body: {
            "logonName": "i:0#.f|membership|jeanmatthieu.guerin@microfocus.com"
        },
    }).sendSync();

    const webResponse50 = new load.WebRequest({
        id: 50,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('UserSettings')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "User/Id eq 6583",
            "_": "1603443492992"
        },
    }).sendSync();

    const webResponse51 = new load.WebRequest({
        id: 51,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('GlobalBanner')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Active eq 1",
            "%24select": "Text,Expire,Exclude,Data",
            "%24top": "4999",
            "_": "1603443496734"
        },
    }).sendSync();

    const webResponse52 = new load.WebRequest({
        id: 52,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('StockQuotes')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=nometadata",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=nometadata",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Symbol eq 'MCRO.LON' and Modified ge datetime'2020-10-23T08:52:16Z'",
            "%24select": "Symbol, Modified",
            "%24top": "1",
            "_": "1603443496838"
        },
    }).sendSync();

    const webResponse53 = new load.WebRequest({
        id: 53,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('StockQuotes')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=nometadata",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=nometadata",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Symbol eq 'MFGP' and Modified ge datetime'2020-10-23T08:52:16Z'",
            "%24select": "Symbol, Modified",
            "%24top": "1",
            "_": "1603443496839"
        },
    }).sendSync();

    const webResponse54 = new load.WebRequest({
        id: 54,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('Homepages')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Author/ID eq '6583'",
            "%24select": "Id, Modified, weather",
            "%24top": "1",
            "_": "1603443496906"
        },
    }).sendSync();

    const webResponse55 = new load.WebRequest({
        id: 55,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('Homepages')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Author/ID eq '6583'",
            "%24select": "Id, Modified, news",
            "%24top": "1",
            "_": "1603443496910"
        },
    }).sendSync();

    const webResponse56 = new load.WebRequest({
        id: 56,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('Homepages')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Author/ID eq '6583'",
            "%24select": "Id, Modified, data",
            "%24top": "1",
            "_": "1603443496920"
        },
    }).sendSync();

    const webResponse57 = new load.WebRequest({
        id: 57,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('HomepageGraphScopes')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Author/ID eq '6583'",
            "%24select": "Id, scopes, scopesStage",
            "_": "1603443496924"
        },
    }).sendSync();

    const webResponse58 = new load.WebRequest({
        id: 58,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('UserSettings')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "User/Id eq 6583",
            "_": "1603443496961"
        },
    }).sendSync();

    const webResponse59 = new load.WebRequest({
        id: 59,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('StockQuotes')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=nometadata",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=nometadata",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Symbol eq 'MCRO.LON'",
            "%24select": "Title, Symbol, Price, Change, ChangePercent, Modified, ID",
            "%24top": "4999",
            "_": "1603443498001"
        },
    }).sendSync();

    const webResponse60 = new load.WebRequest({
        id: 60,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/web/lists",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Title eq 'Pages' or Title eq 'SitePages'",
            "_": "1603443498579"
        },
    }).sendSync();

    const webResponse61 = new load.WebRequest({
        id: 61,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('StockQuotes')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=nometadata",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=nometadata",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Symbol eq 'MFGP'",
            "%24select": "Title, Symbol, Price, Change, ChangePercent, Modified, ID",
            "%24top": "4999",
            "_": "1603443498652"
        },
    }).sendSync();

    const webResponse62 = new load.WebRequest({
        id: 62,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('Weather')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "city eq '2641689'",
            "%24select": "Id, city, weather, Modified",
            "%24top": "1",
            "_": "1603443498855"
        },
    }).sendSync();

    const webResponse63 = new load.WebRequest({
        id: 63,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/Web/CurrentUser",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24expand": "Groups",
            "%24select": "Id,LoginName,Title,Email",
            "_": "1603443499159"
        },
    }).sendSync();

    const webResponse64 = new load.WebRequest({
        id: 64,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('ITUpdates')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=nometadata",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=nometadata",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24orderby": "starting desc",
            "%24select": "ID, Title, category, description, starting, ending, url, visible",
            "%24top": "4999",
            "_": "1603443499165"
        },
    }).sendSync();

    const webResponse65 = new load.WebRequest({
        id: 65,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('PollResults')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24expand": "Author",
            "%24filter": "PID eq 'rkgWDJPawP'",
            "%24select": "AID, Author/Id",
            "_": "1603443499171"
        },
    }).sendSync();

    const webResponse66 = new load.WebRequest({
        id: 66,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('MandatoryReads')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Start le datetime'2020-10-23T08:58:19.317Z' and End ge datetime'2020-10-23T08:58:19.317Z' and Status eq 'Approved'",
            "%24select": "Id, Title, Audience, Url, Start, End, ReadBy, Description, Data",
            "%24top": "4999",
            "_": "1603443499317"
        },
    }).sendSync();

    const webResponse67 = new load.WebRequest({
        id: 67,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/ensureuser",
        method: "POST",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Origin": "https://microfocusinternational.sharepoint.com",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-RequestDigest": "0x921D99E3FA6A237256A11E9C5999CCCD9B98A24F6DD2FD6479563DF4B53B95B035F458CE242C455195FCC797C1B02F188E9C57461ED910FE480AA4CB19FC5EE8,23 Oct 2020 08:58:08 -0000",
            "X-Requested-With": "XMLHttpRequest"
        },
        body: {
            "logonName": "i:0#.f|membership|jeanmatthieu.guerin@microfocus.com"
        },
    }).sendSync();

    const webResponse68 = new load.WebRequest({
        id: 68,
        url: "https://microfocusinternational.sharepoint.com/sites/corp/Coronavirus-updates/_api/web/lists",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Title eq 'Pages' or Title eq 'SitePages'",
            "_": "1603443500389"
        },
    }).sendSync();

    const webResponse69 = new load.WebRequest({
        id: 69,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('Blogs')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24expand": "Author",
            "%24filter": "Author/Id eq 6583",
            "%24select": "Id, ID, Views, Likes, Title, AllowComments, ImageUrl, Tagline, Status, Published, Tags, PublishedDate, Author/Name, Author/Id, Author/EMail, Author/FirstName, Author/LastName",
            "%24top": "4999",
            "_": "1603443500639"
        },
    }).sendSync();

    const webResponse70 = new load.WebRequest({
        id: 70,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('Favourites')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "User/Id eq 6583",
            "%24orderby": "ID desc",
            "%24select": "Id,Data,Created,Modified",
            "%24top": "1",
            "_": "1603443500644"
        },
    }).sendSync();

    const webResponse71 = new load.WebRequest({
        id: 71,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('OsSettings')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24select": "Id, Data",
            "_": "1603443500646"
        },
    }).sendSync();

    const webResponse72 = new load.WebRequest({
        id: 72,
        url: "https://platform.twitter.com/widgets/widget_iframe.96fd96193cc66c3e11d4c5e4c7c7ec97.html",
        method: "GET",
        headers: {
            "accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "sec-fetch-dest": "iframe",
            "sec-fetch-mode": "navigate",
            "sec-fetch-site": "cross-site",
            "upgrade-insecure-requests": "1",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        queryString: {
            "origin": "https://microfocusinternational.sharepoint.com"
        },
    }).sendSync();

    const webResponse73 = new load.WebRequest({
        id: 73,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/CurrentUser",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24expand": "Groups",
            "%24select": "Id,LoginName,Title,Groups",
            "_": "1603443501354"
        },
    }).sendSync();

    const webResponse74 = new load.WebRequest({
        id: 74,
        url: "https://syndication.twitter.com/settings",
        method: "GET",
        headers: {
            "accept": "*/*",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "origin": "https://platform.twitter.com",
            "referer": "https://platform.twitter.com/widgets/widget_iframe.96fd96193cc66c3e11d4c5e4c7c7ec97.html?origin=https%3A%2F%2Fmicrofocusinternational.sharepoint.com",
            "sec-fetch-dest": "empty",
            "sec-fetch-mode": "cors",
            "sec-fetch-site": "same-site",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
    }).sendSync();

    const webResponse75 = new load.WebRequest({
        id: 75,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('Favourites')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "IsGlobal eq 1",
            "%24orderby": "ID desc",
            "%24select": "Id,Data,Created,Modified",
            "%24top": "1",
            "_": "1603443502101"
        },
    }).sendSync();

    const webResponse76 = new load.WebRequest({
        id: 76,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('OsSettings')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24select": "Id, Data",
            "_": "1603443502157"
        },
    }).sendSync();

    const webResponse77 = new load.WebRequest({
        id: 77,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('NewsFeeds')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "User/Id eq 6583",
            "%24orderby": "ID desc",
            "%24select": "Id,Data,Created,Modified",
            "%24top": "1",
            "_": "1603443502155"
        },
    }).sendSync();

    const webResponse78 = new load.WebRequest({
        id: 78,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('BlogActivity')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24expand": "Author",
            "%24filter": "Author/Id eq 6583",
            "%24orderby": "Id desc",
            "%24select": "Id, ID, Title, Score, Author/Name, Author/Id, Created",
            "%24top": "4999",
            "_": "1603443502210"
        },
    }).sendSync();

    const webResponse79 = new load.WebRequest({
        id: 79,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/web/lists/getbytitle('NewsFeeds')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "IsGlobal eq 1",
            "%24orderby": "ID desc",
            "%24select": "Id,Data,Created,Modified",
            "%24top": "1",
            "_": "1603443502850"
        },
    }).sendSync();

    const webResponse80 = new load.WebRequest({
        id: 80,
        url: "https://microfocusinternational.sharepoint.com/sites/Product/_api/web/lists",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Title eq 'Pages' or Title eq 'SitePages'",
            "_": "1603443503860"
        },
    }).sendSync();

    const webResponse81 = new load.WebRequest({
        id: 81,
        url: "https://syndication.twitter.com/i/jot",
        method: "POST",
        headers: {
            "accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "cache-control": "max-age=0",
            "content-type": "application/x-www-form-urlencoded",
            "origin": "https://microfocusinternational.sharepoint.com",
            "sec-fetch-dest": "iframe",
            "sec-fetch-mode": "navigate",
            "sec-fetch-site": "cross-site",
            "upgrade-insecure-requests": "1",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36"
        },
        body: {
            "dnt": "0",
            "tfw_redirect": "https://platform.twitter.com/jot.html",
            "l": [
                "{\"widget_origin\":\"https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home\",\"widget_frame\":false,\"widget_data_source\":\"profile:MicroFocus\",\"query\":null,\"profile_id\":null,\"item_ids\":[\"1319384787120017413\",\"1319379251548852245\",\"1319357104956858371\",\"1319354085062172673\",\"1319342027671298049\",\"1319326147956690944\",\"1319325392969338885\",\"1319305987124350977\",\"1319315078420832257\",\"1319297966759383040\",\"1319284882523054082\",\"1319267763475697670\",\"1319171633484124160\",\"1319025925267271680\",\"1319021896575389696\",\"1319009315345387525\",\"1319008561717006337\",\"1319002270206480385\",\"1318999273359482880\",\"1318997988585459714\"],\"item_details\":{\"1319384787120017413\":{\"item_type\":0},\"1319379251548852245\":{\"item_type\":0},\"1319357104956858371\":{\"item_type\":0},\"1319354085062172673\":{\"item_type\":0},\"1319342027671298049\":{\"item_type\":0},\"1319326147956690944\":{\"item_type\":0},\"1319325392969338885\":{\"item_type\":0},\"1319305987124350977\":{\"item_type\":10,\"target_type\":0,\"target_id\":\"1319317922087636993\"},\"1319315078420832257\":{\"item_type\":0},\"1319297966759383040\":{\"item_type\":0},\"1319284882523054082\":{\"item_type\":0},\"1319267763475697670\":{\"item_type\":0},\"1319171633484124160\":{\"item_type\":0},\"1319025925267271680\":{\"item_type\":0},\"1319021896575389696\":{\"item_type\":0},\"1319009315345387525\":{\"item_type\":0},\"1319008561717006337\":{\"item_type\":0},\"1319002270206480385\":{\"item_type\":0},\"1318999273359482880\":{\"item_type\":0},\"1318997988585459714\":{\"item_type\":0}},\"_category_\":\"tfw_client_event\",\"triggered_on\":1603443504798,\"dnt\":false,\"client_version\":\"ed20a2b:1601588405575\",\"format_version\":1,\"event_namespace\":{\"client\":\"tfw\",\"page\":\"timeline\",\"component\":\"timeline\",\"element\":\"initial\",\"action\":\"results\"}}",
                "{\"widget_origin\":\"https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home\",\"widget_frame\":false,\"widget_data_source\":\"profile:MicroFocus\",\"query\":null,\"profile_id\":null,\"items\":[{\"card_name\":\"summary_large_image\"}],\"_category_\":\"tfw_client_event\",\"triggered_on\":1603443504799,\"dnt\":false,\"client_version\":\"ed20a2b:1601588405575\",\"format_version\":2,\"event_namespace\":{\"client\":\"tfw\",\"page\":\"timeline\",\"component\":\"card\",\"action\":\"shown\"}}",
                "{\"widget_origin\":\"https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home\",\"widget_frame\":false,\"widget_data_source\":\"profile:MicroFocus\",\"query\":null,\"profile_id\":null,\"items\":[{\"card_name\":\"summary_large_image\"}],\"_category_\":\"tfw_client_event\",\"triggered_on\":1603443504799,\"dnt\":false,\"client_version\":\"ed20a2b:1601588405575\",\"format_version\":2,\"event_namespace\":{\"client\":\"tfw\",\"page\":\"timeline\",\"component\":\"card\",\"action\":\"shown\"}}",
                "{\"widget_origin\":\"https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home\",\"widget_frame\":false,\"widget_data_source\":\"profile:MicroFocus\",\"query\":null,\"profile_id\":null,\"items\":[{\"card_name\":\"summary_large_image\"}],\"_category_\":\"tfw_client_event\",\"triggered_on\":1603443504799,\"dnt\":false,\"client_version\":\"ed20a2b:1601588405575\",\"format_version\":2,\"event_namespace\":{\"client\":\"tfw\",\"page\":\"timeline\",\"component\":\"card\",\"action\":\"shown\"}}",
                "{\"widget_origin\":\"https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home\",\"widget_frame\":false,\"widget_data_source\":\"profile:MicroFocus\",\"query\":null,\"profile_id\":null,\"items\":[{\"card_name\":\"summary_large_image\"}],\"_category_\":\"tfw_client_event\",\"triggered_on\":1603443504799,\"dnt\":false,\"client_version\":\"ed20a2b:1601588405575\",\"format_version\":2,\"event_namespace\":{\"client\":\"tfw\",\"page\":\"timeline\",\"component\":\"card\",\"action\":\"shown\"}}",
            ]
        },
    }).sendSync();

    const webResponse82 = new load.WebRequest({
        id: 82,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/web/lists/getbytitle('Pages')/fields",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Title eq 'OsArticleExpiryDate'",
            "%24select": "Title",
            "_": "1603443506134"
        },
    }).sendSync();

    const webResponse83 = new load.WebRequest({
        id: 83,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/web/lists/getbytitle('Pages')/fields",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "Title eq 'OsParentPageId'",
            "%24select": "Title",
            "_": "1603443507350"
        },
    }).sendSync();

    const webResponse84 = new load.WebRequest({
        id: 84,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/web/lists/getbytitle('Pages')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24filter": "(OsArticle eq 1 and OsDate le datetime'2020-10-23T08:58:27Z')",
            "%24orderby": "OsSticky desc, OsDate desc, OsPriority desc",
            "%24select": "ID,Title,Created,Modified,OsArticle,OsArticleImage,OsArticleSummary,OsDate,OsKeywords,OsPriority,OsSticky,OsTags,OsUrl,OsTarget,FileRef,OsData,OsArticleExpiryDate,OsPinExpiryDate,OsParentPageId,OsLanguage",
            "%24top": "4999",
            "_": "1603443507651"
        },
    }).sendSync();

    const webResponse85 = new load.WebRequest({
        id: 85,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/Web/Lists",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "$filter": "title eq 'OsTranslations'",
            "_": "1603443507653"
        },
    }).sendSync();

    const webResponse86 = new load.WebRequest({
        id: 86,
        url: "https://microfocusinternational.sharepoint.com/sites/InFocus/_api/web/lists/getbytitle('OsTranslations')/Items",
        method: "GET",
        headers: {
            "Accept": "application/json; odata=verbose",
            "Accept-Encoding": "gzip, deflate, br",
            "Accept-Language": "en-US,en;q=0.9",
            "Connection": "keep-alive",
            "Content-Type": "application/json;odata=verbose",
            "Referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "Sec-Fetch-Dest": "empty",
            "Sec-Fetch-Mode": "cors",
            "Sec-Fetch-Site": "same-origin",
            "User-Agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "X-Requested-With": "XMLHttpRequest"
        },
        queryString: {
            "%24orderby": "ParentPageId desc",
            "%24select": "ParentPageId, Data",
            "%24top": "4999",
            "_": "1603443507985"
        },
    }).sendSync();

    const webResponse87 = new load.WebRequest({
        id: 87,
        url: "https://microfocusinternational.sharepoint.com/sites/onesource/_api/Web/Lists/GetByTitle('ITUpdates')/Items",
        method: "GET",
        headers: {
            "accept": "application/json; odata=nometadata",
            "accept-encoding": "gzip, deflate, br",
            "accept-language": "en-US,en;q=0.9",
            "content-type": "application/json;odata=nometadata",
            "referer": "https://microfocusinternational.sharepoint.com/sites/infocus/Pages/index.aspx?route=home",
            "sec-fetch-dest": "empty",
            "sec-fetch-mode": "cors",
            "sec-fetch-site": "same-origin",
            "user-agent": "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36",
            "x-requested-with": "XMLHttpRequest"
        },
        queryString: {
            "%24orderby": "starting desc",
            "%24select": "ID, Title, category, description, starting, ending, url, visible",
            "%24top": "4999",
            "_": "1603443559195"
        },
    }).sendSync();

});

load.finalize("Finalize", async function () {
});
