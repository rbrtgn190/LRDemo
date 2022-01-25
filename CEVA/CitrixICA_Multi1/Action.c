Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_max_html_param_len("73886"); //5964

	/*
	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t181.inf", 
		LAST);

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		LAST);
	*/

	/*
	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0CK<j\\xAC\\xD2\\xC0\\xBB\\xD5\\xF5\\x1C\\xB8\\xAA\\xE3\\x95j", 
		LAST);

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x047\\xD7\t\\xB7\\xA9<>\\x8F\\xA9\\x06\\xAE^\\x14\\xB1\\x8E\\\\\\x1C", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);
		*/

/*Correlation comment: Automatic rules - Do not change!  
Original value='f0991d8614b44e51a323bf43213cfc22' 
Name ='sentry_key' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='sentrysdk'*/
	web_reg_save_param_regexp(
		"ParamName=sentry_key",
		"RegExp=https://(.*?)@sentry\\.io",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/StoreWeb/*",
		LAST);

/*Correlation comment - Do not change!  Original value='tTI-xE0hYUaTHUoxjY46ig' Name ='CorrelationParameter' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB= authDomain=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/StoreWeb/*",
		LAST);

	web_set_max_html_param_len("5600");

	web_url("cevalogistics.cloud.com", 
		"URL=https://cevalogistics.cloud.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		LAST);

/*
	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02V\\xC9\\xFA\\x9DAw\\xEFw?\\x8D\\xEF\\xC4\\x83xQ", 
		EXTRARES, 
		"Url=https://contile.services.mozilla.com/v1/tiles", "Referer=", ENDITEM, 
		LAST);
*/

/*web_websocket_connect("ID=0",
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);
*/


/*
	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1642777078159\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);
		*/

		
		/*
	web_custom_request("5dcb9658-4ef8-4f63-bab7-71e5e82d7202", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/5dcb9658-4ef8-4f63-bab7-71e5e82d7202", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t188.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":92,\"start_time\":\"2022-01-21T16:37+01:00\",\"end_time\":\"2022-01-21T16:38+01:00\",\"reason\":\"active\"},\"client_info\":{\"telemetry_sdk_build\":\"42.1.0\",\"app_build\":\"20220113185450\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_display_version\":\"96.0.1\",\"app_channel\":\"release\",\"os\":\"Windows\",\"client_id\":\"b1ab44f2-0f62-45fe-84c7-b52c9227bf44\",\"first_run_date\":\"2021-11-02+00:00\"},\"metrics\":{\"counter\":{\""
		"browser.engagement.active_ticks\":6},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1}},\"datetime\":{\"glean.validation.first_run_hour\":\"2021-11-02T08+00:00\"}}}", 
		LAST);

	web_custom_request("5db52b2e-d68b-4eef-8ee7-6c256a59b000", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/5db52b2e-d68b-4eef-8ee7-6c256a59b000", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t189.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\"},\"bug-1712189-rollout-keep-firefox-up-to-date-even-when-it-is-not-ru-release-90-94\":{\"branch\":\"active\"},\"bug-1732206-rollout-fission-release-rollout-release-94-95\":{\"branch\":\"active\"},\"bug-1750257-rollout-pref-off-networkcookiesamesiteschemeful-in-release-96-96\":{\"branch\":\"active\"}},\"locale\":\"en-US\",\"version\":\"96.0.1\",\"release_channel\":\""
		"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20220113185450\",\"impression_id\":\"{16ceffee-5b47-402e-9dd4-9001d880e6e8}\"}", 
		LAST);
		*/

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_url("StoreWeb", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=assets/workspace/react.2bd7a2cfd6f3a5c98233.js", ENDITEM, 
		"Url=assets/workspace/workspace-vertical-logo-teal.svg", ENDITEM, 
		"Url=assets/workspace/spinner-teal.svg", ENDITEM, 
		LAST);

	/*
	web_custom_request("ocsp.sca1b.amazontrust.com", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0Fa@\\xBAJF\\x0B\\x8F\\x10\\x15\\x8Aa\\x1B[\\xF1t", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/externals/sentry.6.13.2.min.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3947.11d3b3c0fe4c52a24414.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7843.610d4b00a81fca13ad50.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);
*/

	web_url("StoreWeb_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=assets/workspace/favicon.png", ENDITEM, 
		LAST);

/*
	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9102.7b9cffbd2d5d96f128b9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("ocsp.sca1b.amazontrust.com_2", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x08\\xD9\\x8C1\\xB8\\x96}\\xE2\\x991\\xC9>\\xE9e\\xA8_", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/Login.06198f275826e1a2c4b3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/agent/static/c51a876e-13e7-4d6e-78d0-f764775a736d/pendo.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);
*/

/*
	web_custom_request("envelope",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t195.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:08.934Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"b731edf800ec4208aee96f65a23fc2a1\",\"init\":true,\"started\":\"2022-01-21T15:38:08.934Z\",\"timestamp\":\"2022-01-21T15:38:08.934Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/piral-static-feed/feed.json", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/workspace-ui-microapps/index-24cf3fbe55b4a738c76984475e7a9ce8f14e38d4.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/workspace-ui-microapps/main.css", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8121.f4f028f849af0bfe6c35.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/5063.287c9f9aca2f4de9e890.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/3409.6a10544c96f85d9364d0.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7715.483fb8294bc1fecfc06f.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9527.734e286c3f41788d09b2.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/2834.7edff6e875abd5b233cc.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/6724.fad10bcfca5388e10c52.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/371.19788770111333a220d6.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);

	web_custom_request("envelope_2",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t196.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:09.739Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"b731edf800ec4208aee96f65a23fc2a1\",\"init\":false,\"started\":\"2022-01-21T15:38:08.934Z\",\"timestamp\":\"2022-01-21T15:38:09.739Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/228.6af55df91eac33597041.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/4760.ac106c61a0b705080270.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/4933.04f88ddf4aadc0e3ecfa.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9350.9280286916a2b955987e.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9322.ceccbf26c51dc51cc0ff.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/5956.a22b45877ef5952561a9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8784.af23dc3a89c4ee264b8a.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7032.9986872c4ff8582862a9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9253.d92f1f6d4d25151742f9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9128.aa95fb80d257f578d09e.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7464.494652dadd22c502b6c2.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8148.b5f3fb7bd6cbbb131adb.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/6102.1ca768e96cd3d9b03929.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7329.51b325a315c23ada037a.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/2224.c7eb7fbca3704e887266.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/299.28bf9e621347fff3a422.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/120.11882f3b75dc2015e3f7.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/2664.a862b8d98cdf20f637f8.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/4905.8c0e6f6c158ed927aba8.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7148.1e5a1690a430387c1079.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1832.22bc2554e6fbc9748f04.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9662.4a16cd86fc9398dde469.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1331.25c71b132c18a5a2ce9f.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/5754.33cba4a71b61926e999b.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/3925.6e800fbcc7336ab41514.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/2500.7d8d2163b44c89c2d4e1.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/6907.8f5d44084defffbda844.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9234.fe0b79db716f4395922f.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7403.d739e0d24447a0163c1c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/3660.0caa62a1f9639bc8a54d.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/AppShell.a5ef08195723deccb8a5.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);
*/
	web_add_header("Csrf-Token", 
		"undefined");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

/*Correlation comment: Automatic rules - Do not change!  
Original value='D1F53058F3429CC7A0984E1C71B75B2E' 
Name ='CitrixXenApp_CsrfToken' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='CsrfToken'*/
	web_reg_save_param_ex(
		"ParamName=CitrixXenApp_CsrfToken",
		"LB/IC=CsrfToken=",
		"RB/IC=;",
		SEARCH_FILTERS,
		"Scope=Cookies",
		LAST);

	web_submit_data("GetUserDetails", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/Authentication/GetUserDetails", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);
/*
	web_custom_request("envelope_3",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t198.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:09.740Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"7268111224ad4463beea55c7b81e8597\",\"init\":true,\"started\":\"2022-01-21T15:38:09.739Z\",\"timestamp\":\"2022-01-21T15:38:09.739Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);

	web_custom_request("envelope_4",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t199.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:10.349Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"7268111224ad4463beea55c7b81e8597\",\"init\":false,\"started\":\"2022-01-21T15:38:09.739Z\",\"timestamp\":\"2022-01-21T15:38:10.349Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("envelope_5",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t200.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:10.350Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"be0159556a084d9f815c210d4a900656\",\"init\":true,\"started\":\"2022-01-21T15:38:10.349Z\",\"timestamp\":\"2022-01-21T15:38:10.349Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);
*/
	
lr_output_message(lr_eval_string(">>>> CsrfToken : {CitrixXenApp_CsrfToken}"));

web_add_cookie("WSUI-PendingLogins=[{%22challenge%22:%22reason=%5C%22notoken%5C%22%2C%20location=%5C%22Authentication/GetAuthMethods%5C%22%22%2C%22locationAfterLogin%22:{%22pathname%22:%22/home%22%2C%22search%22:%22%22%2C%22hash%22:%22%22}}]; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
		
	
	//web_add_header("","");
	//web_add_header("Citrix-TransactionId",""); //d7c56b87-3cc3-4ddc-b38e-bc457ec14606
	web_add_header("X-Citrix-AM-CredentialTypes","none, username, domain, password, newpassword, passcode, savecredentials, textcredential, webview");
	web_add_header("X-Citrix-AM-LabelTypes","none, plain, heading, information, warning, error, confirmation, image");
	web_add_header("Origin","https://cevalogistics.cloud.com");
	web_add_header("DNT","1");
	web_add_header("Sec-Fetch-Dest","empty");
	web_add_header("Sec-Fetch-Mode","cors");
	web_add_header("Sec-Fetch-Site","same-origin");
	

	web_reg_find("Search=All",
		"Text=authentication/response/1\"><Status>success</Status>",
		LAST);

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text=The client does not meet the minimum requirements for this Form",
		LAST);
	
	//web_reg_save_param("Login_Response", "LB=", "RB=", LAST); // Action.c(442): Warning -26376: Requested parameter "Login_Response" found in 3 different pages/frames. Use "web_reg_save_param" with more restrictive LB/RB/RelFrameId  	[MsgId: MWAR-26376]
	web_reg_save_param("Login_Response", "LB=", "RB=",
	"Search=Noresource",
    "IgnoreRedirections=Yes",
    LAST);
	
	
		web_reg_save_param_ex(
		"ParamName=webview",
		"LB=oidc/webview/",
		"RB=<",
		SEARCH_FILTERS,
		"Scope=BODY",
		"RequestUrl=*/Login",
		LAST);
	
		web_custom_request("Login",
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/Login",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/vnd.citrix.authenticateresponse-1+xml",
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/",
		"Snapshot=t201.inf",
		"Mode=HTML",
		"EncType=application/json;charset=utf-8",
		"Body={}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/e86d2642f412b9493b14.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/f32753567f64c1ddeec8.woff", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);




	lr_output_message(lr_eval_string(">>>> Login_Response : {Login_Response}"));
	lr_output_message(lr_eval_string(">>>> webview : {webview}"));
	
	/*          <ID>webviewResponseId</ID>
          <Type>webview</Type>
          <wv:WebView xmlns:wv = "http://citrix.com/authentication/response/webview/1" >
            <wv:StartUrl>https://accounts-dsauthweb.cloud.com/tTI-xE0hYUaTHUoxjY46ig/oidc/webview/CfDJ8A4yPTlIR4tPmKNUxzs0HUBsGu8DYo331RTqtcqDVgOsCxG63wo9Pg8jO21mXjDNHN29W-NNzUevRKGSfSt17x2X5MinU6c4k6LdVtY_RjjwUAhagajZYc4hMaiFsw6EGQ</wv:StartUrl>
          </wv:WebView>
        </Credential>
        */
//	lr_xml_get_values("XML={Login_Response}",
//	                  "Query=/*[local-name()='AuthenticateResponse'][1]/*[local-name()='AuthenticationRequirements'][1]/*[local-name()='Requirements'][1]/*[local-name()='Requirement'][1]/*[local-name()='Credential'][1]/wv:WebView[1]/wv:StartUrl[1]/text()[1]",
//	                  "ValueParam=ParamValue_StartURL",
//	                  LAST);
//       lr_output_message(lr_eval_string("ParamValue_StartURL : {ParamValue_StartURL}"));


	lr_xml_extract("XML={Login_Response}",
	               "Query=/*[local-name()='AuthenticateResponse'][1]/*[local-name()='AuthenticationRequirements'][1]/*[local-name()='Requirements'][1]/*[local-name()='Requirement'][1]/*[local-name()='Credential'][1]/wv:WebView[1]/wv:StartUrl[1]/text()[1]",
	               "XMLFragmentParam=XmlStartUrl",
	               LAST);
                                       
       lr_output_message(lr_eval_string("XmlStartUrl : {XmlStartUrl}"));

/*
	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\xB4\\x95\\xDC\\xE1?\\x80\\xD8\\xE2\\x17\\x01\\xB6\\xFDm\\xBD_", 
		LAST);

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\"{\\x1E\\xADY\\x81\\xBDY\\x98^\\x0F\\xC5\\xE0\\xE6\\xF8", 
		LAST);
*/

/*Correlation comment: Automatic rules - Do not change!  
Original value='CfDJ8A4yPTlIR4tPmKNUxzs0HUCnc-3Ab-KMh1ELV_JwEX75Xl7qrJNPxTMBdUVlBqqiA_dxOQct-dGIEaMq-mRWjuAq7DwAQg0hwAEfiWVeflGyeun1coXdsD0fbQF2sMsKSvqDEZtsgKCzxkWZ_x3hKQmeARBx32dosT7stdAeWRt-xGLLYN1xCV_N2pmxMsTJSWmA4aKHvRL8RJXHk2u8Ux1N-36XQwA1fC01CkwyFuOa5TrQeH72TUlm3BlhIi2Hw8nI1Vl6bXQGqu06qYBEnMuTAmA5nYdlIX02PR2lt8UX' 
Name ='state' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='dsauth_state'*/
	web_reg_save_param_regexp(
		"ParamName=state",
		"RegExp=state=(.*?)\\\r\\\n",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		//"RequestUrl=*/CfDJ8A4yPTlIR4tPmKNUxzs0HUBsGu8DYo331RTqtcqDVgOsCxG63wo9Pg8jO21mXjDNHN29W-NNzUevRKGSfSt17x2X5MinU6c4k6LdVtY_RjjwUAhagajZYc4hMaiFsw6EGQ*",  
		"RequestUrl=*/{webview}*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='d2VzdGV1cm9wZTpjZDAxODkyMC1mYmE2LTRkYTgtYWUzNC05OTcyOWE4MGNiNDM%3D' 
Name ='regionSessionId' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='regionSessionId'*/
	web_reg_save_param_regexp(
		"ParamName=regionSessionId",
		"RegExp=regionSessionId=(.*?);",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"RequestUrl=*/authorize*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='839fddf3-e7ed-4b74-4e63-068001000026' 
Name ='client-request-id' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='cleintrequestid'*/
	web_reg_save_param_regexp(
		"ParamName=client-request-id",
		"RegExp=client-request-id=(.*?)\">\\\r\\\n\\ \\ \\ \\ \\ \\ \\ \\ ",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/ls/*",
		LAST);

	//web_url("CfDJ8A4yPTlIR4tPmKNUxzs0HUBsGu8DYo331RTqtcqDVgOsCxG63wo9Pg8jO21mXjDNHN29W-NNzUevRKGSfSt17x2X5MinU6c4k6LdVtY_RjjwUAhagajZYc4hMaiFsw6EGQ",
	//	"URL=https://accounts-dsauthweb.cloud.com/{CorrelationParameter}/oidc/webview/CfDJ8A4yPTlIR4tPmKNUxzs0HUBsGu8DYo331RTqtcqDVgOsCxG63wo9Pg8jO21mXjDNHN29W-NNzUevRKGSfSt17x2X5MinU6c4k6LdVtY_RjjwUAhagajZYc4hMaiFsw6EGQ?_id=webviewResponseId&_cx=&_rt=https%3A%2F%2Fcevalogistics.cloud.com%2FCitrix%2FStoreWeb%2FExplicitAuth%2FBounce&_cs={CitrixXenApp_CsrfToken}&_ps=true",
	web_reg_find("Search=Body",
		"Text=Connecting to CEVA Logistics Federation Services",
		LAST);

/*	web_reg_find("Search=Body",
		"Text=SAMLRequest=", //nZNNb9swDIb%2FiqC7I8dps1RIAqQJhgXoNiNxe9ilUGW6FaAPT5",
		LAST);
		*/
	
	web_reg_save_param_ex(
		"ParamName=SAMLRequest",
		"LB=SAMLRequest=",
		"RB=&",
		SEARCH_FILTERS,
		"Scope=HEADERS",
		"RequestUrl=*/saml/login*",
		"HeaderNames=Location",
		LAST);

	web_reg_save_param_ex(
		"ParamName=RelayState",
		"LB=RelayState=",
		"RB=&",
		SEARCH_FILTERS,
		"Scope=HEADERS",
		"RequestUrl=*/saml/login*",
		"HeaderNames=Location",
		LAST);
	
		web_reg_save_param_ex(
		"ParamName=Signature",
		"LB=Signature=",
		"RB=",
		SEARCH_FILTERS,
		"Scope=HEADERS",
		"RequestUrl=*/saml/login*",
		"HeaderNames=Location",
		LAST);
	
	web_url("accounts-dsauthweb.cloud.com",
		"URL={XmlStartUrl}?_id=webviewResponseId&_cx=&_rt=https%3A%2F%2Fcevalogistics.cloud.com%2FCitrix%2FStoreWeb%2FExplicitAuth%2FBounce&_cs={CitrixXenApp_CsrfToken}&_ps=true",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t204.inf",
		"Mode=HTML",
		EXTRARES,
//		"URL=https://idp.cevalogistics.com/adfs/portal/css/style.css?id=A7618A91AF9831C8CDF5863B4179236EC332904F166B2A3D6BF41BE9F87FCC37", "Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqC7I8dps1RIAqQJhgXoNiNxe9ilUGW6FaAPT5TT7t9PspM2hy6HHU2%2BJJ%2BXlOcojG75qgsvdge%2FO8BAtpsFfZzMnhqQTZPN8tk0u5JXMhN5kWf5uL6ZiJvr6Zd8SskDeFTOLmgxyinZInawtRiEDTGUF0WUZ8W4Gl%2FzyYyPJ78o2cQJyorQV72E0CJnTNXtSMJBaPesYlriSDrDRN0g08go%2Beq8hJ5xQRuhEdKsUiCqA7xHSu%2BCk07fKlsr%2B7ygnbfcCVTIrTCAPEi%2BX32%2F45GVPw0i5N%2BqqszKn%2FuKkhUi%2BAS2dhY7A34P%2FqAk3O%2FuPlDTvkZSu67uGdMnExL78QdVg%2F8RZw3yy8ZwaI4s%2BA4DJW9GW%2BT9OS6jt0efdDlPat5v3Z%2FVXy4XJ5d0%2BbmnOTtrO8xoeXK13ZROK%2FmHrLR2r2sPIkSnET8un52Ex0cEdX%2BuuMkAb4GsnWmFV5iObpRVpjMn%2FHPdWke6HTT%2FY%2BaiTHKZWsdwejWvztfptYCMnJUXFlvnw9H3ZzzLIfcPd%2B%2FZ879o%2BRc%3D&RelayState=CUl0cWMF7erBpQsLxXaVZQ%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=gsveYKv5z1grQgfzO5qwLuEcs%2FOs3K4xax5FXCX3iNKxMh898v5fn8lqvw8zDdCkBohkg15Y3G4SApNErrx%2FqRFf9gbmqViZyzwsOD%2BEgqaeNIars2w9ugHwxtFV8RZx172X%2F%2BVMvCalEyxdK9GtcaOzn9Yl%2FD4YXHGcDF4pmqGYf1qxxJ71Twuv4mw4XyXh%2F4qfaFtCrLNZx4Yi%2F%2F"
//		"5pxW8%2FPIGGO8nvD07sITIGRjIMtimokBBFrjm3EwtiU7AiQAZfWoMkjHJcNhosv2EzHMyFgAi3bKjt2nBXXS7PLaMuhPTgm%2FgnKpRc6An%2FvsXo6EOGdLQfHU2rPdbkxBZfpA%3D%3D", ENDITEM, // TODO id, SAMLRequest : check format
//		"URL=https://idp.cevalogistics.com/adfs/portal/logo/logo.png?id=EEC3CF47FAFAD59C84F33C171B88CF72647BE58F226928DCC09E5D6FB3B7D80C", "Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqC7I8dps1RIAqQJhgXoNiNxe9ilUGW6FaAPT5TT7t9PspM2hy6HHU2%2BJJ%2BXlOcojG75qgsvdge%2FO8BAtpsFfZzMnhqQTZPN8tk0u5JXMhN5kWf5uL6ZiJvr6Zd8SskDeFTOLmgxyinZInawtRiEDTGUF0WUZ8W4Gl%2FzyYyPJ78o2cQJyorQV72E0CJnTNXtSMJBaPesYlriSDrDRN0g08go%2Beq8hJ5xQRuhEdKsUiCqA7xHSu%2BCk07fKlsr%2B7ygnbfcCVTIrTCAPEi%2BX32%2F45GVPw0i5N%2BqqszKn%2FuKkhUi%2BAS2dhY7A34P%2FqAk3O%2FuPlDTvkZSu67uGdMnExL78QdVg%2F8RZw3yy8ZwaI4s%2BA4DJW9GW%2BT9OS6jt0efdDlPat5v3Z%2FVXy4XJ5d0%2BbmnOTtrO8xoeXK13ZROK%2FmHrLR2r2sPIkSnET8un52Ex0cEdX%2BuuMkAb4GsnWmFV5iObpRVpjMn%2FHPdWke6HTT%2FY%2BaiTHKZWsdwejWvztfptYCMnJUXFlvnw9H3ZzzLIfcPd%2B%2FZ879o%2BRc%3D&RelayState=CUl0cWMF7erBpQsLxXaVZQ%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=gsveYKv5z1grQgfzO5qwLuEcs%2FOs3K4xax5FXCX3iNKxMh898v5fn8lqvw8zDdCkBohkg15Y3G4SApNErrx%2FqRFf9gbmqViZyzwsOD%2BEgqaeNIars2w9ugHwxtFV8RZx172X%2F%2BVMvCalEyxdK9GtcaOzn9Yl%2FD4YXHGcDF4pmqGYf1qxxJ71Twuv4mw4XyXh%2F4qfaFtCrLNZx4Yi%2F%2F"
//		"5pxW8%2FPIGGO8nvD07sITIGRjIMtimokBBFrjm3EwtiU7AiQAZfWoMkjHJcNhosv2EzHMyFgAi3bKjt2nBXXS7PLaMuhPTgm%2FgnKpRc6An%2FvsXo6EOGdLQfHU2rPdbkxBZfpA%3D%3D", ENDITEM,
//		"URL=https://idp.cevalogistics.com/adfs/portal/illustration/illustration.png?id=137068B663E06A3EB22CADA0A2B2586B2B41CECFF707C24067AE391967B21E03", "Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqC7I8dps1RIAqQJhgXoNiNxe9ilUGW6FaAPT5TT7t9PspM2hy6HHU2%2BJJ%2BXlOcojG75qgsvdge%2FO8BAtpsFfZzMnhqQTZPN8tk0u5JXMhN5kWf5uL6ZiJvr6Zd8SskDeFTOLmgxyinZInawtRiEDTGUF0WUZ8W4Gl%2FzyYyPJ78o2cQJyorQV72E0CJnTNXtSMJBaPesYlriSDrDRN0g08go%2Beq8hJ5xQRuhEdKsUiCqA7xHSu%2BCk07fKlsr%2B7ygnbfcCVTIrTCAPEi%2BX32%2F45GVPw0i5N%2BqqszKn%2FuKkhUi%2BAS2dhY7A34P%2FqAk3O%2FuPlDTvkZSu67uGdMnExL78QdVg%2F8RZw3yy8ZwaI4s%2BA4DJW9GW%2BT9OS6jt0efdDlPat5v3Z%2FVXy4XJ5d0%2BbmnOTtrO8xoeXK13ZROK%2FmHrLR2r2sPIkSnET8un52Ex0cEdX%2BuuMkAb4GsnWmFV5iObpRVpjMn%2FHPdWke6HTT%2FY%2BaiTHKZWsdwejWvztfptYCMnJUXFlvnw9H3ZzzLIfcPd%2B%2FZ879o%2BRc%3D&RelayState=CUl0cWMF7erBpQsLxXaVZQ%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=gsveYKv5z1grQgfzO5qwLuEcs%2FOs3K4xax5FXCX3iNKxMh898v5fn8lqvw8zDdCkBohkg15Y3G4SApNErrx%2FqRFf9gbmqViZyzwsOD%2BEgqaeNIars2w9ugHwxtFV8RZx172X%2F%2BVMvCalEyxdK9GtcaOzn9Yl%2FD4YXHGcDF4pmqGYf1qxxJ71Twuv4mw4XyXh%2F4qfaFtCrLNZx4Yi%2F%2F"
//		"5pxW8%2FPIGGO8nvD07sITIGRjIMtimokBBFrjm3EwtiU7AiQAZfWoMkjHJcNhosv2EzHMyFgAi3bKjt2nBXXS7PLaMuhPTgm%2FgnKpRc6An%2FvsXo6EOGdLQfHU2rPdbkxBZfpA%3D%3D", ENDITEM,
		LAST);

lr_output_message(lr_eval_string(">>>> state : {state}"));
lr_output_message(lr_eval_string(">>>> regionSessionId : {regionSessionId}"));
lr_output_message(lr_eval_string(">>>> client-request-id : {client-request-id}"));
lr_output_message(lr_eval_string(">>>> SAMLRequest : {SAMLRequest}"));
lr_output_message(lr_eval_string(">>>> RelayState : {RelayState}"));
lr_output_message(lr_eval_string(">>>> Signature : {Signature}"));

/*Correlation comment - Do not change!  Original value='PHNhbWxwOlJlc3BvbnNlIElEPSJfZTk2MzQxMDctMWI2MC00MGQ0LWIzOGUtMTVlOWU3Zjc1ZmFlIiBWZXJzaW9uPSIyLjAiIElzc3VlSW5zdGFudD0iMjAyMi0wMS0yMVQxNTozODoxOS42NzVaIiBEZXN0aW5hdGlvbj0iaHR0cHM6Ly9zYW1sLmNsb3VkLmNvbS9zYW1sL2FjcyIgQ29uc2VudD0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOmNvbnNlbnQ6dW5zcGVjaWZpZWQiIEluUmVzcG9uc2VUbz0iXzM4YmZlY2ZmLTgwODYtNGM0Yy1hMDIwLTAxZDkzYTk1NjcwNiIgeG1sbnM6c2FtbHA9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDpwcm90b2NvbCI' Name ='SAMLResponse' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=SAMLResponse",
		"LB=name=\"SAMLResponse\" value=\"",
		//"RB=+",
		//"RB=\" /><input type=\"hidden\" name=\"RelayState",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/ls/*",
		LAST);



/*Correlation comment - Do not change!  Original value='CUl0cWMF7erBpQsLxXaVZQ==' Name ='RelayState' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=RelayState",
		"LB=name=\"RelayState\" value=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/ls/*",
		LAST);
		
	web_add_header("Origin","https://cevalogistics.cloud.com");
	web_add_header("DNT","1");
	web_add_header("Sec-Fetch-Dest","empty");
	web_add_header("Sec-Fetch-Mode","cors");
	web_add_header("Sec-Fetch-Site","same-origin");
	web_add_header("Sec-Fetch-User","?1");
	web_add_header("Upgrade-Insecure-Requests","1");
	 	

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text=HTTP Error 400. The request has an invalid header name",
		LAST);

	web_reg_find("Fail=Found",
		"Search=All",
		"Text=X-MS-Forwarded-Status-Code: 500",
		LAST);

	web_submit_data("ls",
//		"Action=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqC7I8dps1RIAqQJhgXoNiNxe9ilUGW6FaAPT5TT7t9PspM2hy6HHU2%2BJJ%2BXlOcojG75qgsvdge%2FO8BAtpsFfZzMnhqQTZPN8tk0u5JXMhN5kWf5uL6ZiJvr6Zd8SskDeFTOLmgxyinZInawtRiEDTGUF0WUZ8W4Gl%2FzyYyPJ78o2cQJyorQV72E0CJnTNXtSMJBaPesYlriSDrDRN0g08go%2Beq8hJ5xQRuhEdKsUiCqA7xHSu%2BCk07fKlsr%2B7ygnbfcCVTIrTCAPEi%2BX32%2F45GVPw0i5N%2BqqszKn%2FuKkhUi%2BAS2dhY7A34P%2FqAk3O%2FuPlDTvkZSu67uGdMnExL78QdVg%2F8RZw3yy8ZwaI4s%2BA4DJW9GW%2BT9OS6jt0efdDlPat5v3Z%2FVXy4XJ5d0%2BbmnOTtrO8xoeXK13ZROK%2FmHrLR2r2sPIkSnET8un52Ex0cEdX%2BuuMkAb4GsnWmFV5iObpRVpjMn%2FHPdWke6HTT%2FY%2BaiTHKZWsdwejWvztfptYCMnJUXFlvnw9H3ZzzLIfcPd%2B%2FZ879o%2BRc%3D&RelayState=CUl0cWMF7erBpQsLxXaVZQ%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=gsveYKv5z1grQgfzO5qwLuEcs%2FOs3K4xax5FXCX3iNKxMh898v5fn8lqvw8zDdCkBohkg15Y3G4SApNErrx%2FqRFf9gbmqViZyzwsOD%2BEgqaeNIars2w9ugHwxtFV8RZx172X%2F%2BVMvCalEyxdK9GtcaOzn9Yl%2FD4YXHGcDF4pmqGYf1qxxJ71Twuv4mw4XyXh%2F4qfaFtCrLNZx4Yi%2F%2F5"
//		"pxW8%2FPIGGO8nvD07sITIGRjIMtimokBBFrjm3EwtiU7AiQAZfWoMkjHJcNhosv2EzHMyFgAi3bKjt2nBXXS7PLaMuhPTgm%2FgnKpRc6An%2FvsXo6EOGdLQfHU2rPdbkxBZfpA%3D%3D&client-request-id={client-request-id}", // TODO SAMLRequest et autres pareamères 
		"Action=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest={SAMLRequest}"
		"&RelayState={RelayState}"
		"&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256"
		"&Signature={Signature}"
		"&client-request-id={client-request-id}", 
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		
		/*
		"Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqC7I8dps1RIAqQJhgXoNiNxe9ilUGW6FaAPT5TT7t9PspM2hy6HHU2%2BJJ%2BXlOcojG75qgsvdge%2FO8BAtpsFfZzMnhqQTZPN8tk0u5JXMhN5kWf5uL6ZiJvr6Zd8SskDeFTOLmgxyinZInawtRiEDTGUF0WUZ8W4Gl%2FzyYyPJ78o2cQJyorQV72E0CJnTNXtSMJBaPesYlriSDrDRN0g08go%2Beq8hJ5xQRuhEdKsUiCqA7xHSu%2BCk07fKlsr%2B7ygnbfcCVTIrTCAPEi%2BX32%2F45GVPw0i5N%2BqqszKn%2FuKkhUi%2BAS2dhY7A34P%2FqAk3O%2FuPlDTvkZSu67uGdMnExL78QdVg%2F8RZw3yy8ZwaI4s%2BA4DJW9GW%2BT9OS6jt0efdDlPat5v3Z%2FVXy4XJ5d0%2BbmnOTtrO8xoeXK13ZROK%2FmHrLR2r2sPIkSnET8un52Ex0cEdX%2BuuMkAb4GsnWmFV5iObpRVpjMn%2FHPdWke6HTT%2FY%2BaiTHKZWsdwejWvztfptYCMnJUXFlvnw9H3ZzzLIfcPd%2B%2FZ879o%2BRc%3D"
		"&RelayState=CUl0cWMF7erBpQsLxXaVZQ%3D%3D"
		"&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256"
		"&Signature=gsveYKv5z1grQgfzO5qwLuEcs%2FOs3K4xax5FXCX3iNKxMh898v5fn8lqvw8zDdCkBohkg15Y3G4SApNErrx%2FqRFf9gbmqViZyzwsOD%2BEgqaeNIars2w9ugHwxtFV8RZx172X%2F%2BVMvCalEyxdK9GtcaOzn9Yl%2FD4YXHGcDF4pmqGYf1qxxJ71Twuv4mw4XyXh%2F4qfaFtCrLNZx4Yi%2F%2F"
		"5pxW8%2FPIGGO8nvD07sITIGRjIMtimokBBFrjm3EwtiU7AiQAZfWoMkjHJcNhosv2EzHMyFgAi3bKjt2nBXXS7PLaMuhPTgm%2FgnKpRc6An%2FvsXo6EOGdLQfHU2rPdbkxBZfpA%3D%3D",
		*/
		
		
		"Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest={SAMLRequest}"
		"&RelayState={RelayState}"
		"&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256"
		"&Signature={Signature}",
		
		
		"Snapshot=t205.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=UserName", "Value=CW1_LoadTesting_1009@logistics.corp", ENDITEM,
		"Name=Kmsi", "Value=true", ENDITEM,
		"Name=AuthMethod", "Value=FormsAuthentication", ENDITEM,
		"Name=Password", "Value=2JFIYF5xS62W", ENDITEM,
		LAST);


lr_output_message(lr_eval_string(">>>> SAMLResponse : {SAMLResponse}"));
lr_output_message(lr_eval_string(">>>> RelayState : {RelayState}"));


	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=accounts.cloud.com");

//	web_add_cookie("consistencyToken=dGlyNjJkdDhidT0wOi0xIzEzNjIwNTAxO284eHZ6amU0dDA9MzotMSMzODgxMjcxNQ%3D%3D; DOMAIN=accounts.cloud.com");

/*Correlation comment: Automatic rules - Do not change!  
Original value='dGlyNjJkdDhidT0wOi0xIzEzNjIwNTAxO284eHZ6amU0dDA9MzotMSMzODgxMjcxNTtrZWkxa2ltMjhhPTE6LTEjMjEwOTEzMDky' 
Name ='consistencyToken' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='consistencyToken'*/
	web_reg_save_param_regexp(
		"ParamName=consistencyToken",
		"RegExp=Citrix-ConsistencyToken:\\ (.*?)\\\r\\\n",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/callback*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='MDdkODhiOTUxNTZlYzQ4ZGI4NWNkMTg3OGEyOWJkYzVlNGI4MTQ4YmFhOTUxNDA1NGM4NjE2MjkwOGE2NGNmNC5zYW1sLnRUSS14RTBoWVVhVEhVb3hqWTQ2aWcudGlyNjJkdDhidT0wOi0xIzEzNjIwNTAxO284eHZ6amU0dDA9MzotMSMzODgxMjcxNTtrZWkxa2ltMjhhPTE6LTEjMjEwOTEzMDky' 
Name ='code' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='accounts-dsauthweb'*/
	web_reg_save_param_attrib(
		"ParamName=code",
		"TagName=input",
		"Extract=value",
		"Name=code",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=Yes",
		"RequestUrl=*/callback*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='FPhtPTOHw6KSTXmhMhdJ3rDZshWA7ivd5tQRvECR8XE.b12f494a60d0ccdd1b72ec4be5718e9e' 
Name ='session_state' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='sessionstate'*/
	web_reg_save_param_attrib(
		"ParamName=session_state",
		"TagName=input",
		"Extract=value",
		"Name=session_state",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=Yes",
		"RequestUrl=*/callback*",
		LAST);


/*
action='https://accounts-dsauthweb.cloud.com/oidc/rp'>
<input type='hidden' name='code' value='MDdkODhiOTUxNTZlYzQ4ZGI4NWNkMTg3OGEyOWJkYzVlNGI4MTQ4YmFhOTUxNDA1NGM4NjE2MjkwOGE2NGNmNC5zYW1sLnRUSS14RTBoWVVhVEhVb3hqWTQ2aWcudGlyNjJkdDhidT0wOi0xIzEzNjIwNTAxO284eHZ6amU0dDA9MzotMSMzODgxMjcxNTtrZWkxa2ltMjhhPTE6LTEjMjEwOTEzMDky' />
<input type='hidden' name='scope' value='openid profile email ctx_principal_aliases ctx_universal cip_credentials' />
<input type='hidden' name='state' value='CfDJ8A4yPTlIR4tPmKNUxzs0HUCnc-3Ab-KMh1ELV_JwEX75Xl7qrJNPxTMBdUVlBqqiA_dxOQct-dGIEaMq-mRWjuAq7DwAQg0hwAEfiWVeflGyeun1coXdsD0fbQF2sMsKSvqDEZtsgKCzxkWZ_x3hKQmeARBx32dosT7stdAeWRt-xGLLYN1xCV_N2pmxMsTJSWmA4aKHvRL8RJXHk2u8Ux1N-36XQwA1fC01CkwyFuOa5TrQeH72TUlm3BlhIi2Hw8nI1Vl6bXQGqu06qYBEnMuTAmA5nYdlIX02PR2lt8UX' />
<input type='hidden' name='session_state' value='FPhtPTOHw6KSTXmhMhdJ3rDZshWA7ivd5tQRvECR8XE.b12f494a60d0ccdd1b72ec4be5718e9e' />
*/

	web_reg_find("Fail=Found",
		"Search=All",
		"Text/IC=core/error",
		LAST);

	web_submit_data("acs",
		"Action=https://saml.cloud.com/saml/acs",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t206.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=SAMLResponse", "Value={SAMLResponse}", ENDITEM,
		"Name=RelayState", "Value={RelayState}", ENDITEM,
		LAST);


lr_output_message(lr_eval_string(">>>> consistencyToken : {consistencyToken}"));
lr_output_message(lr_eval_string(">>>> code : {code}"));
lr_output_message(lr_eval_string(">>>> session_state : {session_state}"));
lr_output_message(lr_eval_string(">>>> dsAuth_state : {dsAuth_state}"));


	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=accounts-dsauthweb.cloud.com");

	web_add_cookie("consistencyToken={consistencyToken}; DOMAIN=accounts-dsauthweb.cloud.com");

/*Correlation comment: Automatic rules - Do not change!  
Original value='HY_RboIwAEX_hedNBJnZfGOjYxrbTqk0EF6wJZYWrIMSsGb_PrLXk5Ocex8O07xyNg6MuMKRqDE5TYjkTWYPQR5vA0SRguSywjG4Y7pTmU0bNHNIDkHWfop_Pwo9FMMASeBDqcbZ9VGMWvTxYjPq9fvr8ZQkXnAk75qmqUiBSM8r8UPJwS8pG3jc3JHcKT73OVmOuF5OWwssktsRkXDC_mtQfeXrsj0teRS-QasNTKDF0WWCks17TZdTNZV-Y6AU4puA9Z4ACSUYMQEWRuruPDlD18xHhTG3flO4hVsypoer6Z95Xw5GjNV5wRo98AXTbeHqmrPC7W7O7x8' 
Name ='webviewResponseId' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='webviewResponseId'*/
	web_reg_save_param_attrib(
		"ParamName=webviewResponseId",
		"TagName=input",
		"Extract=value",
		"Name=webviewResponseId",
		LAST);

	web_submit_data("rp",
		"Action=https://accounts-dsauthweb.cloud.com/oidc/rp",
		"Method=POST",
		"TargetFrame=_self'/",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t207.inf",
		"Mode=HTML",
		ITEMDATA,
		//"Name=code", "Value=MDdkODhiOTUxNTZlYzQ4ZGI4NWNkMTg3OGEyOWJkYzVlNGI4MTQ4YmFhOTUxNDA1NGM4NjE2MjkwOGE2NGNmNC5zYW1sLnRUSS14RTBoWVVhVEhVb3hqWTQ2aWcu{consistencyToken}", ENDITEM, // TODO 
		"Name=code", "Value={code}", ENDITEM,
		"Name=scope", "Value=openid profile email ctx_principal_aliases ctx_universal cip_credentials", ENDITEM,
		"Name=state", "Value={state}", ENDITEM,
		"Name=session_state", "Value={session_state}", ENDITEM,
		LAST);

lr_output_message(lr_eval_string(">>>> webviewResponseId : {webviewResponseId}"));



	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=cevalogistics.cloud.com");

	web_add_cookie("consistencyToken={consistencyToken}; DOMAIN=cevalogistics.cloud.com");

	web_submit_data("Bounce",
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/Bounce",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://accounts-dsauthweb.cloud.com/",
		"Snapshot=t208.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_cx", "Value=", ENDITEM,
		"Name=webviewResponseId", "Value={webviewResponseId}", ENDITEM,
		"Name=_cs", "Value={CitrixXenApp_CsrfToken}", ENDITEM,
		LAST);

	web_url("StoreWeb_3", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://accounts-dsauthweb.cloud.com/", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=ctx-ws-assets.cloud.com");

	web_add_cookie("consistencyToken={consistencyToken}; DOMAIN=ctx-ws-assets.cloud.com");

	/*
	web_custom_request("envelope_6",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t210.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:21.776Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"ce421611abad474782c7ffbacd158433\",\"init\":true,\"started\":\"2022-01-21T15:38:21.776Z\",\"timestamp\":\"2022-01-21T15:38:21.776Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9102.7b9cffbd2d5d96f128b9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);
		*/

	web_url("StoreWeb_4", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/e86d2642f412b9493b14.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=Sso/Proxy?destination=https%3A%2F%2Fwsp.eu.iws.cloud.com%2Fuser-personalization%2FuserPreferences", ENDITEM, 
		"Url=Resources/Icon/L0NpdHJpeC9TdG9yZS9yZXNvdXJjZXMvdjIvVkZWNVMwbFJja3h4T1cxRlZFRnhXVk5EU1hSdmRqZGFiM0JWUFEtLS9pbWFnZQ--?size=128", ENDITEM, 
		"Url=Cas/RequestTicket", ENDITEM, 
		LAST);

/*	web_custom_request("ocsp", 
		"URL=http://oneocsp.microsoft.com/ocsp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0T0R0P0N0L0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x133\\x00#\\xBDeN@!'\\xB2=9o\\x00\\x00\\x00#\\xBDe", 
		EXTRARES, 
		"Url=https://cips-iws-prod-weu-cip-cdn.azureedge.net/iwsprodweucip-container/womkdccyy46o-c786167b-5dd1-509a-8071-272c84f57d92-logonLogo-l0nOmghv", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);
*/

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text=There was a failure with the mapped account",
		LAST);

	web_submit_data("ResumeForms", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/ResumeForms", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/xml", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=StateContext", "Value=", ENDITEM, 
		"Name=webviewResponseId", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8121.f4f028f849af0bfe6c35.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5063.287c9f9aca2f4de9e890.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/2834.7edff6e875abd5b233cc.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/6724.fad10bcfca5388e10c52.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/4933.04f88ddf4aadc0e3ecfa.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9128.aa95fb80d257f578d09e.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8784.af23dc3a89c4ee264b8a.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7032.9986872c4ff8582862a9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9253.d92f1f6d4d25151742f9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

/*
	web_custom_request("envelope_7",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t214.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:23.131Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"80198cab8d584c8389dee6a352f06d70\",\"init\":true,\"started\":\"2022-01-21T15:38:23.130Z\",\"timestamp\":\"2022-01-21T15:38:23.130Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("envelope_8",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t215.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:23.130Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"ce421611abad474782c7ffbacd158433\",\"init\":false,\"started\":\"2022-01-21T15:38:21.776Z\",\"timestamp\":\"2022-01-21T15:38:23.130Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8148.b5f3fb7bd6cbbb131adb.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1832.22bc2554e6fbc9748f04.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);
*/

	web_add_cookie("IS_WEBVIEW_LOGON=true; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text={\"unauthorized\": true}",
		LAST);

	web_submit_data("GetUserDetails_2", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/Authentication/GetUserDetails", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	/*
	web_custom_request("ocsp.digicert.com_6", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\\xBB\\x1F\\xF7&\\x19W\\xBF?\\x14\\xA03$\\xBFb\\xF9", 
		EXTRARES, 
		"Url=https://wsp.eu.iws.cloud.com/user-personalization/endpoints", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);
*/


	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text={\"unauthorized\": true}",
		LAST);

	web_custom_request("List", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/List", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"resourceDetails\":\"Full\",\"acceptsCachedResults\":true}", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/657.a1903cf1253b5d683a35.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/1937.b052b3869821645d36ef.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3369.a5944d6bc4cca698293d.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/4ba4759c3e98938156d7.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

/*
	web_custom_request("envelope_9",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t219.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:24.199Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"80198cab8d584c8389dee6a352f06d70\",\"init\":false,\"started\":\"2022-01-21T15:38:23.130Z\",\"timestamp\":\"2022-01-21T15:38:24.198Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("envelope_10",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t220.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:38:24.199Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"3fbcf61a798c4f3c9c6893005ded0813\",\"init\":true,\"started\":\"2022-01-21T15:38:24.198Z\",\"timestamp\":\"2022-01-21T15:38:24.198Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1cb825ff043ef7521574.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/f6ebd504e3b19c186177.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://radar.cedexis.com/1621860284/stub.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);
*/


	web_add_auto_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_auto_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

/*Correlation comment - Do not change!  Original value='YzRiNTlkNDQtYTg1MS00OGE3LWJlY2ItM2MxYmFiZjg3Y2Y1LkNhcmdvV2lzZSBMb2FkVGVzdA--' Name ='launchica' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=launchica",
		"LB=LaunchIca\\/",
		"RB=.ica",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text={\"unauthorized\": true}",
		LAST);

	web_custom_request("List_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/List", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"resourceDetails\":\"Full\",\"acceptsCachedResults\":false}", 
		LAST);

	web_custom_request("GetDetectionTicket", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionTicket", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("GetDetectionStatus", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionStatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"ticket\":\"CDTx7cCMdYa4GjiMvqVQ4!NPA--\"}", //TODO ?
		LAST);

	web_custom_request("GetDetectionStatus_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionStatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"ticket\":\"CDTx7cCMdYa4GjiMvqVQ4!NPA--\"}",  //TODO ?
		LAST);

	web_custom_request("GetDetectionStatus_3", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionStatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"ticket\":\"CDTx7cCMdYa4GjiMvqVQ4!NPA--\"}",  //TODO?
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5906.8e27f610f1130c115f99.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/AdaptiveCards.5e52cf9c5253006c933b.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7684.1732f234c9f1329a13ac.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8193.ea70d577ef1a6f85c11f.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://cips-iws-prod-weu-cip-cdn.azureedge.net/iwsprodweucip-container/womkdccyy46o-c786167b-5dd1-509a-8071-272c84f57d92-headerLogo-MZLnwCb6", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/oneDriveIntegration.5b4677125005f8f75a1a.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3729.f5e74750057a51e19ae2.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/2899.b327ab4615b4ddfd60a3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/1251.780d8383e3623c1c6754.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/wrikeIntegration.072f22b039b4bfcb7ffb.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/AppsWidget.9b441884b241ce420d4d.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/DesktopsWidget.555ee31ffba1d3580abb.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_revert_auto_header("Csrf-Token");

	web_revert_auto_header("X-Citrix-IsUsingHTTPS");

	web_revert_auto_header("X-Requested-With");

	/*
	web_custom_request("gts1d4", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t226.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		LAST);

	web_custom_request("gts1d4_2", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t227.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		LAST);

	web_custom_request("gts1d4_3", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		LAST);

	web_custom_request("pendo_ping", 
		"URL=https://api.feedback.us.pendo.io/widget/pendo_ping", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://cevalogistics.cloud.com/", 
		"Snapshot=t229.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("gts1d4_4", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t230.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x8C\\x04P\\xEASCIA\\xD6]\\x10e7nHc\\xD0Z\\x11\\xAD\\x04\\x14%\\xE2\\x18\\x0E\\xB2W\\x91\\x94*\\xE5\\xD4]\\x86\\x90\\x83\\xDES\\xB3\\xB8\\x92\\x02\\x11\\x00\\x85\\xD3\\xBD\\xB0\\xF6\\xCF\\x15\\x9D\t\\x00\\x00\\x00\\x00\\xE7\\xA7\\xC7", 
		EXTRARES, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642779512298&jzb="
		"eJzNU-9P2zAQ_V-8r2nTuD-S8A1BQfuwwigbbAhFF-caLBw7sp22EeJ_50KqjmkMadKQ-BCpfee7e_fu3c0D822N7IDJArWXq5YFLLdm49BmXlYUiWYTHsfpNOJRygO2lk56YzNZUNI4By6iVTrIx-NoMBkVySDNOR-kmCar1YhPizimgiCEabTvcyZJEo-SyYzwxioC7ryv3UEYClyDMqV0Xgo3FMo0xVCYKjyS3sptuKSueIV5-Cm8M0QsYLU1tWMHD8yoIvuNV3Y-XxyfZZeZW5g7_bOY8x8XlNC9-xuX_zfXIzEDS2peQv6ZIrpRKmC-_8O21zxvT08OU4DtdLGoqczKQoXPwbw5y-Prr208Xx6bxcW8W0brkYacRLPHYL-sCj28uajxx1zUjlP3819oSbcAL9c04wqUw4BtXCY3bq4hV0h1fqGu631iDYlvroy9dzUI_CJLS_lGnzbk8leyjP4OWvr22FQg9T6iQJcNlJ3gqLNvy2"
		"6zO4X2E7wQSYisBlnM6Yy8wooMcNQ_nb0WIz0YlKXF8plaIMAFFX0avROg0BKOG2iDDVbBFnWB7t6bzi5Ui3QG9Wej6NVg10l6V_WpuwEueyPh1qPVoPqYdOdgvUZa0E4CAp_3u0S7lqIz4s3t3t-Hey0IKoguFeRROIpCPuK8uym0jmbr4CG5cjjKyAnF-xxInCQvDkQZKN48kOnHPJCO947tOJ6-i1A8mTzePgE3iu1v", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642779512303&jzb="
		"eJztkl9r8jAUxr9LdtvaNq1N4504N3bj2OvgFcYoSZrOYNqUNFWL-N09VdluNtjNYBe7y3P-Pef8yMsBub6RaIKcZWKDPMSt2bXS5k5VEI7SBBNCxxGOKPXQVrXKGZurAjpizrCISurzOI78JCwyn3KMfSppVpYhHheEwEAmhOlqd-lJsoyEWZJCvLMaAmvnmnYSBEJumTZvqnVKtCOhTVeMhKmCmXJW7YMluMr_kgc3wdrAYh5qrGlaNDmgynCl5bQZVOihneTv70K2G2eai4485Ixj-qqOMIJZWbtnxh9gtbrTGiouAu1XmPf3d1PK2H68WDRgWFpWyXOSd4-crJ56Ml_emsW_OSTP9HK5hXl5DXVQ1QHFwWs2XD-A7Z0E4zgF629TxyGc8Zuo_ygyBrjmNeNaFh_AMMV_wL4Adv3gn0FLj68nx6w7wQ&type=track", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("pendo_ping_2", 
		"URL=https://api.feedback.us.pendo.io/widget/pendo_ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/", 
		"Snapshot=t231.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\"{\\\"account\\\":{\\\"id\\\":\\\"48870846\\\",\\\"cc_paidEntitlementCount\\\":6,\\\"cc_paidEntitlements\\\":\\\"aggregation,cas,mas,netscalergateway,wem,xendesktop\\\",\\\"cc_trialEntitlementCount\\\":1,\\\"cc_trialEntitlements\\\":\\\"itsm\\\",\\\"cc_accountType\\\":\\\"external\\\",\\\"cc_isPartner\\\":false,\\\"cc_cloudServices\\\":[],\\\"is_paying\\\":true},\\\"parentAccount\\\":{},\\\"date\\\":\\\"21/01/2022\\\",\\\"version\\\":\\\"2.121.0_prod\\\",\\\"user\\\":{\\\"id\\\""
		":\\\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\\\",\\\"isNative\\\":false,\\\"ws_iwsEnabled\\\":false,\\\"ws_storeFrontToWorkspaceMigrationGuideEnabled\\\":false,\\\"ws_onVanityDomain\\\":false,\\\"language\\\":\\\"en_US\\\",\\\"allowed_products\\\":[{\\\"id\\\":\\\"d1b13dbc-e278-40a2-9a2e-d39d30fc15c6\\\"}],\\\"email\\\":\\\"noemail+3ba2c1f9-b331-40d8-9b22-9e98ff025d77@pendo.io\\\",\\\"full_name\\\":\\\"No Name Provided3ba2c1f9-b331-40d8-9b22-9e98ff025d77\\\"},\\\"vendor\\\":{\\\"id\\\":\\\""
		"269a50cc-9ed4-4868-95a9-e1d53b16ef85\\\"}}\"}", 
		EXTRARES, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/guide.json/c51a876e-13e7-4d6e-78d0-f764775a736d?jzb="
		"eJyVUctu20AM_JftVY78aiz5VqRp0EOLAk6bQ1EY1C6tENmHsKT8QOF_D20HaoH60sMCwoyGMxz-NltikpQ_O7M0swamdrKpR81sNhnNx64a1c10Oqqxrjab8fS9WyxMYcDa1Ec5S-ZVtRhX81uF--wVeBbpeFmWFrfgU0ssZPnG-tS7G5tCeUeSaV-u1BOfsCnflc8poMoDCjgQMMsh1OmT_iMY8VcQ2qJZbsAzFmbHa9rxfYTGo875g_LJ_lNOUR7TU8ov3IHFL9Rm1af40JPDK6oUf0AkOXxMASgOjIfY9tCqrcG4_r4yx6GjYYO_erJ23QG5-ygkHgNGubv8enuNYxVD22Zsz9EKC1wEfRGFLXjMiuMODsUOQ7HH6JBfJHUXH60a_L9Gk6vkyYmEw0X6tsDjoTvvtRfMEfyFI_4GWSLqgd4qUPB84hXmLVnUUT9_aQsdZB38YejieDy-AiIC1vg&v=2.121.0_prod&ct="
		"1642779512348", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/rYjnSAsjlrJj7HNQkMXp-toWDRw@8FQpm_vBJ97Ik5YZuqSx1v2Xeik/6nIjNDAjySlbd8JMrNZ7HPT9jC0/Lj6jDTb-iUTGmvT1oRbP6qjy7O4.guide.js?sha256=_RoHEChwLzeo5ZFoq7U8KhqXIY9GokhnMzR71njsFLs", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/rYjnSAsjlrJj7HNQkMXp-toWDRw@8FQpm_vBJ97Ik5YZuqSx1v2Xeik/6nIjNDAjySlbd8JMrNZ7HPT9jC0/fTwXRT14Yzk704tbyod1gU2cyOc.guide.css?sha256=A_xDenKblDFGnai182m7yl1EHLlQli-dBn6fL7D2-BA", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("gts1c3", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t232.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10`>\\xF2\\xCE\\x95\\xF4\\x07\\xCA\n\\x00\\x00\\x00\\x01+\\x7F\\xB2", 
		EXTRARES, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/kFMPm1nfiIwqaF4vFsEKVWLHJoA/8bpP3QM2WAzPr389JUM9EKXgrGM/s3FsTrO5-ja2v-fPqV76qtYMiV4.dom.json?sha256=B8t6FzrcR-TtxpbLjpSon2a4NqSAiE-zIUzNnWwcNyU", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://pendo-static-6508245000126464.storage.googleapis.com/guide.5707702298738688.1594312707911.css", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/PNBNVZzd2ko9ogS_ocQCR2KYaoQ@8FQpm_vBJ97Ik5YZuqSx1v2Xeik/0of7absJyE9v90ROrQ9jHTiHLaw/myj5pASUnJTOWVGtMdLG0tQMB1Q.dom.json?sha256=pJQLCFoNCabVeHGHzSMo2aftKLWVbkaAdy3WxWJAq40", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("gts1c3_2", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t233.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xC7.y\\x8A\\xDD\\xFFa4\\xB3\\xBA\\xEDGB\\xB8\\xBB\\xC6\\xC0$\\x07c\\x04\\x14\\x8At\\x7F\\xAF\\x85\\xCD\\xEE\\x95\\xCD=\\x9C\\xD0\\xE2F\\x14\\xF3q5\\x1D'\\x02\\x10`>\\xF2\\xCE\\x95\\xF4\\x07\\xCA\n\\x00\\x00\\x00\\x01+\\x7F\\xB2", 
		EXTRARES, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/rYjnSAsjlrJj7HNQkMXp-toWDRw@8FQpm_vBJ97Ik5YZuqSx1v2Xeik/6nIjNDAjySlbd8JMrNZ7HPT9jC0/8gMRB6iJt1YHwppsW0ngSPM30wQ.dom.json?sha256=v_S71ojeVV0JsUd-d9Uw7l8dNxGVP858NJZwqwZXjfM", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/8FQpm_vBJ97Ik5YZuqSx1v2Xeik/guide-media-3b40579c-7a85-41b3-b2dc-d0000da35ae1", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/UZFKhRQRCrtmt99QVpLNe4lKCFE/gSNJdk3QkTZgsHbXYmVZy2FGj58/PexRE6e21fwPBRKE837aSh4RJtM.dom.json?sha256=JGS-GGgXDGvJkXUFz-f3i_u3Ly4LIuFcpSKLjcjmS3U", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/8FQpm_vBJ97Ik5YZuqSx1v2Xeik/bL95a0fUjvcQnk70iHB_GLuxa9E/8yHTQjKo7L32ICfb2bJiOWnXsWA.dom.json?sha256=W5DeSvsuzyekMGPsJ699d0F5fvUI0WKZsoPhzGLA0u4", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/xGf-CBA3tOiXaqERWJPI03KA3hw/HAJbofzUUne03i4Y0uNY_zfecjM/-S4P9usIekZcQzBHZgoJPjHROMI.dom.json?sha256=OCd5tdgox792fkCJjxzJAVb3xbZEGCeL60VNjFZjoRM", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/UZFKhRQRCrtmt99QVpLNe4lKCFE/gSNJdk3QkTZgsHbXYmVZy2FGj58/2jmj7l5rSw0yVb_vlWAYkK_YBwk.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/3pArdKq4RCpmKMT3UTsVMAyNrtQ/MD2XAt3ktM5-1FC506UUD8TGenA/0AC5oinWJdKz0J1YpkxLltr4bwA.dom.json?sha256=7G5Tx0e5SpMkd756PUWae3pylmUUxxY09M7m-yNhpIc", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-content.customer.pendo.io/guide-content/ONeDuuYdOh5peD2olWGOrCqOOYQ/KmPjcvpFt2tLD1LxswUialCrxAU/On3-iEQKZo7qsSlcxl8h729TG7k.dom.json?sha256=HJZ-8Ion0PpcRr9NwsVk3aNIttUewT-a6XRyglYrYSY", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("ocsp_2", 
		"URL=http://oneocsp.microsoft.com/ocsp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t234.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0T0R0P0N0L0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x133\\x00%,\\xC4q\\xFB\\xB0\\x15\\xD8\r\\xBA\\x9B\\x00\\x00\\x00%,\\xC4", 
		LAST);
*/

/*
	web_custom_request("messages", 
		"URL=https://citrixanalyticseheu-alias.servicebus.windows.net/ehgeneral/publishers/womkdccyy46o.ath-sub.3ba2c1f9-b331-40d8-9b22-9e98ff025d77/messages?api-version=2014-01", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://cevalogistics.cloud.com/", 
		"Snapshot=t235.inf", 
		"Mode=HTML", 
		LAST);
*/

/*
	web_custom_request("ocsp_3", 
		"URL=http://oneocsp.microsoft.com/ocsp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t236.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0T0R0P0N0L0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x133\\x00%,\\xC4q\\xFB\\xB0\\x15\\xD8\r\\xBA\\x9B\\x00\\x00\\x00%,\\xC4", 
		LAST);

	web_custom_request("messages_2", 
		"URL=https://citrixanalyticseheu-alias.servicebus.windows.net/ehgeneral/publishers/womkdccyy46o.ath-sub.3ba2c1f9-b331-40d8-9b22-9e98ff025d77/messages?api-version=2014-01", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/xml", 
		"Referer=https://cevalogistics.cloud.com/", 
		"Snapshot=t237.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"type\":\"ACTIVITY\",\"id\":\"59f47575-7902-402d-8b0a-20ac69b14c6b\",\"$schema\":\"https://cas.citrix.com/schemas/event.json\",\"ver\":1,\"st\":\"2022-01-21T15:38:42.188Z\",\"prod\":\"IWS.WorkspaceUI\",\"prodVer\":\"3a28a4950f\",\"tenant\":{\"id\":\"womkdccyy46o\"},\"payload\":{\"type\":\"ACTIVITY\",\"verb\":\"ACCESS\",\"noun\":\"FEED\",\"detail\":{\"result\":\"TIMEOUT\",\"duration\":10000},\"deviceInfo\":{\"os\":{\"name\":\"Windows\",\"version\":\"10\",\"architecture\":\"64\"},\"browser\":"
		"{\"name\":\"Firefox\",\"version\":\"96.0\"},\"timezone\":\"GMT+1\",\"locale\":\"en\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}},\"user\":{\"userId\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"userDisplayName\":\"ad:womkdccyy46o/fd54bd69-ac89-4be6-ba8f-27bd9c151fe9\"},\"ip\":\"\"}", 
		LAST);
*/
	lr_think_time(9);

	lr_start_transaction("LauchCWCtrx");

	/* TODO : Migth be nessecary ?
	web_custom_request("messages_3", 
		"URL=https://citrixanalyticseheu-alias.servicebus.windows.net/ehgeneral/publishers/womkdccyy46o.ath-sub.3ba2c1f9-b331-40d8-9b22-9e98ff025d77/messages?api-version=2014-01", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/xml", 
		"Referer=https://cevalogistics.cloud.com/", 
		"Snapshot=t238.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"type\":\"start\",\"id\":\"5cfa0d9e-fdef-43f9-82e8-714b8beeda6d\",\"$schema\":\"https://cas.citrix.com/schemas/event.json\",\"ver\":1,\"st\":\"2022-01-21T15:38:52.520Z\",\"prod\":\"IWS.WorkspaceUI\",\"prodVer\":\"3a28a4950f\",\"tenant\":{\"id\":\"womkdccyy46o\"},\"payload\":{\"sessionLaunch\":\"yes\",\"transactionId\":\"5a9cbeee-d900-45f3-aa53-aef9d2d09d90\",\"component\":\"WSUI\",\"userId\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"time\":\"2022-01-21T15:38:52.520Z\",\"type\":\"start\",\""
		"message\":\"Resource launch started\",\"code\":\"WSUI_Resource_Launch_Started\",\"destinationComponent\":\"WSP\",\"resourceId\":\"c4b59d44-a851-48a7-becb-3c1babf87cf5.CargoWise LoadTest\",\"deviceInfo\":{\"os\":{\"name\":\"Windows\",\"version\":\"10\",\"architecture\":\"64\"},\"browser\":{\"name\":\"Firefox\",\"version\":\"96.0\"},\"timezone\":\"GMT+1\",\"locale\":\"en\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}},\"user\":{\"userId\":\""
		"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"userDisplayName\":\"ad:womkdccyy46o/fd54bd69-ac89-4be6-ba8f-27bd9c151fe9\"},\"ip\":\"\"}", 
		LAST);
*/


	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

// Generate epoch timestamp
lr_save_timestamp("launch_id", LAST);
lr_output_message("LaunchIca : %s", lr_eval_string("{launchIca}"));

web_submit_data("GetLaunchStatus", //"YzRiNTlkNDQtYTg1MS00OGE3LWJlY2ItM2MxYmFiZjg3Y2Y1LkNhcmdvV2lzZSBMb2FkVGVzdA--",
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/GetLaunchStatus/{launchica}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/",
		"Snapshot=t239.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=createFileFetchTicket", "Value=false", ENDITEM,
		LAST);

/* TODO : migth be necessary
	web_custom_request("messages_4", 
		"URL=https://citrixanalyticseheu-alias.servicebus.windows.net/ehgeneral/publishers/womkdccyy46o.ath-sub.3ba2c1f9-b331-40d8-9b22-9e98ff025d77/messages?api-version=2014-01", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/xml", 
		"Referer=https://cevalogistics.cloud.com/", 
		"Snapshot=t240.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"type\":\"end\",\"id\":\"49286f75-e8a5-4d66-9c53-d95e6616ab9d\",\"$schema\":\"https://cas.citrix.com/schemas/event.json\",\"ver\":1,\"st\":\"2022-01-21T15:38:53.871Z\",\"prod\":\"IWS.WorkspaceUI\",\"prodVer\":\"3a28a4950f\",\"tenant\":{\"id\":\"womkdccyy46o\"},\"payload\":{\"sessionLaunch\":\"yes\",\"transactionId\":\"5a9cbeee-d900-45f3-aa53-aef9d2d09d90\",\"component\":\"WSUI\",\"userId\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"time\":\"2022-01-21T15:38:53.870Z\",\"type\":\"end\",\""
		"message\":\"Resource launch ended\",\"code\":\"WSUI_Resource_Launch_Ended\",\"destinationComponent\":\"WSP\",\"resourceId\":\"c4b59d44-a851-48a7-becb-3c1babf87cf5.CargoWise LoadTest\",\"deviceInfo\":{\"os\":{\"name\":\"Windows\",\"version\":\"10\",\"architecture\":\"64\"},\"browser\":{\"name\":\"Firefox\",\"version\":\"96.0\"},\"timezone\":\"GMT+1\",\"locale\":\"en\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}},\"user\":{\"userId\":\""
		"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"userDisplayName\":\"ad:womkdccyy46o/fd54bd69-ac89-4be6-ba8f-27bd9c151fe9\"},\"ip\":\"\"}", 
		LAST);
*/

	ctrx_nfuse_connect("https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/LaunchIca/{launchica}.ica?CsrfToken={CitrixXenApp_CsrfToken}&IsUsingHttps=Yes&launchId={launchIca}", CTRX_LAST); 

	lr_think_time(12);

	/*
	web_custom_request("20220113185450", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/bac49199-862a-4cbe-bea3-9bd40d9b5a43/main/Firefox/96.0.1/release/20220113185450?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t241.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"main\",\"id\":\"bac49199-862a-4cbe-bea3-9bd40d9b5a43\",\"creationDate\":\"2022-01-21T15:37:48.478Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"name\":\"Firefox\",\"version\":\"96.0.1\",\"displayVersion\":\"96.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":35,\"start\":6,\"main\":84,\"selectProfile\""
		":87,\"afterProfileLocked\":87,\"startupCrashDetectionBegin\":177,\"startupCrashDetectionEnd\":30899,\"firstPaint\":429,\"firstPaint2\":497,\"sessionRestoreInit\":215,\"sessionRestored\":528,\"createTopLevelWindow\":120,\"quitApplication\":35159,\"profileBeforeChange\":35229,\"blankWindowShown\":176,\"AMI_startup_begin\":189,\"XPI_startup_begin\":190,\"XPI_bootstrap_addons_begin\":193,\"XPI_bootstrap_addons_end\":204,\"XPI_startup_end\":205,\"AMI_startup_end\":206,\"XPI_finalUIStartup\":216,\""
		"sessionRestoreInitialized\":217,\"delayedStartupStarted\":499,\"delayedStartupFinished\":517,\"startupInterrupted\":0,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":1861024,\"startupWindowVisibleWriteBytes\":70589,\"startupSessionRestoreReadBytes\":2062536,\"startupSessionRestoreWriteBytes\":82853,\"activeTicks\":6},\"processes\":{\"parent\":{\"scalars\":{\"pwmgr.potentially_breached_passwords\":0,\"browser.startup.abouthome_cache_result\":7,\"timestamps.about_home_topsites_first_paint\""
		":785,\"browser.engagement.max_concurrent_tab_pinned_count\":0,\"startup.profile_selection_reason\":\"default\",\"privacy.dfpi_rollout_enabledByDefault\":2,\"dom.contentprocess.os_priority_lowered\":1,\"formautofill.availability\":false,\"browser.engagement.max_concurrent_tab_count\":2,\"a11y.backplate\":true,\"datasanitization.session_permission_exceptions\":0,\"networking.http3_enabled\":true,\"dom.contentprocess.os_priority_change_considered\":18,\"browser.engagement.unfiltered_uri_count\":2,\""
		"contentblocking.fingerprinting_blocking_enabled\":true,\"gfx.os_compositor\":false,\"browser.engagement.tab_open_event_count\":1,\"browser.engagement.session_time_excluding_suspend\":35314,\"datasanitization.network_cookie_lifetimePolicy\":0,\"contentblocking.cryptomining_blocking_enabled\":true,\"browser.engagement.active_ticks\":6,\"startup.is_cold\":false,\"policies.count\":1,\"browser.engagement.max_concurrent_window_count\":1,\"contentblocking.category\":0,\""
		"browser.engagement.session_time_including_suspend\":35314,\"security.https_only_mode_enabled_pbm\":0,\"blocklist.mlbf_enabled\":true,\"os.environment.is_taskbar_pinned\":true,\"networking.nss_initialization\":4,\"content.process_max_precise\":5,\"security.https_only_mode_enabled\":0,\"dom.contentprocess.os_priority_raised\":4,\"os.environment.is_admin_without_uac\":true,\"networking.loading_certs_task\":16,\"timestamps.first_paint_two\":496,\"os.environment.launch_method\":\"Taskbar\",\""
		"security.global_privacy_control_enabled\":0,\"widget.dark_mode\":false,\"timestamps.first_paint\":428,\"startup.seconds_since_last_os_restart\":82863},\"keyedScalars\":{\"telemetry.event_counts\":{\"doh#state#shutdown\":1,\"upgrade_dialog#trigger#reason\":1,\"doh#state#rollback\":1},\"browser.ui.interaction.app_menu\":{\"appMenu-passwords-button\":1},\"browser.ui.interaction.tabs_bar\":{\"cmd-closeWindow\":1,\"tab-close-button\":1},\"a11y.theme\":{\"default\":false},\""
		"browser.engagement.sessionrestore_interstitial\":{\"deferred_restore\":1},\"browser.ui.toolbar_widgets\":{\"bookmark_pinned_pageaction-urlbar\":true,\"import-button_pinned_bookmarks-bar\":true,\"save-to-pocket-button_pinned_nav-bar-end\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"stop-reload-button_pinned_nav-bar-start\":true,\"downloads-button_pinned_nav-bar-end\":true,\"personal-bookmarks_pinned_bookmarks-bar\":true,\"menu-toolbar_pinned_off\":true,\""
		"tabbrowser-tabs_pinned_tabs-bar\":true,\"titlebar_pinned_off\":true,\"alltabs-button_pinned_tabs-bar\":true,\"new-tab-button_pinned_tabs-bar\":true,\"forward-button_pinned_nav-bar-start\":true,\"menubar-items_pinned_menu-bar\":true,\"back-button_pinned_nav-bar-start\":true,\"bookmarks-bar_pinned_newtab\":true},\"contextual.services.topsites.impression\":{\"newtab_1\":1,\"newtab_2\":1},\"browser.ui.interaction.nav_bar\":{\"PanelUI-menu-button\":1}}},\"content\":{\"histograms\":{\""
		"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4,\"range\":[1,10000],\"values\":{\"0\":1,\"4\":1,\"5\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":17,\"range\":[1,10000],\"values\":{\"4\":0,\"5\":1,\"12\":1,\"14\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":228,\"range\":[1,200],\"values\":{\"9\":0,\"10\":2,\"12\":1,\"46\":4,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\""
		"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":17,\"range\":[1,10000],\"values\":{\"4\":0,\"5\":1,\"12\":1,\"14\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4,\"range\":[1,1000],\"values\":{\"0\":1,\"4\":1,\"5\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum"
		"\":610,\"range\":[1,150000],\"values\":{\"82\":0,\"104\":1,\"427\":1,\"540\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"2\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":9,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\""
		"bucket_count\":50,\"histogram_type\":1,\"sum\":175,\"range\":[1,100],\"values\":{\"79\":0,\"81\":1,\"92\":1,\"94\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12,\"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"8\":1,\"9\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":184,\"range\":[1,2000],\"values\":{\"13\":0,\"15\":2,\"17\":1,\"19\":1,\"113\":1,\"130\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,"
		"\"range\":[1,200],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"5\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":218,\"range\":[1,50000],\"values\":{\"34\":0,\"37\":1,\"174\":1,\"192\":0}},\"GC_WAIT_FOR_IDLE_MS\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":0,\"range\":[1,120000],\"values\":{\"0\":2,\"1\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":634440,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":57,\"23\":69,\"41\":4,\"50\":4"
		",\"61\":25,\"74\":36,\"90\":4,\"109\":11,\"132\":27,\"160\":2,\"194\":25,\"235\":1,\"284\":5,\"344\":4,\"416\":8,\"503\":11,\"609\":31,\"737\":10,\"892\":39,\"1080\":5,\"1915\":2,\"2318\":6,\"2805\":6,\"3395\":2,\"4109\":2,\"4973\":2,\"6019\":2,\"8815\":2,\"15625\":5,\"18910\":4,\"33521\":4,\"49098\":2,\"59421\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":16279,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":126,\"3\":127,\"5\":13,\"8\":2,\"12\":7,\"19\":41,\"30"
		"\":56,\"47\":6,\"73\":8,\"113\":7,\"176\":13,\"274\":2,\"426\":2,\"662\":7,\"1029\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":6659,\"range\":[1,150000000],\"values\":{\"0\":71,\"1\":64,\"2\":79,\"3\":16,\"4\":23,\"5\":10,\"6\":10,\"7\":17,\"8\":19,\"10\":21,\"12\":16,\"14\":9,\"17\":8,\"20\":8,\"24\":9,\"29\":8,\"35\":1,\"42\":9,\"50\":5,\"60\":5,\"72\":2,\"87\":2,\"126\":1,\"316\":1,\"380\":1,\"793\":1,\"1146\":1,\"1378\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\""
		"bucket_count\":51,\"histogram_type\":5,\"sum\":146,\"range\":[1,50],\"values\":{\"0\":50,\"2\":73,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":12,\"1\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":11687,\"range\":[1,10000],\"values\":{\"0\":36,\"1\":5,\"2\":8,\"3\":26,\"4\":36,\"5\":33,\"6\":48,\"7\":33,\"8\":101,\"10\":103,\"12\":97,\"14\":173,\"17\":175,\"20\":63,\"24\":8,\""
		"29\":6,\"34\":1,\"57\":2,\"68\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":5358,\"range\":[1,10000],\"values\":{\"0\":23,\"1\":1,\"2\":2,\"3\":6,\"4\":13,\"5\":15,\"6\":21,\"7\":12,\"8\":38,\"10\":52,\"12\":46,\"14\":42,\"17\":2,\"20\":10,\"24\":2,\"29\":7,\"34\":3,\"40\":5,\"48\":4,\"57\":2,\"68\":1,\"81\":1,\"96\":2,\"114\":2,\"135\":4,\"190\":3,\"226\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1"
		",2],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":8,\"1\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":30,\"range\":[1,1000],\"values\":{\"0\":99,\"1\":11,\"2\":6,\"3\":1,\"4\":1,\"5\":0}},\"TIME_TO_NON_BLANK_PAINT_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":199,\"range\":[1,100000],\"values\":{\"41\":0,\"45\":1,\"139\":1,\"154\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":280,\"range\":[1,100000],\"values\":{\"55\":0,\"61\":1,\"211\":1,\"234\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":107,\"range\":[1,5000],\"values\":{\"2\":0,\"3\":1,\"4\":2,\"8\":1,\"9\":3,\"10\":1,\"11\":2,\"13\":1,\"16\":1,\"17\":0}},\""
		"INPUT_EVENT_QUEUED_KEYBOARD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":118,\"range\":[1,5000],\"values\":{\"1\":0,\"2\":2,\"4\":2,\"5\":2,\"8\":1,\"12\":1,\"14\":1,\"15\":2,\"16\":2,\"17\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":71,\"range\":[1,50000],\"values\":{\"0\":0,\"1\":1,\"9\":1,\"23\":1,\"37\":1,\"41\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":105,\"range\":[1,50000],\"values\":{\"2\":0,\"3"
		"\":1,\"23\":1,\"31\":1,\"45\":1,\"50\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":179,\"range\":[1,50000],\"values\":{\"4\":0,\"5\":1,\"50\":2,\"67\":1,\"74\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":283,\"range\":[1,50000],\"values\":{\"19\":0,\"21\":1,\"50\":1,\"67\":1,\"131\":1,\"144\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":297,\"range\":[1,50000],"
		"\"values\":{\"19\":0,\"21\":1,\"55\":1,\"67\":1,\"144\":1,\"158\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":226,\"range\":[1,50000],\"values\":{\"19\":0,\"21\":1,\"55\":1,\"144\":1,\"158\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":230,\"range\":[1,50000],\"values\":{\"19\":0,\"21\":1,\"55\":1,\"144\":1,\"158\":0}},\"PERF_REQUEST_ANIMATION_CALLBACK_NON_PAGELOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\""
		"sum\":0,\"range\":[1,5000],\"values\":{\"0\":2,\"1\":0}},\"APZ_ZOOM_ACTIVITY\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":4,\"1\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":76,\"range\":[1,50],\"values\":{\"0\":30,\"2\":38,\"3\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_StopOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_DOCUMENT\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"keyedHistograms\":{},\"scalars\":{\"script.preloader.mainthread_recompile\":12,\"networking.http3_enabled\":true,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.keyed_accumulations"
		"\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{\"telemetry.event_counts\":{\"pwmgr#reauthenticate#os_auth\":1,\"pwmgr#select#existing_login\":1,\"pwmgr#open_management#mainmenu\":1,\"pwmgr#edit#existing_login\":1,\"pwmgr#save#existing_login\":1}}},\"extension\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"2\":0}},\"GC_MS\":{\"bucket_count\""
		":50,\"histogram_type\":0,\"sum\":12,\"range\":[1,10000],\"values\":{\"2\":0,\"3\":1,\"8\":1,\"10\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":343,\"range\":[1,200],\"values\":{\"43\":0,\"46\":7,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":"
		"{\"bucket_count\":50,\"histogram_type\":0,\"sum\":11,\"range\":[1,10000],\"values\":{\"2\":0,\"3\":1,\"8\":1,\"10\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"0\":1,\"2\":1,\"3\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":576,\"range\":[1,150000],\"values\":{\"82\":0,\"104\":1,\"427\":1,\"540\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":"
		"{\"0\":2,\"1\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":1,\"range\":[1,100],\"values\":{\"0\":4,\"1\":1,\"2\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":176,\"range\":[1,100],\"values\":{\"77\":0,\"79\":1,\"96\":1,\"98\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14,\""
		"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"10\":1,\"11\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":81,\"range\":[1,2000],\"values\":{\"13\":0,\"15\":4,\"17\":1,\"19\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\":[1,200],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"5\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":214,\"range\":[1,50000],\"values\":{\"14\":0,\"15\":1,\"192\":1,\"211\":0}},\""
		"GC_WAIT_FOR_IDLE_MS\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":0,\"range\":[1,120000],\"values\":{\"0\":1,\"1\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1165112,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":143,\"23\":18,\"34\":83,\"50\":28,\"61\":6,\"74\":8,\"90\":1,\"109\":14,\"132\":6,\"160\":3,\"194\":24,\"235\":1,\"284\":10,\"344\":78,\"416\":13,\"503\":8,\"609\":28,\"737\":18,\"892\":36,\"1080\":7,\"1307\":35,\"1582\":13,\"1915\":7,\"2318\""
		":7,\"2805\":9,\"3395\":5,\"4109\":8,\"4973\":6,\"6019\":4,\"7284\":6,\"8815\":6,\"10668\":5,\"12911\":1,\"15625\":3,\"18910\":1,\"22886\":1,\"27698\":1,\"40569\":2,\"330972\":1,\"400557\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":35837,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":161,\"3\":139,\"5\":10,\"8\":21,\"12\":118,\"19\":68,\"30\":22,\"47\":39,\"73\":13,\"113\":17,\"176\":14,\"274\":11,\"426\":10,\"662\":6,\"1029\":3,\"1599\":1,\"2485\":1,\"3862\":0}"
		"},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12549,\"range\":[1,150000000],\"values\":{\"0\":187,\"1\":66,\"2\":24,\"3\":16,\"4\":16,\"5\":18,\"6\":28,\"7\":23,\"8\":45,\"10\":31,\"12\":23,\"14\":19,\"17\":27,\"20\":22,\"24\":19,\"29\":16,\"35\":13,\"42\":14,\"50\":13,\"60\":1,\"72\":5,\"87\":8,\"105\":4,\"126\":4,\"219\":3,\"263\":5,\"316\":1,\"380\":1,\"660\":1,\"793\":1,\"953\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":44,\""
		"range\":[1,50],\"values\":{\"0\":16,\"2\":22,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":6,\"1\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\""
		"histogram_type\":4,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":12,\"1\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,10000],\"values\":{\"0\":4,\"2\":1,\"3\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":15,\"1\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":255,\"range\":[1,50000],\"values\":{\"11\":0,\"12\":1,\"14\":1,\"17\":1,\"67\":2,\"74"
		"\":1,\"81\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1480,\"range\":[1,50000],\"values\":{\"174\":0,\"192\":1,\"211\":2,\"255\":1,\"281\":1,\"309\":1,\"340\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1555,\"range\":[1,50000],\"values\":{\"192\":0,\"211\":3,\"255\":1,\"281\":1,\"309\":1,\"340\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1561,\"range\":"
		"[1,50000],\"values\":{\"192\":0,\"211\":3,\"255\":1,\"281\":1,\"309\":1,\"340\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1608,\"range\":[1,50000],\"values\":{\"192\":0,\"211\":3,\"255\":1,\"309\":2,\"340\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1608,\"range\":[1,50000],\"values\":{\"192\":0,\"211\":3,\"255\":1,\"309\":2,\"340\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\""
		"sum\":1609,\"range\":[1,50000],\"values\":{\"192\":0,\"211\":3,\"255\":1,\"309\":2,\"340\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":61,\"1\":0}},\"USE_COUNTER2_CONSOLE_WARN_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_WINDOW_CHROME_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,"
		"\"2\":0}}},\"keyedHistograms\":{},\"scalars\":{\"script.preloader.mainthread_recompile\":4,\"networking.http3_enabled\":true,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"dynamic\":{\"scalars\":{},\"keyedScalars\":{}},\"gpu\":{\"histograms\":{\"COMPOSITE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\""
		":438,\"range\":[1,1000],\"values\":{\"0\":27,\"1\":54,\"2\":49,\"3\":27,\"4\":5,\"5\":4,\"6\":1,\"7\":2,\"8\":2,\"9\":1,\"11\":1,\"12\":1,\"18\":1,\"20\":1,\"26\":1,\"33\":1,\"37\":0}},\"GPU_PROCESS_INITIALIZATION_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":80,\"range\":[1,64000],\"values\":{\"68\":0,\"75\":1,\"83\":0}},\"KEYPRESS_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":56,\"range\":[1,200000],\"values\":{\"5\":0,\"6\":1,\"8\":1,\"36\":1,\"46\":0}},\""
		"MOUSEUP_FOLLOWED_BY_CLICK_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":120,\"range\":[1,200000],\"values\":{\"6\":0,\"8\":1,\"13\":2,\"36\":2,\"46\":0}},\"CONTENT_FULL_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":100,\"range\":[1,1000],\"values\":{\"0\":58,\"1\":51,\"2\":3,\"3\":3,\"4\":2,\"11\":1,\"14\":1,\"16\":0}},\"CONTENT_FRAME_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10389,\"range\":[1,5000],\"values\":{\"8\":0,\"9\":3,\"11\":2,\"13\""
		":3,\"15\":4,\"18\":16,\"21\":4,\"25\":3,\"29\":1,\"34\":2,\"40\":1,\"47\":2,\"75\":4,\"88\":6,\"103\":47,\"120\":14,\"140\":3,\"224\":3,\"306\":1,\"357\":0}},\"CONTENT_FRAME_TIME_VSYNC\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":204144,\"range\":[8,792],\"values\":{\"0\":0,\"8\":1,\"16\":2,\"24\":4,\"32\":1,\"112\":4,\"120\":22,\"128\":20,\"136\":16,\"144\":3,\"160\":1,\"184\":1,\"216\":1,\"232\":1,\"256\":1,\"312\":1,\"424\":1,\"792\":1}}},\"keyedHistograms\":{},\"scalars\":{\""
		"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"socket\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}}},\"histograms\":{\"A11Y_INSTANTIATED_FLAG\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"CHILD_PROCESS_LAUNCH_MS\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":42,\"range\":[1,64000],\"values\":{\"0\":0,\"1\":1,\"7\":1,\"8\":3,\"10\":1,\"11\":0}},\"CONTENT_PROCESS_LAUNCH_MAINTHREAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,64000],\"values\":{\"0\":3,\"1\":0}},\"CONTENT_PROCESS_LAUNCH_TOTAL_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":26,\"range\":[1,64000],\"values\":{\"7\":0,\"8\":1,\"9\":2,\"10\":0}},\"CONTENT_PROCESS_SYNC_LAUNCH_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":25,\"range\":[1,64000],\"values\":{\"11\":0,\"12\":1,\"13\":1,\"14\":0}},\"CONTENT_PROCESS_LAUNCH_IS_SYNC\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":3,\"1\":2,\"2\":0}},\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"3\":1,\"4\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":46,\"range\":[1,10000],\"values\":{\"12\":0,\"14\":1,"
		"\"29\":1,\"34\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":387,\"range\":[1,200],\"values\":{\"40\":0,\"43\":1,\"46\":7,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":8,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":8,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":45,\"range\":[1,10000],\""
		"values\":{\"12\":0,\"14\":1,\"29\":1,\"34\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6,\"range\":[1,1000],\"values\":{\"0\":1,\"6\":1,\"7\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1897,\"range\":[1,150000],\"values\":{\"167\":0,\"211\":1,\"1379\":1,\"1743\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2,\"range\":[1,10000],\"values\":{\"0\":1,\"2\":1,\"3\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,"
		"\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":15,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":192,\"range\":[1,100],\"values\":{\"92\":0,\"94\":1,\"96\":1,\"98\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14,\"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"10\":1,\"11\":0}},\""
		"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":99,\"range\":[1,2000],\"values\":{\"13\":0,\"15\":3,\"17\":3,\"19\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":8,\"range\":[1,200],\"values\":{\"3\":0,\"4\":2,\"5\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":38,\"range\":[1,50000],\"values\":{\"15\":0,\"17\":1,\"19\":1,\"21\":0}},\"GC_WAIT_FOR_IDLE_COUNT\":{\"bucket_count\":25,\"histogram_type\":0,\"sum\":0,"
		"\"range\":[1,120],\"values\":{\"0\":9,\"1\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2898088,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":363,\"23\":6,\"34\":6,\"41\":8,\"50\":13,\"61\":7,\"74\":25,\"90\":56,\"109\":7,\"132\":14,\"160\":5,\"194\":10,\"235\":124,\"284\":718,\"344\":134,\"416\":245,\"503\":581,\"609\":378,\"737\":136,\"892\":76,\"1080\":18,\"1307\":9,\"1582\":8,\"1915\":7,\"2318\":9,\"2805\":11,\"3395\":7,\"4109\":6,\"4973\":9,\"6019\":8,"
		"\"7284\":9,\"8815\":25,\"10668\":13,\"12911\":5,\"15625\":3,\"18910\":1,\"27698\":1,\"33521\":2,\"40569\":1,\"71914\":1,\"484771\":1,\"586691\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":123354,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":388,\"3\":47,\"5\":75,\"8\":854,\"12\":72,\"19\":804,\"30\":626,\"47\":65,\"73\":21,\"113\":17,\"176\":20,\"274\":14,\"426\":44,\"662\":10,\"1029\":4,\"1599\":2,\"2485\":2,\"6002\":1,\"9328\":0}},\"DESERIALIZE_US\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":23247,\"range\":[1,150000000],\"values\":{\"0\":254,\"1\":1344,\"2\":375,\"3\":302,\"4\":149,\"5\":99,\"6\":68,\"7\":45,\"8\":70,\"10\":57,\"12\":32,\"14\":49,\"17\":38,\"20\":44,\"24\":22,\"29\":20,\"35\":22,\"42\":19,\"50\":5,\"60\":17,\"72\":9,\"87\":11,\"105\":4,\"126\":5,\"219\":1,\"316\":1,\"793\":1,\"1378\":1,\"1992\":2,\"2395\":0}},\"GPU_PROCESS_LAUNCH_TIME_MS_2\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":99,\"range\":[1,64000],\""
		"values\":{\"83\":0,\"92\":1,\"102\":0}},\"MEMORY_TOTAL\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":365000,\"range\":[32768,16777216],\"values\":{\"160913\":0,\"171489\":1,\"182760\":1,\"194772\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":2,\"1\":0}},\"SHUTDOWN_OK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"HTTP_KBREAD_PER_CONN2\":{\"bucket_count\":50,\""
		"histogram_type\":0,\"sum\":0,\"range\":[1,100000],\"values\":{\"0\":5,\"1\":0}},\"HTTP_TRANSACTION_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":18,\"1\":5,\"2\":0}},\"HTTP_SCHEME_UPGRADE_TYPE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":27,\"range\":[1,50],\"values\":{\"0\":0,\"1\":27,\"2\":0}},\"TLS_EARLY_DATA_NEGOTIATED\":{\"bucket_count\":4,\"histogram_type\":1,\"sum\":0,\"range\":[1,3],\"values\":{\"0\":3,\"1\":0}},\""
		"SSL_HANDSHAKE_VERSION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":12,\"range\":[1,16],\"values\":{\"3\":0,\"4\":3,\"5\":0}},\"SSL_HANDSHAKE_RESULT\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":2152,\"range\":[1,672],\"values\":{\"0\":3,\"269\":8,\"270\":0}},\"SSL_TIME_UNTIL_READY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":254,\"range\":[1,60000],\"values\":{\"53\":0,\"55\":1,\"73\":1,\"120\":1,\"126\":0}},\"SSL_RESUMED_SESSION\":{\"bucket_count\":3,\"histogram_type\":2,\""
		"sum\":0,\"range\":[1,2],\"values\":{\"0\":3,\"1\":0}},\"SPDY_KBREAD_PER_CONN2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19,\"range\":[1,100000],\"values\":{\"0\":1,\"16\":1,\"20\":0}},\"HTTP_CHANNEL_DISPOSITION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":233,\"range\":[1,16],\"values\":{\"0\":1,\"2\":18,\"3\":10,\"9\":2,\"10\":5,\"11\":9,\"12\":0}},\"HTTP_CHANNEL_ONSTART_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":29,\"range\":[1,2],\"values\":{\"0\":20,\"1\":29,\""
		"2\":0}},\"DNS_LOOKUP_METHOD2\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":495,\"range\":[1,16],\"values\":{\"0\":0,\"1\":30,\"2\":5,\"3\":8,\"4\":8,\"6\":63,\"7\":3,\"8\":0}},\"DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":486,\"range\":[1,60000],\"values\":{\"2\":0,\"3\":1,\"6\":1,\"7\":2,\"9\":2,\"11\":2,\"14\":1,\"17\":2,\"21\":4,\"26\":3,\"181\":1,\"224\":0}},\"DNS_NATIVE_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":915,\"range\":[1,60000],\""
		"values\":{\"0\":23,\"1\":3,\"2\":1,\"3\":6,\"4\":3,\"5\":4,\"6\":1,\"7\":5,\"9\":3,\"11\":5,\"14\":7,\"17\":4,\"21\":2,\"26\":3,\"32\":1,\"40\":1,\"50\":1,\"62\":1,\"181\":1,\"224\":0}},\"DNS_NATIVE_QUEUING\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":126,\"range\":[1,60000],\"values\":{\"0\":90,\"1\":2,\"2\":3,\"11\":1,\"26\":2,\"40\":1,\"50\":0}},\"DNS_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":104,\"range\":[1,60000],\"values\":{\"0\":12,\"1\":2,\"3\":5,\"14\""
		":2,\"17\":2,\"21\":1,\"26\":0}},\"DNS_BLACKLIST_COUNT\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":0,\"range\":[1,21],\"values\":{\"0\":3,\"1\":0}},\"TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"LOADED_TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"STARTUP_CACHE_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":240,\"range\":"
		"[1,50],\"values\":{\"0\":2,\"1\":150,\"2\":45,\"3\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":403,\"range\":[1,50],\"values\":{\"0\":271,\"1\":17,\"2\":193,\"3\":0}},\"NETWORK_ID_ONLINE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":7,\"range\":[1,50],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"URLCLASSIFIER_LOOKUP_TIME_2\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":0,\"range\":[1,5000],\"values\":{\"0\":6,\"1\":0}},\"URLCLASSIFIER_SHUTDOWN_TIME\":"
		"{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,60000],\"values\":{\"0\":1,\"1\":0}},\"URLCLASSIFIER_CL_CHECK_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,500],\"values\":{\"0\":6,\"1\":0}},\"URLCLASSIFIER_VLPS_FILELOAD_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":44,\"range\":[1,1000],\"values\":{\"0\":18,\"1\":3,\"2\":1,\"29\":1,\"70\":0}},\"FX_TAB_SWITCH_UPDATE_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":16,\"range\":[1,1000],\""
		"values\":{\"4\":0,\"6\":2,\"9\":0}},\"FX_TAB_SWITCH_TOTAL_E10S_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":6,\"range\":[1,1000],\"values\":{\"2\":0,\"3\":2,\"4\":0}},\"FX_TAB_SWITCH_COMPOSITE_E10S_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":28,\"range\":[1,1000],\"values\":{\"19\":0,\"27\":1,\"39\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19814,\"range\":[1,10000],\"values\":{\"0\":52,\"1\":92,\"2\":141,\"3\":158,\"4\":143,\"5\":135,\""
		"6\":156,\"7\":157,\"8\":277,\"10\":301,\"12\":333,\"14\":384,\"17\":12,\"20\":3,\"24\":2,\"29\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7361,\"range\":[1,10000],\"values\":{\"0\":19,\"1\":4,\"2\":9,\"3\":11,\"4\":7,\"5\":3,\"6\":6,\"7\":14,\"8\":57,\"10\":137,\"12\":162,\"14\":113,\"20\":4,\"24\":11,\"29\":9,\"34\":2,\"40\":13,\"48\":1,\"57\":2,\"68\":1,\"81\":0}},\"FX_SESSION_RESTORE_STARTUP_INIT_SESSION_MS\":{\"bucket_count\":20,\""
		"histogram_type\":0,\"sum\":0,\"range\":[1,30000],\"values\":{\"0\":1,\"1\":0}},\"FX_SESSION_RESTORE_STARTUP_ONLOAD_INITIAL_WINDOW_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":10,\"range\":[1,30000],\"values\":{\"4\":0,\"7\":1,\"12\":0}},\"MS_MESSAGE_REQUEST_TIME_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":7,\"range\":[1,2000],\"values\":{\"0\":5,\"2\":1,\"5\":1,\"7\":0}},\"SEARCH_SERVICE_INIT_MS\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":159,\"range\":[1,1000],\""
		"values\":{\"70\":0,\"119\":1,\"203\":0}},\"TOUCH_ENABLED_DEVICE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_SET_DEFAULT_DIALOG_PROMPT_RAWCOUNT\":{\"bucket_count\":15,\""
		"histogram_type\":0,\"sum\":1,\"range\":[1,250],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"NETWORK_CACHE_V2_HIT_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6,\"range\":[1,10000],\"values\":{\"0\":4,\"2\":1,\"4\":1,\"5\":0}},\"SSL_CERT_VERIFICATION_ERRORS\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":180,\"range\":[1,100],\"values\":{\"19\":0,\"20"
		"\":9,\"21\":0}},\"CERT_VALIDATION_SUCCESS_BY_CA\":{\"bucket_count\":257,\"histogram_type\":1,\"sum\":543,\"range\":[1,256],\"values\":{\"180\":0,\"181\":3,\"182\":0}},\"CERT_PINNING_MOZ_RESULTS_BY_HOST\":{\"bucket_count\":513,\"histogram_type\":1,\"sum\":39,\"range\":[1,512],\"values\":{\"12\":0,\"13\":3,\"14\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"COOKIE_BEHAVIOR\":{\"bucket_count\":16,\"histogram_type\""
		":1,\"sum\":4,\"range\":[1,15],\"values\":{\"3\":0,\"4\":1,\"5\":0}},\"TRACKING_PROTECTION_ENABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_PBM_DISABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\""
		"bucket_count\":3,\"histogram_type\":4,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":2,\"1\":0}},\"TOP_LEVEL_CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":15,\"range\":[1,2],\"values\":{\"0\":15,\"1\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":273,\"range\":[1,100000],\"values\":{\"234\":0,\"260\":1,\"289\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":166,\"range\":[1,5000],\""
		"values\":{\"0\":1,\"3\":2,\"4\":2,\"7\":2,\"8\":2,\"9\":3,\"10\":3,\"11\":1,\"12\":1,\"13\":2,\"16\":1,\"17\":0}},\"INPUT_EVENT_QUEUED_KEYBOARD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":114,\"range\":[1,5000],\"values\":{\"1\":0,\"2\":2,\"4\":3,\"5\":1,\"8\":1,\"11\":1,\"13\":1,\"15\":3,\"16\":1,\"17\":0}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2909,\"range\":[1,60000],\"values\":{\"399\":0,\"440\":3,\"485\":2,\"535\":1,\"590\":0}},\""
		"WEBEXT_EXTENSION_STARTUP_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1627,\"range\":[1,50000],\"values\":{\"61\":0,\"67\":1,\"108\":4,\"119\":9,\"131\":0}},\"HTTPS_RR_PRESENTED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":8,\"1\":0}},\"USE_COUNTER2_CONSOLE_WARN_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_WINDOW_CHROME_PAGE\":{\"bucket_count\":3,\"histogram_type\""
		":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\""
		":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}}},\"keyedHistograms\":{\"SSL_TIME_UNTIL_HANDSHAKE_FINISHED_KEYED_BY_KA\":{\"x25519\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":254,\"range\":[1,60000],\"values\":{\"53\":0,\"55\":1,\"73\":1,\"120\":1,\"126\":0}}},\"HTTP_CHANNEL_DISPOSITION_UPGRADE\":{\"disabledNoReason\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\""
		":39,\"range\":[1,50],\"values\":{\"0\":0,\"1\":2,\"2\":5,\"3\":9,\"4\":0}},\"disabledWont\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":66,\"range\":[1,50],\"values\":{\"0\":1,\"2\":18,\"3\":10,\"4\":0}}},\"TRANSACTION_WAIT_TIME_HTTPS_RR\":{\"h1_no_https_rr\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":142,\"range\":[1,5000],\"values\":{\"0\":14,\"1\":3,\"2\":2,\"3\":2,\"5\":1,\"6\":1,\"9\":1,\"11\":1,\"13\":1,\"18\":1,\"21\":2,\"25\":1,\"27\":0}},\"h2_no_https_rr\":{\"bucket_count\""
		":100,\"histogram_type\":0,\"sum\":203,\"range\":[1,5000],\"values\":{\"0\":2,\"81\":1,\"115\":1,\"123\":0}}},\"HTTP3_CHANNEL_ONSTART_SUCCESS\":{\"no_http3\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":23,\"range\":[1,2],\"values\":{\"0\":20,\"1\":23,\"2\":0}}},\"DNS_LOOKUP_DISPOSITION3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":618,\"range\":[1,50],\"values\":{\"5\":0,\"6\":75,\"7\":24,\"8\":0}}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS_BY_ADDONID\":{\""
		"UFT.Firefox.Agent.2021.0@microfocus.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":500,\"range\":[1,60000],\"values\":{\"440\":0,\"485\":1,\"535\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":551,\"range\":[1,60000],\"values\":{\"485\":0,\"535\":1,\"590\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":517,\"range\":[1,60000],\"values\":{\"440\":0,\"485\":1,\"535\":0}},\"pictureinpicture@mozilla.org\":{\"bucket_count"
		"\":100,\"histogram_type\":0,\"sum\":448,\"range\":[1,60000],\"values\":{\"399\":0,\"440\":1,\"485\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":449,\"range\":[1,60000],\"values\":{\"399\":0,\"440\":1,\"485\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":444,\"range\":[1,60000],\"values\":{\"399\":0,\"440\":1,\"485\":0}}},\"WEBEXT_EXTENSION_STARTUP_MS_BY_ADDONID\":{\"UFT.Firefox.Agent.2021.0@microfocus.com\":{"
		"\"bucket_count\":100,\"histogram_type\":0,\"sum\":120,\"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\"default-theme@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":121,\"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\"proxy-failover@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":127,\"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\"bing@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":122,\""
		"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\"doh-rollout@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":73,\"range\":[1,50000],\"values\":{\"61\":0,\"67\":1,\"74\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":115,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":1,\"119\":0}},\"amazon@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":122,\"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\""
		"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":116,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":1,\"119\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":119,\"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\"wikipedia@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":118,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":1,\"119\":0}},\"addons-search-detection@mozilla.com\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":119,\"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":115,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":1,\"119\":0}},\"google@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":119,\"range\":[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}},\"ddg@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":121,\"range\":"
		"[1,50000],\"values\":{\"108\":0,\"119\":1,\"131\":0}}},\"QM_QUOTA_INFO_LOAD_TIME_V0\":{\"Normal\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":0,\"range\":[1,180000],\"values\":{\"0\":1,\"1\":0}}},\"QM_FIRST_INITIALIZATION_ATTEMPT\":{\"TemporaryStorage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"Storage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PersistentOrigin\""
		":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"SQLITE_STORE_OPEN\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\""
		"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,"
		"\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":4,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\""
		"values\":{\"0\":1,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"formhistory.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\""
		"values\":{\"0\":1,\"1\":0}}},\"SQLITE_STORE_QUERY\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":8,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":16,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0"
		",\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":21,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":20,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":95,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":32,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":5,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":52,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":218,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":109,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":16,\"1\":0}},\"formhistory.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":10,\"1\":0}}}},\"info\":{\"reason\":\"shutdown\",\""
		"revision\":\"https://hg.mozilla.org/releases/mozilla-release/rev/be5a26bea29ae03aceaba84e36f205f01c2be791\",\"timezoneOffset\":60,\"previousBuildId\":null,\"sessionId\":\"5f1b5736-99a4-4b70-bc74-bd34e4451fdd\",\"subsessionId\":\"f21127e5-f227-403e-b801-ba14abdc1f9a\",\"previousSessionId\":\"69990a41-a687-4c42-a1cc-c76db8bef2c0\",\"previousSubsessionId\":\"42ba837d-47cc-4470-ba04-057b903d7ee1\",\"subsessionCounter\":1,\"profileSubsessionCounter\":63,\"sessionStartDate\":\"2022-01-21T16:00:00.0+01"
		":00\",\"subsessionStartDate\":\"2022-01-21T16:00:00.0+01:00\",\"sessionLength\":35,\"subsessionLength\":35,\"addons\":\"UFT.Firefox.Agent.2021.0%40microfocus.com:2021.0.0.2596,doh-rollout%40mozilla.org:2.0.0,formautofill%40mozilla.org:1.0.1,pictureinpicture%40mozilla.org:1.0.0,screenshots%40mozilla.org:39.0.1,webcompat%40mozilla.org:29.2.0,proxy-failover%40mozilla.com:1.0.2,default-theme%40mozilla.org:1.3,google%40search.mozilla.org:1.1,wikipedia%40search.mozilla.org:1.1,bing%40search.mozilla.org"
		":1.3,ddg%40search.mozilla.org:1.1,amazon%40search.mozilla.org:1.9,addons-search-detection%40mozilla.com:2.0.0\"}},\"clientId\":\"672cfb6d-f61c-4f22-b43d-108f28e82080\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"version\":\"96.0.1\",\"vendor\":\"Mozilla\",\"displayVersion\":\"96.0.1\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\""
		"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8191,\"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"family\":6,\"model\":165,\"stepping\":2,\"l2cacheKB\":256,\"l3cacheKB\":12288,\"speedMHz\":2712,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\""
		"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2021,\"hasSuperfetch\":true,\"hasPrefetch\":false,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"fr-FR\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":17763,\"windowsUBR\":2183},\"hdd\":{\"binary\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"profile\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"system\":{\""
		"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\":0,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersion\":\"8.17.3.1"
		"\",\"driverDate\":\"4-22-2021\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":2560,\"screenHeight\":1440,\"refreshRate\":64,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"wrQualified\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"webrender\":{\"status\":\"disabled:FEATURE_FAILURE_NOT_QUALIFIED\"},\"wrCompositor\":{\"status\":\"unavailable"
		":FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"wrSoftware\":{\"status\":\"available\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"d2d\":{\"status\":\"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":null,\"antispyware\":null,\"firewall\":null},\"isWow64\":false,\"isWowARM64\":false},\"settings\":{\"blocklistEnabled\""
		":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-US\",\"intl\":{\"requestedLocales\":[\"en-US\"],\"availableLocales\":[\"en-US\"],\"appLocales\":[\"en-US\"],\"systemLocales\":[\"fr-FR\",\"en-US\"],\"regionalPrefsLocales\":[\"en-US\"],\"acceptLanguages\":[\"en-US\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\"userPrefs\":{\"browser.shell.checkDefaultBrowser\":false,\""
		"browser.search.region\":\"FR\",\"browser.search.widget.inNavBar\":false,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"network.proxy.http\":\"<user-set>\",\"network.proxy.ssl\":\"<user-set>\",\"network.trr.mode\":5,\"security.enterprise_roots.auto-enabled\":true,\"security.enterprise_roots.enabled\":true,\"widget.content.allow-gtk-dark-theme\":false,\""
		"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":4},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[other]addEngineWithDetails:google@search.mozilla.org\",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\""
		"creationDate\":18933,\"firstUseDate\":18933},\"addons\":{\"activeAddons\":{\"UFT.Firefox.Agent.2021.0@microfocus.com\":{\"version\":\"2021.0.0.2596\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18933,\"isSystem\":false,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Test Web Applications Using Mozilla Firefox\",\"name\":\"Micro Focus UFT Agent\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,"
		"\"installDay\":18933,\"signedState\":2},\"doh-rollout@mozilla.org\":{\"version\":\"2.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"This used to be a Mozilla add-on that supported the roll-out of DoH, but now only exists as a stub t\",\"name\":\"DoH Roll-Out\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay"
		"\":18874},\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\""
		"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,"
		"\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"webcompat@mozilla.org\":{\"version\":\"29.2.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\""
		"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"proxy-failover@mozilla.com\":{\"version\":\"1.0.2\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Direct Failover for system requests.\",\"name\":\"Proxy "
		"Failover\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18934}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Follow the operating system setting for buttons, menus, and windows.\",\"name\":\"System theme \\xE2\\x80\\x94 auto\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.3\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18933,\""
		"updateDay\":18933},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":\"1.8.1.1\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":\"4.10.2391.0\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"30c0efba-d92b-4d6f-904f-73e2c7d08ffd\"},\""
		"bug-1712189-rollout-keep-firefox-up-to-date-even-when-it-is-not-ru-release-90-94\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"1ca0d79c-0b81-44e2-bb86-29876ff4f8d0\"},\"bug-1732206-rollout-fission-release-rollout-release-94-95\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"7bbd508f-d3bc-4ff6-bc9f-0a6eac48d64c\"},\"bug-1750257-rollout-pref-off-networkcookiesamesiteschemeful-in-release-96-96\":{\"branch\":\"active\",\"type\":\""
		"normandy-prefrollout\",\"enrollmentId\":\"f587f911-f125-4da3-8377-9da1a94835fa\"}}}}", 
		LAST);

	web_custom_request("20220113185450_2", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/f2ecba95-ef37-40ec-848a-556fe930cc0d/health/Firefox/96.0.1/release/20220113185450?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t242.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"health\",\"id\":\"f2ecba95-ef37-40ec-848a-556fe930cc0d\",\"creationDate\":\"2022-01-21T15:37:48.458Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"name\":\"Firefox\",\"version\":\"96.0.1\",\"displayVersion\":\"96.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"os\":{\"name\":\"WINNT\",\"version\":\"10.0\"},\"reason\":\"shutdown\",\"sendFailure\":{\""
		"eTerminated\":4}},\"clientId\":\"672cfb6d-f61c-4f22-b43d-108f28e82080\"}", 
		LAST);

	web_custom_request("20220113185450_3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/57afeff2-7f95-4a47-853c-3399920151b5/event/Firefox/96.0.1/release/20220113185450?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t243.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"event\",\"id\":\"57afeff2-7f95-4a47-853c-3399920151b5\",\"creationDate\":\"2022-01-21T15:37:48.455Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"name\":\"Firefox\",\"version\":\"96.0.1\",\"displayVersion\":\"96.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"reason\":\"shutdown\",\"processStartTimestamp\":1642779420000,\"sessionId\":\""
		"5f1b5736-99a4-4b70-bc74-bd34e4451fdd\",\"subsessionId\":\"f21127e5-f227-403e-b801-ba14abdc1f9a\",\"lostEventsCount\":0,\"events\":{\"parent\":[[631,\"doh\",\"state\",\"rollback\",\"null\"],[850,\"upgrade_dialog\",\"trigger\",\"reason\",\"not-major\"],[35209,\"doh\",\"state\",\"shutdown\",\"null\"]],\"content\":[[2834,\"pwmgr\",\"open_management\",\"mainmenu\"],[8100,\"pwmgr\",\"select\",\"existing_login\"],[11881,\"pwmgr\",\"reauthenticate\",\"os_auth\",\"success_disabled\"],[11881,\"pwmgr\",\""
		"edit\",\"existing_login\"],[30100,\"pwmgr\",\"save\",\"existing_login\"]]}},\"clientId\":\"672cfb6d-f61c-4f22-b43d-108f28e82080\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"version\":\"96.0.1\",\"vendor\":\"Mozilla\",\"displayVersion\":\"96.0.1\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\""
		"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8191,\"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"family\":6,\"model\":165,\"stepping\":2,\"l2cacheKB\":256,\"l3cacheKB\":12288,\"speedMHz\":2712,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\""
		"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2021,\"hasSuperfetch\":true,\"hasPrefetch\":false,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"fr-FR\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":17763,\"windowsUBR\":2183},\"hdd\":{\"binary\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"profile\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"system\":{\"model\":\"VMware, VMware Virtual S\",\""
		"revision\":\"1.0\",\"type\":\"HDD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\":0,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersion\":\"8.17.3.1\",\"driverDate\":\"4-22-2021\",\""
		"GPUActive\":true}],\"monitors\":[{\"screenWidth\":2560,\"screenHeight\":1440,\"refreshRate\":64,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"wrQualified\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"webrender\":{\"status\":\"disabled:FEATURE_FAILURE_NOT_QUALIFIED\"},\"wrCompositor\":{\"status\":\"unavailable:FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"wrSoftware\":{\""
		"status\":\"available\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"d2d\":{\"status\":\"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":null,\"antispyware\":null,\"firewall\":null},\"isWow64\":false,\"isWowARM64\":false},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\""
		"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-US\",\"intl\":{\"requestedLocales\":[\"en-US\"],\"availableLocales\":[\"en-US\"],\"appLocales\":[\"en-US\"],\"systemLocales\":[\"fr-FR\",\"en-US\"],\"regionalPrefsLocales\":[\"en-US\"],\"acceptLanguages\":[\"en-US\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\"userPrefs\":{\"browser.shell.checkDefaultBrowser\":false,\"browser.search.region\":\"FR\",\""
		"browser.search.widget.inNavBar\":false,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"network.proxy.http\":\"<user-set>\",\"network.proxy.ssl\":\"<user-set>\",\"network.trr.mode\":5,\"security.enterprise_roots.auto-enabled\":true,\"security.enterprise_roots.enabled\":true,\"widget.content.allow-gtk-dark-theme\":false,\"widget.content.gtk-high-contrast.enabled\":true},"
		"\"sandbox\":{\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":4},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[other]addEngineWithDetails:google@search.mozilla.org\",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\"creationDate\":18933,\"firstUseDate\":18933},\""
		"addons\":{\"activeAddons\":{\"UFT.Firefox.Agent.2021.0@microfocus.com\":{\"version\":\"2021.0.0.2596\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18933,\"isSystem\":false,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Test Web Applications Using Mozilla Firefox\",\"name\":\"Micro Focus UFT Agent\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18933,\"signedState\":2},\""
		"doh-rollout@mozilla.org\":{\"version\":\"2.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"This used to be a Mozilla add-on that supported the roll-out of DoH, but now only exists as a stub t\",\"name\":\"DoH Roll-Out\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"formautofill@mozilla.org\":{\""
		"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\"isSystem\":true,\"isWebExtension\":true,\""
		"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\""
		"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"webcompat@mozilla.org\":{\"version\":\"29.2.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web "
		"compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"proxy-failover@mozilla.com\":{\"version\":\"1.0.2\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Direct Failover for system requests.\",\"name\":\"Proxy Failover\",\"userDisabled\":false,\""
		"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18934}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Follow the operating system setting for buttons, menus, and windows.\",\"name\":\"System theme \\xE2\\x80\\x94 auto\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.3\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18933,\"updateDay\":18933},\"activeGMPlugins\":{\""
		"gmp-gmpopenh264\":{\"version\":\"1.8.1.1\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":\"4.10.2391.0\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"30c0efba-d92b-4d6f-904f-73e2c7d08ffd\"},\"bug-1712189-rollout-keep-firefox-up-to-date-even-when-it-is-not-ru-release-90-94\""
		":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"1ca0d79c-0b81-44e2-bb86-29876ff4f8d0\"},\"bug-1732206-rollout-fission-release-rollout-release-94-95\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"7bbd508f-d3bc-4ff6-bc9f-0a6eac48d64c\"},\"bug-1750257-rollout-pref-off-networkcookiesamesiteschemeful-in-release-96-96\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"f587f911-f125-4da3-8377-9da1a94835fa\"}}}}", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t244.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("20220113185450_4", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/618fe1b8-456c-44e7-899a-25432930e47b/event/Firefox/96.0.1/release/20220113185450?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t245.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"event\",\"id\":\"618fe1b8-456c-44e7-899a-25432930e47b\",\"creationDate\":\"2022-01-21T15:34:45.486Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"name\":\"Firefox\",\"version\":\"96.0.1\",\"displayVersion\":\"96.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"reason\":\"shutdown\",\"processStartTimestamp\":1642779000000,\"sessionId\":\""
		"69990a41-a687-4c42-a1cc-c76db8bef2c0\",\"subsessionId\":\"42ba837d-47cc-4470-ba04-057b903d7ee1\",\"lostEventsCount\":0,\"events\":{\"parent\":[[1660,\"doh\",\"state\",\"rollback\",\"null\"],[1769,\"upgrade_dialog\",\"trigger\",\"reason\",\"not-major\"],[11160,\"form_autocomplete\",\"show\",\"logins\",\"13\",{\"acFieldName\":\"off\",\"hadPrevious\":\"0\",\"typeWasPassword\":\"0\",\"fieldType\":\"email\",\"stringLength\":\"0\",\"login\":\"1\",\"loginsFooter\":\"1\"}],[16910,\"form_autocomplete\",\""
		"show\",\"logins\",\"5\",{\"acFieldName\":\"off\",\"hadPrevious\":\"0\",\"typeWasPassword\":\"0\",\"fieldType\":\"email\",\"stringLength\":\"0\",\"login\":\"1\",\"loginsFooter\":\"1\"}],[20019,\"form_autocomplete\",\"show\",\"logins\",\"21\",{\"acFieldName\":\"off\",\"hadPrevious\":\"0\",\"typeWasPassword\":\"1\",\"fieldType\":\"password\",\"stringLength\":\"0\",\"login\":\"1\",\"loginsFooter\":\"1\"}],[47035,\"downloads\",\"helpertype\",\"unknowntype\",\"ask\",{\"type\":\"other\",\"reason\":\""
		"other\"}],[223535,\"downloads\",\"added\",\"fileExtension\",\"other\"],[281097,\"doh\",\"state\",\"shutdown\",\"null\"]]}},\"clientId\":\"672cfb6d-f61c-4f22-b43d-108f28e82080\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"version\":\"96.0.1\",\"vendor\":\"Mozilla\",\"displayVersion\":\"96.0.1\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\""
		"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8191,\"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"family\":6,\"model\":165,\"stepping\":2,\"l2cacheKB\":256,\"l3cacheKB\":12288,\"speedMHz\":2712,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\""
		"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2021,\"hasSuperfetch\":true,\"hasPrefetch\":false,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"fr-FR\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":17763,\"windowsUBR\":2183},\"hdd\":{\"binary\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"profile\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"system\":{\""
		"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\":0,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersion\":\"8.17.3.1"
		"\",\"driverDate\":\"4-22-2021\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":2560,\"screenHeight\":1440,\"refreshRate\":64,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"wrQualified\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"webrender\":{\"status\":\"disabled:FEATURE_FAILURE_NOT_QUALIFIED\"},\"wrCompositor\":{\"status\":\"unavailable"
		":FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"wrSoftware\":{\"status\":\"available\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"d2d\":{\"status\":\"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":null,\"antispyware\":null,\"firewall\":null},\"isWow64\":false,\"isWowARM64\":false},\"settings\":{\"blocklistEnabled\""
		":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-US\",\"intl\":{\"requestedLocales\":[\"en-US\"],\"availableLocales\":[\"en-US\"],\"appLocales\":[\"en-US\"],\"systemLocales\":[\"fr-FR\",\"en-US\"],\"regionalPrefsLocales\":[\"en-US\"],\"acceptLanguages\":[\"en-US\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\"userPrefs\":{\"browser.shell.checkDefaultBrowser\":false,\""
		"browser.search.region\":\"FR\",\"browser.search.widget.inNavBar\":false,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"network.proxy.http\":\"<user-set>\",\"network.proxy.ssl\":\"<user-set>\",\"network.trr.mode\":5,\"security.enterprise_roots.auto-enabled\":true,\"security.enterprise_roots.enabled\":true,\"widget.content.allow-gtk-dark-theme\":false,\""
		"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":4},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[other]addEngineWithDetails:google@search.mozilla.org\",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\""
		"creationDate\":18933,\"firstUseDate\":18933},\"addons\":{\"activeAddons\":{\"UFT.Firefox.Agent.2021.0@microfocus.com\":{\"version\":\"2021.0.0.2596\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18933,\"isSystem\":false,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Test Web Applications Using Mozilla Firefox\",\"name\":\"Micro Focus UFT Agent\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,"
		"\"installDay\":18933,\"signedState\":2},\"doh-rollout@mozilla.org\":{\"version\":\"2.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"This used to be a Mozilla add-on that supported the roll-out of DoH, but now only exists as a stub t\",\"name\":\"DoH Roll-Out\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay"
		"\":18874},\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\""
		"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,"
		"\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"webcompat@mozilla.org\":{\"version\":\"29.2.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\""
		"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"proxy-failover@mozilla.com\":{\"version\":\"1.0.2\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Direct Failover for system requests.\",\"name\":\"Proxy "
		"Failover\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18934}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Follow the operating system setting for buttons, menus, and windows.\",\"name\":\"System theme \\xE2\\x80\\x94 auto\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.3\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18933,\""
		"updateDay\":18933},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":\"1.8.1.1\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":\"4.10.2391.0\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"30c0efba-d92b-4d6f-904f-73e2c7d08ffd\"},\""
		"bug-1712189-rollout-keep-firefox-up-to-date-even-when-it-is-not-ru-release-90-94\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"1ca0d79c-0b81-44e2-bb86-29876ff4f8d0\"},\"bug-1732206-rollout-fission-release-rollout-release-94-95\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"7bbd508f-d3bc-4ff6-bc9f-0a6eac48d64c\"},\"bug-1750257-rollout-pref-off-networkcookiesamesiteschemeful-in-release-96-96\":{\"branch\":\"active\",\"type\":\""
		"normandy-prefrollout\",\"enrollmentId\":\"f587f911-f125-4da3-8377-9da1a94835fa\"}}}}", 
		LAST);

	web_custom_request("20220113185450_5", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/ad805fd5-ef60-46b4-959b-71038da5872d/health/Firefox/96.0.1/release/20220113185450?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t246.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"health\",\"id\":\"ad805fd5-ef60-46b4-959b-71038da5872d\",\"creationDate\":\"2022-01-21T15:37:48.419Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"name\":\"Firefox\",\"version\":\"96.0.1\",\"displayVersion\":\"96.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"os\":{\"name\":\"WINNT\",\"version\":\"10.0\"},\"reason\":\"immediate\",\"sendFailure\":{\""
		"eTerminated\":1}},\"clientId\":\"672cfb6d-f61c-4f22-b43d-108f28e82080\"}", 
		LAST);

	web_custom_request("20220113185450_6", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/0f24e462-21d5-4dfd-8cde-086fde4b70a3/main/Firefox/96.0.1/release/20220113185450?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t247.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		body_variable_1, 
		EXTRARES, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642779622053&jzb="
		"eJztWd9zmzgQ_lc89DXESICBvDVO7uqZm-Ta-C696XQYIYStRiAsCRv7Jv97FzNpftk9J2e30xn8YiTBfit9u8t-w6d_LbMsmXViZZJW2jqyEiUXmqnY8Bym0cDDQRD5Lvawf2TNueZGqpin8ISbEExRFtmJ6yLbc9LQjhKM7YhFYZY52E-DAAwSSmVVmPYZLwwDJ_QGMF8pARNTY0p90u9TNidCTrg2nOpjKmSVHlOZ94fcKF73rwCVXbOk_6Y_leDYkVUqWWrrBPwnasJMezUBi29S2EnOCgM3rTHhnwq4tbkw3Ihmt63Z3rVUN7oktDFIjFGNwVu4qwZ7lnULlyVRYGpMkhGYKiohYLUdWPVHnCx__-1tREjtX1yUYCNTJGfrxaS6TIKP75fB-dWZvPhwDouaac1lsV4eRq4u8CwavpuJU_R-1Bz80jDAdyP39mh3Vrzg12DlbPT3Mz4U07JSlI2KTMZoWVLJPVvGl_ajhVm2Uvnsnr"
		"uWhDu2GjZ4kbIa7NnIAsby5agdO4Az5SK9H7ZknguW3zt2-td4fHnxzDe63qFd8ThOKmNk0VtTEYeTyQKZ3kJX3EYIuWG22ubay33ZdEiZYPVQFobwAvhHiVCYRoeFNFyw88IwxdI4mpOlnPYYWsyi5MsAtTufshv_ZtZjg2y6IMLZnztXf759zoWRUox5GbPZKjH-Yfd-F3o6RovaGdRN8h0QjhIlK83EB5ZBBmSVRk0WHRDwwJFDkiZW4d7YC6c5zfcYGefD8eg-UQGpJAUTzjEKoHLhAGGoYG7oI_dFe8WPwWG4A_jT_ba5iQXETX3YA17wFMpqPFvRVKOtNTElhtjwNjHrh9tn7Lai9UlZattBtmM7r6iWG31qKoJeoXKeQkWQ_lTWWyvCE9eoFFVe7NeTfEKouXNk6xntERB5LDMeu4PEPwCSufCanfdYNU_RZPtp_-8so20yP9kvcldiAFwjpFEy3R6HD-HRY3gYvuyMcYiJU3zD"
		"bFqVg2NSVi4XN98wm7bp4LE080M3_AYZHgQSSoDglBhoRt9Jfc_uLmAgAnaol6eXZ_-86tXzpByj202_uwZ9CD2mvOaa9f6QJB1DUfk5LTuOQvygZ6dwuDff6dl99Av37Gt24lVaT82DfNhExd7zQ0HcwnEyXZEk6BVAW4wU_qJwvRYN7UTI8hXZY9uxyZMG6apRjbH060jv1JG-vhZ1KqlTSZ1K6lRSp5I6ldSppE4ldSqpU0m7qKTvCyUQPoJMwPAnS0BiWp9_zscON3ionP7ja8fAR2H3DeoHfYP6_BWfyO_S", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642779622061&jzb="
		"eJy9ltFzozYQxv8VD301MRJgRN4ujtvzTCfpXdzedTodRhLCqBEIkLCxO_nfbzFN0uTimdw11C-2WKTft9LuZ_3xt2P3lXDOnUzz1jhThzV6Z0STWFnAYzQPcBTFoT8PcTR1ttJIq5tEpjDDZxRzlMUu833kBl5K3Jhh7MYiJlnm4TCNIliQcq7b0g5zAkIijwRzeN42Ch7k1lbmfDbjYkuV3khjJTdnXOk2PeO6mC2kbWQ3uwGq-CTY7IdZrkHY1KkaXRnnHPTTZiPs8GsDK16ufoPwkQbfXMFLTiOMbhsuVmWmE7SvuJaBq5Nr90mgzg5NUcMkK62C5MtWKdBvbfMPiMkyFR2s5yLnbuoU-9Uw9oCTS5U-DivaiNIulSgehV38ul5fX32ljR8zdFuZJKy1VpeT41EkZLPZITvZmVa6CCGfZIdT0r5dy0ublCnRLXRpqSzh_BFTDebxuEgrlViWVjQiTeIt3et8ItCujtlfczRknovb8L"
		"aeiHmW76jy3k7OzS_vvj4Lq7VayyoR9YHZcNzc70vPJGjXefOub74RcZw2ujVCfRQZdEDWGtR30YjAkSuHsr5W4d0kIHnBizesjOVivXpsVCBVtBTKO_MD4nkE45B4OJqTvjdenyp-yobhK9jP0x1aEysom27c_d3JFFw1qQ88NeikJabUUtcKMO1-8jDHHQxtRqvKuB5yPdf7DrN8UVNvCOaAqm0KhqDDXHcnDeGZNK5VW5Rvq6TYUG7vhZzcozcEokBkNhD3SPw_IIUP_7LbiWi3Kdqc3u3_3GR86OVn-SL_oOZw1ggZxPLTdfhvPHqKh-G37TEmmHrlA7O_qYzO5KLa724fmP2tafRaqkPikwckGQUJFqAkp1bq8r02j6f7Glj4Kr-8uL78_bv-eZ7ZMbp76QPrdHCzdBZwxdSfpBGTnzVN12AqTh8cBK0pWwF-QIFP9wOn-4zZ_qcf38WUduHVVQWSsoYW4hhk7TWLPn_YR8ubS331"
		"cQlBI4yBXTqGF7FvSlzHi_e1ukAfVv2lfA9OBqJjgu7-_AIyRroZ", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642779622068&jzb="
		"eJwlkNFPwjAYxP-X-rox1g668oYTlMRgEBNJjFnarpPG0o62Qxbj_84nPPZ-d_c19_GL4tApNEPRc_mNEiS8-wnK11EfQM6nBaaUTQgppzhBJx10dL7WDSSI4FjmLUsFIXlajJsyZQLjlClWtu0YTxpKoZBL6Xobb5miLOm4LKag996AsI-xC7Msk-rEjfvSIWoZRtK4vhlJd8gqHb0-Z1u4qt6VyO6yvYOPJajjXtn4xsUKem1vTILi7YHOOyyGx-WccX6erNcduFvPD-oKRf8i6G4z0MX2wa1fFwCDCkE7e8UVI8HiI6uejuY-36wAX5ep1QnO1RZqwLWq5ktt1Lzrnnlv5f5_tyGqgGYEl3-fF1jkbD8&type=track", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);
*/








// ================================= CITRIX PART ==================================================== // 
	ctrx_wait_for_event("LOGON", CTRX_LAST);

	lr_end_transaction("LauchCWCtrx",LR_AUTO);

	lr_start_transaction("ctrx_Operate");

	ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, 0, 0, 1025, 769, "snapshot1", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_click(83, 35, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot2", CTRX_LAST);

	lr_end_transaction("ctrx_Operate",LR_AUTO);

	lr_start_transaction("ctrxForwarding");

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_click(145, 91, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot10", CTRX_LAST);

	lr_end_transaction("ctrxForwarding",LR_AUTO);

	lr_start_transaction("ctrxShipments");

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	lr_think_time(8);

	ctrx_mouse_click(40, 407, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot15", CTRX_LAST);

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_custom_request("KeepAlive", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Home/KeepAlive", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t248.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://contile.services.mozilla.com/v1/tiles", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("ctrxShipments",LR_AUTO);

	lr_start_transaction("ctrxFind");

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", ACTIVATE, 7, 94, 1011, 574, "snapshot21", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_click(434, 273, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot22", CTRX_LAST);

	lr_end_transaction("ctrxFind",LR_AUTO);

	lr_start_transaction("ctrxClickFirstShipmentID");

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_double_click(117, 311, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot27", CTRX_LAST);

	lr_end_transaction("ctrxClickFirstShipmentID",LR_AUTO);

	lr_start_transaction("ctrxgoToDescription");

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot32", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_mouse_click(49, 97, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot38", CTRX_LAST);

	ctrx_mouse_click(86, 99, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot39", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_click(67, 59, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot42", CTRX_LAST);

	ctrx_mouse_click(262, 706, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot43", CTRX_LAST);

	ctrx_sync_on_window("Edit Shipment SCV2200010351 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot44", CTRX_LAST);

	ctrx_mouse_click(65, 708, LEFT_BUTTON, 0, "Edit Shipment SCV2200010351 - CEVTS1 - TESTING - Branch: CEVA =snapshot45", CTRX_LAST);

	lr_think_time(340);

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t249.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0CK<j\\xAC\\xD2\\xC0\\xBB\\xD5\\xF5\\x1C\\xB8\\xAA\\xE3\\x95j", 
		LAST);

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("KeepAlive_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Home/KeepAlive", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t250.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot46", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("RIGHT_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("RIGHT_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("RIGHT_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("RIGHT_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	lr_think_time(26);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_sync_on_window("Create Declaration for Shipment - CEVTS1 - TESTING - Branch: C", ACTIVATE, 351, 332, 322, 102, "snapshot64", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_key("TAB_KEY", MODIF_SHIFT, "", CTRX_LAST);

	ctrx_mouse_click(208, 73, LEFT_BUTTON, 0, "Create Declaration for Shipment - CEVTS1 - TESTING - Branch: C=snapshot72", CTRX_LAST);

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot73", CTRX_LAST);

	ctrx_mouse_click(28, 59, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot74", CTRX_LAST);

	lr_think_time(5);

	ctrx_mouse_double_click(982, 58, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot75", CTRX_LAST);

	ctrx_mouse_double_click(982, 57, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", CTRX_LAST);

	ctrx_mouse_double_click(982, 57, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", CTRX_LAST);

	ctrx_mouse_click(982, 57, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot78", CTRX_LAST);

	ctrx_mouse_click(62, 59, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot79", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	lr_think_time(36);

	web_custom_request("gts1d4_5", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t251.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		EXTRARES, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642780222103&jzb="
		"eJzVVt-PozYQ_lci7nW5YEMSs2-32bQXqdrt3abdq6oKGWOCuwaDbRKSKv_7DUHZdH9Eyl2XVs1LMLbnm5lv5mN-_8uxm5I7l06qWG2cCyfWam24jqzI4TUaB3hCPIz8SUAunJUwwiodiQRu-DHFDKWhG_s-cgMvIW4YY-yGPCRp6uFRMpmAQcqYqgvb3QkImXgkGMP7Wkt4kVlbmsvhkPEVlWopjBXMvGdS1cl7pvLhVFgtmuEdoPJ7Hg_fDTMFjl04pValcS7Bf6qX3HZPS7D4LoFIcl5YOLTHhH8m4Wj7YIWVbbSd2cG90g-mpKw1SK3VrcEdnGrAnuPs4LGkGkwtaDwHU0UtJex2C6f5guPNjz98CCltRjc3JdhINc35fjOub-PJl0-byezuWt18nsGm4cYIVey3p6FvClyF04-VvEKf5m3iN5YDvh_6u4vzWRn7_w9Wrue_vuBDc6Nqzfi8SFWENiVTInBVdOs-2ajSrc6rI3cdCQ"
		"e2WjZEkfAG7LnIAcbyzbxbe4CTCZkclx2ZM8nzo2NXvywWtzcvfGP7CN1aRFFcW6uKwZ6KiCyXa2QHa1MLFyHkk3R7yrVv9-W1JKWSN1NVWCoK4B_FUmMW9gtpheSzwnLNkyhc0Y3KBhytqzD-c4y6yDP-MHqoBnycZmsqvbdz5-7nDy-5sErJhSgjXm1jO-o39kPpmQitG2_ctM3XIxyjWtWGy888hQ5Ia4PaLuoRsOfKoXFbq3A2CkiWs_wNK2M2XcyPjQpIJS249N77AfE8gvEIBHEyJm1vnB8qfooNyzOwn4fbtSaWUDZNv_ldiwRUNaq2LDHopCQm1FIXPiZ2f7m743aCNqRlaVwPuZ7rfYdYvupTKwhmi8pVAoKgRplqTgrCM9eYknVevK0n-ZIye3DkZI7eEBAFPLUBP0DifwGS-_CVXQ14vUrQ8nS2_3GTsa6Xn8WL_K0cA9cIGRRnp-vw7_DoKTwsvy3HmGDqFY-Y7aTSOybj"
		"5Wb98IjZTk2911I1Ij55hCS9QIIESMGohVn0ozJHds8BG52ll1e3179915fnmRyj3Wu_w3w-hRFT3QvDBz8pmixAVP6biR2HBO3--ArZlTkw", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	ctrx_sync_on_bitmap(-122, -103, 175, 174, "snapshot94", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("NO_KEY", 0, "", CTRX_LAST);

	ctrx_key("ALT_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_click(709, 472, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot94", CTRX_LAST);

	ctrx_mouse_click(416, 272, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", CTRX_LAST);

	ctrx_mouse_click(594, 265, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", CTRX_LAST);

	ctrx_mouse_down(529, 252, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", CTRX_LAST);

	ctrx_mouse_up(558, 365, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", CTRX_LAST);

	ctrx_mouse_down(519, 321, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", CTRX_LAST);

	ctrx_mouse_up(414, 177, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", CTRX_LAST);

	ctrx_mouse_click(410, 203, RIGHT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", CTRX_LAST);

	ctrx_key("ESC_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_click(435, 271, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", CTRX_LAST);

	ctrx_mouse_click(45, 67, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", CTRX_LAST);

	ctrx_mouse_click(121, 59, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", CTRX_LAST);

	ctrx_mouse_click(60, 13, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", CTRX_LAST);

	ctrx_mouse_click(67, 0, LEFT_BUTTON, 0, "NULL=snapshot100", CTRX_LAST);

	ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, 0, 0, 1025, 769, "snapshot101", CTRX_LAST);

	ctrx_mouse_click(47, 412, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot102", CTRX_LAST);

	lr_think_time(4);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", ACTIVATE, 7, 94, 1011, 574, "snapshot103", CTRX_LAST);

	ctrx_mouse_click(387, 271, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2=snapshot104", CTRX_LAST);

	lr_think_time(4);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	lr_think_time(9);

	ctrx_key("UP_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("UP_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("UP_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("UP_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("UP_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("UP_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_mouse_click(72, 309, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2=snapshot157", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("UP_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot161", CTRX_LAST);

	ctrx_mouse_click(20, 47, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot162", CTRX_LAST);

	ctrx_mouse_click(20, 42, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot163", CTRX_LAST);

	ctrx_mouse_click(38, 59, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot164", CTRX_LAST);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", CREATE, 7, 94, 1011, 574, "snapshot165", CTRX_LAST);

	ctrx_mouse_click(432, 235, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot166", CTRX_LAST);

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot167", CTRX_LAST);

	ctrx_key("BACKSPACE_KEY", 0, "", CTRX_LAST);

	ctrx_type("3", "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", CREATE, 7, 94, 1011, 574, "snapshot172", CTRX_LAST);

	ctrx_mouse_down(994, 471, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot173", CTRX_LAST);

	ctrx_mouse_up(985, 273, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot174", CTRX_LAST);

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot175", CTRX_LAST);

	ctrx_mouse_click(425, 99, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot176", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", CREATE, 7, 94, 1011, 574, "snapshot199", CTRX_LAST);

	ctrx_mouse_click(297, 272, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot200", CTRX_LAST);

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot201", CTRX_LAST);

	ctrx_mouse_double_click(297, 272, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot202", CTRX_LAST);

	ctrx_mouse_click(854, 718, LEFT_BUTTON, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot203", CTRX_LAST);

	lr_think_time(9);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", ACTIVATE, 7, 94, 1011, 574, "snapshot204", CTRX_LAST);

	ctrx_mouse_click(975, 10, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2=snapshot205", CTRX_LAST);

	ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, 0, 0, 1025, 769, "snapshot206", CTRX_LAST);

	ctrx_mouse_click(14, 37, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot207", CTRX_LAST);

	ctrx_mouse_click(1003, 16, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot208", CTRX_LAST);

	ctrx_logoff(CTRX_NORMAL_LOGOFF, CTRX_LAST);

	web_custom_request("ocsp.digicert.com_8", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t252.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0CK<j\\xAC\\xD2\\xC0\\xBB\\xD5\\xF5\\x1C\\xB8\\xAA\\xE3\\x95j", 
		LAST);

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("KeepAlive_3", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Home/KeepAlive", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("ctrxgoToDescription",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("weblogout");

	web_custom_request("ocsp.digicert.com_9", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t254.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		LAST);

	web_custom_request("ocsp.digicert.com_10", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		LAST);

	web_custom_request("envelope_11",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t256.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.032Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"7a1f2b73e13648ef81f5c2dfab1e4536\",\"init\":true,\"started\":\"2022-01-21T15:52:32.031Z\",\"timestamp\":\"2022-01-21T15:52:32.031Z\",\"status\":\"ok\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("envelope_12",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t257.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.030Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"3fbcf61a798c4f3c9c6893005ded0813\",\"init\":false,\"started\":\"2022-01-21T15:38:24.198Z\",\"timestamp\":\"2022-01-21T15:52:32.030Z\",\"status\":\"exited\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("ocsp.digicert.com_11", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		LAST);

	web_custom_request("ocsp.digicert.com_12", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t259.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		LAST);

	web_custom_request("envelope_13",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t260.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.031Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"2a0299ac2ed54175b42aeb11f1e623cb\",\"init\":true,\"started\":\"2022-01-21T15:52:32.030Z\",\"timestamp\":\"2022-01-21T15:52:32.030Z\",\"status\":\"ok\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("gts1d4_6", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		LAST);

	web_custom_request("gts1d4_7", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		LAST);

	web_custom_request("gts1d4_8", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t263.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		LAST);

	web_custom_request("envelope_14",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t264.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.032Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"2a0299ac2ed54175b42aeb11f1e623cb\",\"init\":false,\"started\":\"2022-01-21T15:52:32.030Z\",\"timestamp\":\"2022-01-21T15:52:32.031Z\",\"status\":\"exited\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("ocsp.sca1b.amazontrust.com_3", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0Fa@\\xBAJF\\x0B\\x8F\\x10\\x15\\x8Aa\\x1B[\\xF1t", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/Logout.6641e355800cef753867.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/guide.json/c51a876e-13e7-4d6e-78d0-f764775a736d?jzb="
		"eJyVUcuO00AQ_Jfh6qzzYmPnhpYFcQAhZWEPCEXtmY5pZTxjTbfzEMq_b8deGSRy4WDJqprqqq7-bQ7EJDF9cmZtFhXM7WxXTqrFYjZZTl0xKav5fFJiWex20_lbt1qZzIC1sQvSS5ZFsZoWy3uFu-QV-CXS8jrPLR7Ax5pYyPKd9bFzdzY2-QNJolO-UU98xip_k-ur2IkOaFDAgYBZj7Guv_Qf0Yi_gNABzXoHnjEzR97SkR8DVB51zh-UrwE-pBjkKT7HtOcWLH6mOqk-ho8dObyhiuE7BJLz-9gAhZHxEOoOarU1GLbfNuYytjRu8FdT1m5bIPcYhMRjg0Eehqf3tzhWMdR1wrqPllngrNEvoLAFj0lxPMI5O2KTnTA45L3EdvDRssH_azS7SV6dSLgZpK8LPJ3bfq-TYArgB474KyQJqAd6rUDB_sgbTAeyqKN-_NQWWkg6-N3YxeVyeQFGQNfp&v=2.121.0_prod&ct="
		"1642780352062", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642780352077&jzb="
		"eJztWG1zmzgQ_ise-jXEiBcD_Za6uatn7pJr41560-kwQgijWiCMBH65yX_vYmo7b766rXGaG_uLAcE-K6322Wf18V9NzXOqvdRiQUqpnWhhIaaSFoFiKTxGPdt0PcNyDM8yT7SKSaZEEbAIvrBCbBIU-3poWUi3jcjT_dA0dZ_6XhwbphO5LhjEhIgyU803tue5hmf34HlZcHiQKJXLl90uoRXmYsSkYkSeEi7K6JSItNtnqmCz7hWg0msadl90EwGOnWh5IXKpvQT_cTGiqrkagcUXEcwkpZmCl5aY8E84vFpfKKZ4PdvGbOdaFGOZY1IbxEoVtcEbeGsG9jTtBi5zXICpIQ4HYCorOYfR5kabfTDD-e-_nfkYz5yLixxsxAVO6XIwLC9D98PbuXt-9VpcvDuHQUmlZCJbDvd9S2bmxO-_mfBX6O2gXvi5ooBv-dbNye5Rsf3nEZXXg78fxKOgUpQFoYMsFgGa50QwWxfBpX5nYBIvin"
		"SyiV0ThFW06miwLKIzsKcjDSKWzgfNvQE4CePR5rYJ5jmn6caxV--Hw8uLB76R5Qz1kgVBWColss4yFIE3Gk2R6kxlyXSEkOXFi22ufb8vjy1SzOmsLzKFWQbxRyEvTOK3C6kYp-eZogWNAr_Cc5F0KJpO_PBzDzUzT-jYGU86tBcnU8yN_blz9dfZw1goIfiQ5QGdLELltDv31daTAZrOjN6sTr4W4QguRCkpf0djyIC4lKjOohYBW945OKz3Krwb2F6SknSPO-O8PxxsEhWQcpxRbpxatmcYnmk6nmG6Pa_Ojd2nCjXtNjbc7oB9f7pNapocts2s3fWdsghYNZgsSCTRVkqMsMI6FBO1_Lj5Rm8IrYvzXOoG0g3d-AGyfNSnmhDkAuVVBIQgnETMthLCPdeI4GWa7deTdISJWjmydY32CIhsGiubriDNA0BSC6ps1aFlFaHR9tX-6SQjTS7fmy-yFrwHsUZIojDZvg9vw6O78HD7fWts"
		"eiY2sjVmrVRaxyQ0n0_Ha8xaNbW-lyaOZ3lrSK8VSKAAzghWoEXfCLmJ7i5gzk58-ery9T8_VHnu0TG6eey30ud9kJjimkna-UPgaAik8jSK3fQ9dEuyE1jc8X9Jdv-ZNFLbql6zUyvpOZ8tYD0Z2bF9CBIo3ISNF-vk2CoE7xWZFEuVUBzts8gcueEX4YYVF6wb-SuKC5JsGvuzOsc5HoG1jxqHSq19ehKSQIbt7t7XI9OC7HgWJPFYw3agZp1FxqnrGJaLeobtuLblu9a3GvgrNec0UM448sIDdvEH4IepUI7TcvfYLFiPhVMOTKT4ZBaWe5Sf2yGrwq1S0H8N5CFk_TguoxAaia90W2-s76k27yGr_6RZeWeT_1y3eay7x7r7i2nyVfk9exrljbze7cPybyhvZJmwVM_1sHy5FydVnFYtH0l-pRmnZ093PWJa11odVzBQ7CnlG2OBM8Y4L1s-Yz5KlqNkOUqWo2Q5Spb__zHiRrX8Gm"
		"cDpmlZN5--AItOnn0", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642780352083&jzb="
		"eJztlm9v2joUxr8K8t5CifOHJH13S7krUgfq2m6dqqqyEwc8TBxim5BNfPeeQEfLbbmityu9k-AN-N_5HT8c28_1T6TLjKFDlMjIKFRHNJeFYvmt5mPoxi3X9gPL8XCIW3U05Yprmd_yGFY4lNgRTsIGdRzccK04aITUthshC4MksWwv9n0ISKJImlQv17hB4FuB24J-kwvoGGqdqcNmM2JTIuSAK80jdRAJaeKDSI6bba5zPmueA5V9ZbT5oTmUkFgdZbnMFDqE_Ek-YHr5awART7swuoDBdyRgDiqU4Y2iNDl3oE9zLWBrqRECstM6vw9DeRqzGUy30LyOxmV32bQhypCL-KGZkZyluiPY-IF6efo81eipFYebqI851joHms9xjrtfnge1dJmUkx2A8GA6mITRNkI28JqSeB0MzReBC6k9r_rr33yHLU4LEdSYFpMZNdYukNPcn47TX0i8A-QoMTHVNYaxwnSoNp-MmGjS0AxOZhVkTJ"
		"QeMhJfwiXxiaXmP5yV8077otvvbVJCBd53p8ZaKnYTdyslXllYuT_kox8rJbwXKrGmwGvrIGJZWYxWuVQX6JvX3sQLHKj2e2TwJkiSZYJHRHOZnkilVxlsA_O2qqqj_vG3JxvcJvw_ihbPH39g_QweF3QqB7W-0ajqWdIvCO0CaxkXLr2qgWZXNi0__v1XSMjM6_Uy4Cc5GbPFIDV96l-dlX7n_Fj2PndgUDGlQJLFcDt0VGpPwvbJRBzhs-oZoyVUG6QUuuG8vnqqI1BytPmpti07_DOe6o0lGc8M8Xdy1QcYF0m1x99E2ruPvfvYu4-9-9i7j737eL37eOo_wE8IMoAg10iwRKObdzEkNvYfGxIhoQ7_xY847v_Dj8AsudBw5UiqzO_zdXzvPaR0sD-_uQOE1IrM", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("ocsp.sca1b.amazontrust.com_4", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0Fa@\\xBAJF\\x0B\\x8F\\x10\\x15\\x8Aa\\x1B[\\xF1t", 
		LAST);

	web_add_cookie("CtxsDesktopAutoLaunchDone=no; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("Disconnect", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Sessions/Disconnect", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/1102480f35b518b91e0a.png", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_13", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\xB4\\x95\\xDC\\xE1?\\x80\\xD8\\xE2\\x17\\x01\\xB6\\xFDm\\xBD_", 
		LAST);

	web_custom_request("ocsp.digicert.com_14", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t269.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\xB4\\x95\\xDC\\xE1?\\x80\\xD8\\xE2\\x17\\x01\\xB6\\xFDm\\xBD_", 
		LAST);

	web_custom_request("ocsp.digicert.com_15", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\"{\\x1E\\xADY\\x81\\xBDY\\x98^\\x0F\\xC5\\xE0\\xE6\\xF8", 
		LAST);

	web_url("Logoff", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/IdpLogoff/Logoff", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1000", 
		LAST);

	return 0;
}