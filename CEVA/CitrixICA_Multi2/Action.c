Action()
{

	web_set_max_html_param_len("432");

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x047\\xD7\t\\xB7\\xA9<>\\x8F\\xA9\\x06\\xAE^\\x14\\xB1\\x8E\\\\\\x1C", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0CK<j\\xAC\\xD2\\xC0\\xBB\\xD5\\xF5\\x1C\\xB8\\xAA\\xE3\\x95j", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0E\\x125^\\x82[\\xCB\\xFBX\\xF3K\\xDDD`1\\x95", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02V\\xC9\\xFA\\x9DAw\\xEFw?\\x8D\\xEF\\xC4\\x83xQ", 
		EXTRARES, 
		"Url=https://contile.services.mozilla.com/v1/tiles", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("gts1c3", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xAB\\xBF$8\\x1AYn\\x81\n\\x00\\x00\\x00\\x01+\\x803", 
		LAST);

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03<\\xB3\\x95\\x98o\\xDB\\xF5\\x8E\\xE5\\x82\\xA5\\xEB\\xB3s\\xA5", 
		LAST);

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

/*Correlation comment: Automatic rules - Do not change!  
Original value='tTI-xE0hYUaTHUoxjY46ig' 
Name ='CorrelationParameter' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='authDomain'*/
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB/IC= authDomain=\"",
		"RB/IC=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/StoreWeb/*",
		LAST);

	web_url("cevalogistics.cloud.com", 
		"URL=https://cevalogistics.cloud.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/remote-settings.content-signature.mozilla.org-2022-03-01-08-35-12.chain", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03<\\xB3\\x95\\x98o\\xDB\\xF5\\x8E\\xE5\\x82\\xA5\\xEB\\xB3s\\xA5", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gaJwgFEAEaGwoNCAUQBhgBIgMwMDEwARD5pw0aAhgFUoOoWCICIAIoARonCAEQARobCg0IARAGGAEiAzAwMTABEN-YChoCGAUedgMWIgIgAigBGicIAxABGhsKDQgDEAYYASIDMDAxMAEQu9YJGgIYBXTG7lkiAiACKAEaJwgHEAEaGwoNCAcQBhgBIgMwMDEwARDIywoaAhgFQbxejCICIAIoARolCAkQARoZCg0ICRAGGAEiAzAwMTABECAaAhgFwwei7CICIAIoAQ==", "Referer=", ENDITEM, 
		"Url=https://firefox.settings.services.mozilla.com/v1/", "Referer=", ENDITEM, 
		"Url=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", "Referer=", ENDITEM, 
		LAST);

	web_url("StoreWeb", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=assets/workspace/workspace.844d7d2c2fb233da9333.js", ENDITEM, 
		"Url=assets/workspace/react.2bd7a2cfd6f3a5c98233.js", ENDITEM, 
		LAST);

	web_custom_request("094b3c4e-c7ec-458b-b57b-a7ec3016c822", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/metrics/1/094b3c4e-c7ec-458b-b57b-a7ec3016c822", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":25,\"start_time\":\"2022-01-21T10:26+01:00\",\"end_time\":\"2022-01-24T11:13+01:00\",\"reason\":\"overdue\"},\"client_info\":{\"telemetry_sdk_build\":\"42.1.0\",\"app_build\":\"20220113185450\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_display_version\":\"96.0.1\",\"first_run_date\":\"2021-11-02+00:00\",\"client_id\":\"b1ab44f2-0f62-45fe-84c7-b52c9227bf44\"},\"metrics\":{\"counter\":{\""
		"browser.engagement.active_ticks\":79,\"glean.upload.pending_pings\":1,\"browser.engagement.uri_count\":59,\"power.total_cpu_time_ms\":1050838},\"timing_distribution\":{\"fog.ipc.flush_durations\":{\"values\":{\"16777216\":0,\"5439339\":3,\"36591367\":0,\"10878678\":0,\"21757357\":0,\"33554432\":1,\"3526975\":2,\"1923096\":3,\"9975792\":1,\"1246974\":1,\"1048576\":2,\"6468501\":1,\"2965820\":5,\"741455\":2,\"2493948\":2,\"1143480\":4,\"2286960\":2,\"18295683\":0,\"961548\":7,\"3846193\":3,\""
		"4987896\":1,\"623487\":1,\"4194304\":1,\"1763487\":6,\"7053950\":0,\"679917\":2,\"15384774\":1,\"808562\":4,\"5931641\":3,\"1617125\":2,\"7692387\":0,\"12937002\":0,\"881743\":2,\"19951584\":0,\"1359834\":3,\"25874004\":0,\"11863283\":0,\"2097152\":2,\"9147841\":0,\"28215801\":0,\"14107900\":0,\"23726566\":0,\"30769549\":0,\"4573920\":1,\"1482910\":3,\"8388608\":1,\"3234250\":2,\"2719669\":3},\"sum\":246009600},\"paint.build_displaylist_time\":{\"values\":{\"262144\":80,\"55108\":16,\"92681\":63,"
		"\"1359834\":26,\"65536\":46,\"35733\":17,\"60096\":34,\"3234250\":7,\"3526975\":8,\"4194304\":2,\"84989\":57,\"2493948\":12,\"285870\":77,\"1048576\":36,\"3846193\":3,\"38967\":13,\"623487\":67,\"7053950\":2,\"25267\":18,\"679917\":74,\"10623\":1,\"142935\":119,\"808562\":29,\"5439339\":5,\"2286960\":19,\"110217\":67,\"77935\":32,\"4987896\":1,\"4573920\":4,\"1143480\":28,\"339958\":68,\"404281\":82,\"71467\":38,\"220435\":105,\"571740\":94,\"2965820\":12,\"370727\":66,\"240387\":94,\"169979\":111"
		",\"11585\":1,\"881743\":35,\"50535\":21,\"13777\":7,\"1617125\":19,\"185363\":117,\"2097152\":20,\"30048\":11,\"1482910\":19,\"5931641\":1,\"21247\":12,\"202140\":121,\"155871\":107,\"15024\":15,\"311743\":96,\"46340\":18,\"6468501\":4,\"1763487\":12,\"8388608\":0,\"42494\":18,\"440871\":98,\"1923096\":16,\"741455\":53,\"101070\":71,\"1246974\":21,\"27554\":15,\"480774\":159,\"524288\":134,\"2719669\":5,\"23170\":16,\"16384\":10,\"7692387\":1,\"131072\":126,\"19483\":12,\"32768\":9,\"17866\":5,\""
		"120193\":87,\"12633\":2,\"961548\":39},\"sum\":1479353500}},\"quantity\":{\"browser.link.open_newwindow_restriction\":2},\"string\":{\"geckoview.validation.version\":\"96.0.1\",\"geckoview.validation.build_id\":\"20220113185450\"},\"labeled_counter\":{\"glean.error.invalid_state\":{\"fog.initialization\":4,\"glean.baseline.duration\":1},\"glean.upload.ping_upload_failure\":{\"unrecoverable\":3},\"glean.validation.pings_submitted\":{\"baseline\":6,\"metrics\":1}},\"timespan\":{\"fog.initialization"
		"\":{\"value\":417100,\"time_unit\":\"nanosecond\"}},\"datetime\":{\"glean.validation.first_run_hour\":\"2021-11-02T08+00:00\"},\"memory_distribution\":{\"glean.database.size\":{\"values\":{\"4870\":0,\"3922\":1,\"4277\":0,\"4664\":0,\"5547\":0,\"4466\":0,\"5086\":0,\"4095\":0,\"5311\":4},\"sum\":25790},\"fog.ipc.buffer_sizes\":{\"values\":{\"127\":6,\"346\":1,\"1166\":2,\"534\":1,\"181\":1,\"197\":1,\"90\":0,\"789\":0,\"317\":0,\"511\":0,\"158\":5,\"224\":1,\"206\":2,\"378\":0,\"899\":1,\"122\":0,"
		"\"304\":0,\"1217\":0,\"189\":1,\"98\":0,\"724\":0,\"558\":0,\"79\":145,\"94\":0,\"490\":1,\"663\":0,\"861\":0,\"215\":2,\"693\":0,\"291\":2,\"394\":0,\"756\":0,\"173\":2,\"583\":1,\"152\":1,\"103\":0,\"255\":1,\"980\":0,\"1023\":1,\"469\":0,\"165\":2,\"133\":0,\"362\":0,\"635\":2,\"82\":0,\"430\":0,\"279\":0,\"331\":0,\"145\":5,\"112\":22,\"449\":3,\"1116\":2,\"939\":1,\"1069\":0,\"107\":3,\"139\":2,\"412\":2,\"117\":0,\"608\":1,\"234\":0,\"86\":397,\"824\":1,\"267\":1,\"245\":0},\"sum\":70296},\""
		"glean.upload.pending_pings_directory_size\":{\"values\":{\"0\":1,\"1\":0},\"sum\":0}}}}", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("gts1c3_2", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xC7.y\\x8A\\xDD\\xFFa4\\xB3\\xBA\\xEDGB\\xB8\\xBB\\xC6\\xC0$\\x07c\\x04\\x14\\x8At\\x7F\\xAF\\x85\\xCD\\xEE\\x95\\xCD=\\x9C\\xD0\\xE2F\\x14\\xF3q5\\x1D'\\x02\\x11\\x00\\xAB\\xBF$8\\x1AYn\\x81\n\\x00\\x00\\x00\\x01+\\x803", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1642777078159\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("6157b4cb-3b99-4d35-a600-98c91875b8bd", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/6157b4cb-3b99-4d35-a600-98c91875b8bd", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":93,\"start_time\":\"2022-01-21T16:38+01:00\",\"end_time\":\"2022-01-24T11:13+01:00\",\"reason\":\"active\"},\"client_info\":{\"telemetry_sdk_build\":\"42.1.0\",\"client_id\":\"b1ab44f2-0f62-45fe-84c7-b52c9227bf44\",\"app_build\":\"20220113185450\",\"os\":\"Windows\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_display_version\":\"96.0.1\",\"first_run_date\":\"2021-11-02+00:00\"},\"metrics\":{\"counter\":{\""
		"browser.engagement.active_ticks\":23,\"browser.engagement.uri_count\":15},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"metrics\":1}},\"datetime\":{\"glean.validation.first_run_hour\":\"2021-11-02T08+00:00\"}}}", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("113d7147-0fcb-4b22-91ee-5f9e912cee60", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/113d7147-0fcb-4b22-91ee-5f9e912cee60", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\"},\"bug-1712189-rollout-keep-firefox-up-to-date-even-when-it-is-not-ru-release-90-94\":{\"branch\":\"active\"},\"bug-1732206-rollout-fission-release-rollout-release-94-95\":{\"branch\":\"active\"},\"bug-1750257-rollout-pref-off-networkcookiesamesiteschemeful-in-release-96-96\":{\"branch\":\"active\"}},\"locale\":\"en-US\",\"version\":\"96.0.1\",\"release_channel\":\""
		"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20220113185450\",\"impression_id\":\"{16ceffee-5b47-402e-9dd4-9001d880e6e8}\"}", 
		EXTRARES, 
		"Url=https://firefox.settings.services.mozilla.com/v1/buckets/monitor/collections/changes/changeset?_expected=%221643014635935%22", "Referer=", ENDITEM, 
		"Url=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/normandy-recipes-capabilities/changeset?_expected=1642896072224&_since=%221642723273597%22", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.sca1b.amazontrust.com", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0Fa@\\xBAJF\\x0B\\x8F\\x10\\x15\\x8Aa\\x1B[\\xF1t", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/externals/sentry.6.13.2.min.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3947.11d3b3c0fe4c52a24414.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_url("StoreWeb_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=assets/workspace/spinner-teal.svg", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7843.610d4b00a81fca13ad50.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=assets/workspace/workspace-vertical-logo-teal.svg", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/Login.06198f275826e1a2c4b3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=assets/workspace/favicon.png", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_6", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9102.7b9cffbd2d5d96f128b9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("envelope",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t19.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:08.342Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"5285045404074a24be95a1f379fb360e\",\"init\":true,\"started\":\"2022-01-24T10:13:08.343Z\",\"timestamp\":\"2022-01-24T10:13:08.343Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);

	web_custom_request("downloads", 
		"URL=https://shavar.services.mozilla.com/downloads?client=navclient-auto-ffox&appver=96.0&pver=2.2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=ads-track-digest256;a:1633028676\nallow-flashallow-digest256;a:1490633678\nanalytics-track-digest256;a:1637080483\nbase-cryptomining-track-digest256;a:1604686195\nbase-fingerprinting-track-digest256;a:1637080483\nblock-flash-digest256;a:1604686195\nblock-flashsubdoc-digest256;a:1604686195\ncontent-track-digest256;a:1604686195\nexcept-flash-digest256;a:1604686195\nexcept-flashallow-digest256;a:1490633678\nexcept-flashsubdoc-digest256;a:1517935265\ngoogle-trackwhite-digest256;a:1604686195\n"
		"mozplugin-block-digest256;a:1604686195\nmozstd-trackwhite-digest256;a:1633028676\nsocial-track-digest256;a:1604686195\nsocial-tracking-protection-facebook-digest256;a:1604686195\nsocial-tracking-protection-linkedin-digest256;a:1564526481\nsocial-tracking-protection-twitter-digest256;a:1604686195\n", 
		LAST);

	web_custom_request("ocsp.sca1b.amazontrust.com_2", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x08\\xD9\\x8C1\\xB8\\x96}\\xE2\\x991\\xC9>\\xE9e\\xA8_", 
		EXTRARES, 
		"Url=https://citrix-cloud-content.customer.pendo.io/agent/static/c51a876e-13e7-4d6e-78d0-f764775a736d/pendo.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/piral-static-feed/feed.json", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/workspace-ui-microapps/index-24cf3fbe55b4a738c76984475e7a9ce8f14e38d4.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/workspace-ui-microapps/main.css", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5063.287c9f9aca2f4de9e890.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8121.f4f028f849af0bfe6c35.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7715.483fb8294bc1fecfc06f.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3409.6a10544c96f85d9364d0.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/2834.7edff6e875abd5b233cc.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9527.734e286c3f41788d09b2.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("envelope_2",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t22.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:10.093Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"5285045404074a24be95a1f379fb360e\",\"init\":false,\"started\":\"2022-01-24T10:13:08.343Z\",\"timestamp\":\"2022-01-24T10:13:10.094Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/6724.fad10bcfca5388e10c52.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/371.19788770111333a220d6.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/228.6af55df91eac33597041.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/4933.04f88ddf4aadc0e3ecfa.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/4760.ac106c61a0b705080270.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9350.9280286916a2b955987e.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9322.ceccbf26c51dc51cc0ff.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/5956.a22b45877ef5952561a9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8784.af23dc3a89c4ee264b8a.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9128.aa95fb80d257f578d09e.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7032.9986872c4ff8582862a9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9253.d92f1f6d4d25151742f9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7464.494652dadd22c502b6c2.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8148.b5f3fb7bd6cbbb131adb.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/6102.1ca768e96cd3d9b03929.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7329.51b325a315c23ada037a.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/2224.c7eb7fbca3704e887266.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/299.28bf9e621347fff3a422.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/120.11882f3b75dc2015e3f7.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/2664.a862b8d98cdf20f637f8.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/4905.8c0e6f6c158ed927aba8.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1832.22bc2554e6fbc9748f04.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7148.1e5a1690a430387c1079.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9662.4a16cd86fc9398dde469.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/5754.33cba4a71b61926e999b.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1331.25c71b132c18a5a2ce9f.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/2500.7d8d2163b44c89c2d4e1.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/3925.6e800fbcc7336ab41514.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/6907.8f5d44084defffbda844.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9234.fe0b79db716f4395922f.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/3660.0caa62a1f9639bc8a54d.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/AppShell.a5ef08195723deccb8a5.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/7403.d739e0d24447a0163c1c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);

	web_custom_request("envelope_3",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:10.094Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"0ce5cd98b59e49faaaaeeca8f51e9456\",\"init\":true,\"started\":\"2022-01-24T10:13:10.094Z\",\"timestamp\":\"2022-01-24T10:13:10.094Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_add_header("Csrf-Token", 
		"undefined");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

/*Correlation comment: Automatic rules - Do not change!  
Original value='1D4B8978389D762DE37A667B57625FE1' 
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
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("envelope_4",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:10.795Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"0ce5cd98b59e49faaaaeeca8f51e9456\",\"init\":false,\"started\":\"2022-01-24T10:13:10.094Z\",\"timestamp\":\"2022-01-24T10:13:10.795Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("envelope_5",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t26.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:10.795Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"2593d6199fea4eeb9a6eb5ec5f4764fc\",\"init\":true,\"started\":\"2022-01-24T10:13:10.795Z\",\"timestamp\":\"2022-01-24T10:13:10.795Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("ocsp", 
		"URL=http://oneocsp.microsoft.com/ocsp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0T0R0P0N0L0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x133\\x00#\\xBDeN@!'\\xB2=9o\\x00\\x00\\x00#\\xBDe", 
		LAST);

	web_add_cookie("WSUI-PendingLogins=[{%22challenge%22:%22reason=%5C%22notoken%5C%22%2C%20location=%5C%22Authentication/GetAuthMethods%5C%22%22%2C%22locationAfterLogin%22:{%22pathname%22:%22/home%22%2C%22search%22:%22%22%2C%22hash%22:%22%22}}]; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("Login", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/Login", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.citrix.authenticateresponse-1+xml", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={}", 
		EXTRARES, 
		"Url=https://cips-iws-prod-weu-cip-cdn.azureedge.net/iwsprodweucip-container/womkdccyy46o-c786167b-5dd1-509a-8071-272c84f57d92-logonLogo-l0nOmghv", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/e86d2642f412b9493b14.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\xB4\\x95\\xDC\\xE1?\\x80\\xD8\\xE2\\x17\\x01\\xB6\\xFDm\\xBD_", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/f32753567f64c1ddeec8.woff", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_8", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\"{\\x1E\\xADY\\x81\\xBDY\\x98^\\x0F\\xC5\\xE0\\xE6\\xF8", 
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='CfDJ8A4yPTlIR4tPmKNUxzs0HUCb_T2qqs3zqwAtv60A6JmiVoZdTEPKaZXLYLUBn2F2DKvMWhCDktOkX8ReNbjGjmnpB-hzVl8npi1X5-typDEY-03JUKz-iVyeCkk_Ji47bZF_OEZDc-AhQruB-9Ut3-XMaIAIiJaUPhegei-Si4Zog9B1VuKpYLWSgGCAWdYPA8bkuMelqQpJuSnDPDhOZ_T5CYsyFssMrVEpiG5mJei0Ix5hiE2LZrbGroDyf8nn6moLItq5CCqMlRpm-AxQCgAU5jVFhic7HdosOkMNex1o' 
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
		"RequestUrl=*/CfDJ8A4yPTlIR4tPmKNUxzs0HUDRaoJXCOGo0ONgh6brFuc4pGL_6fskVSNeoHb6tVgEk8D1o1GtV3z2DYJiB-FT4_RUMstNIukVuiD8T3HdEw-ngeT1wsOI4Fvvs__J-kLpmw*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='46eba8f4-4745-4a25-f15a-038001000003' 
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

	web_url("CfDJ8A4yPTlIR4tPmKNUxzs0HUDRaoJXCOGo0ONgh6brFuc4pGL_6fskVSNeoHb6tVgEk8D1o1GtV3z2DYJiB-FT4_RUMstNIukVuiD8T3HdEw-ngeT1wsOI4Fvvs__J-kLpmw",
		"URL=https://accounts-dsauthweb.cloud.com/{CorrelationParameter}/oidc/webview/CfDJ8A4yPTlIR4tPmKNUxzs0HUDRaoJXCOGo0ONgh6brFuc4pGL_6fskVSNeoHb6tVgEk8D1o1GtV3z2DYJiB-FT4_RUMstNIukVuiD8T3HdEw-ngeT1wsOI4Fvvs__J-kLpmw?_id=webviewResponseId&_cx=&_rt=https%3A%2F%2Fcevalogistics.cloud.com%2FCitrix%2FStoreWeb%2FExplicitAuth%2FBounce&_cs={CitrixXenApp_CsrfToken}&_ps=true",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t31.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://idp.cevalogistics.com/adfs/portal/css/style.css?id=A7618A91AF9831C8CDF5863B4179236EC332904F166B2A3D6BF41BE9F87FCC37", "Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqG7I9txl1ZIAmQJhgXoNiPxduhlUGS6FaAPT5TT7t9PspM2hy6HHk2%2BJJ%2BXlOfIterYqvdPZgd%2FekCfbDcL8rtosxuAMk%2Bns8MsLWeH2%2FQwvYH0U3F714ryTmRQkuQXOJTWLEgxyUiyRexha9Bz40MoK4o0y9OirPOM5VOWlw8k2YQJ0nA%2FVD153yGjVDbdRMCRK%2FsoQ1rgRFhNedMiVUhJ8sU6AQPjgrRcIcRZFUeUR3iNVM56K6z6LE0jzeOC9M4wy1EiM1wDMi%2FYfvXtngVWdhhFyL7WdZVWP%2FY1SVaI4CLY2hrsNbg9uKMU8HN3%2F4Ya9zURyvbNwBg%2FKRc4jD%2FKBtz3MGuUXzeGY3Ok3vXoSfKilUE2nOM6enfySZbzqGbD1t1F%2FfVyfnZJlu97mtOLtuOMjkVX201llRR%2Fk5VS9nntgPvgNOCH5dOz8PSIoBnOFTbp4cUna6s77iTGo2tppO71Gf9St1aBbgftR8xclQkmYusQjq%2Fm2bomvhYQgbN23GBnnT%2F5fo9nOeb%2B4%2B41e%2FkXLf8B&RelayState=wFE7BqZPSjWBmBBioyCYjw%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=SH%2B0%2BMacA6LSwZFDGO3%2F6Xdlz4FdCvrsHG3%2BUXsCjQme44d6rH4Il5xh4B9OV9z6Yvf%2FISYh4NKdnXsv%2B%2BmufEDLbv9DSGHNCTiIBWlpxABrz%2BoVzN81QDzDe97f5xyj95hPnzi4EleNF%2FOcRDq2lybdGAyQAfMDwfDwzrDupXIxr9OydrJbwck9eEFpfVAIBv71fpcfLTiLXQgY8uIu9B%2FjTau38rmMno"
		"FXRBVVFSa9DFNeWREaEMU3Zn2uu7KBbu9nePgGQfvyXxpYb7z9xBfs2nAm3uE%2Fif%2Fshm%2BcUDLqpYl7bM1gClBZ%2FEBvoBvIRASKGZcuyFtN0ZXu97As%2Fg%3D%3D", ENDITEM,
		"URL=https://idp.cevalogistics.com/adfs/portal/logo/logo.png?id=EEC3CF47FAFAD59C84F33C171B88CF72647BE58F226928DCC09E5D6FB3B7D80C", "Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqG7I9txl1ZIAmQJhgXoNiPxduhlUGS6FaAPT5TT7t9PspM2hy6HHk2%2BJJ%2BXlOfIterYqvdPZgd%2FekCfbDcL8rtosxuAMk%2Bns8MsLWeH2%2FQwvYH0U3F714ryTmRQkuQXOJTWLEgxyUiyRexha9Bz40MoK4o0y9OirPOM5VOWlw8k2YQJ0nA%2FVD153yGjVDbdRMCRK%2FsoQ1rgRFhNedMiVUhJ8sU6AQPjgrRcIcRZFUeUR3iNVM56K6z6LE0jzeOC9M4wy1EiM1wDMi%2FYfvXtngVWdhhFyL7WdZVWP%2FY1SVaI4CLY2hrsNbg9uKMU8HN3%2F4Ya9zURyvbNwBg%2FKRc4jD%2FKBtz3MGuUXzeGY3Ok3vXoSfKilUE2nOM6enfySZbzqGbD1t1F%2FfVyfnZJlu97mtOLtuOMjkVX201llRR%2Fk5VS9nntgPvgNOCH5dOz8PSIoBnOFTbp4cUna6s77iTGo2tppO71Gf9St1aBbgftR8xclQkmYusQjq%2Fm2bomvhYQgbN23GBnnT%2F5fo9nOeb%2B4%2B41e%2FkXLf8B&RelayState=wFE7BqZPSjWBmBBioyCYjw%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=SH%2B0%2BMacA6LSwZFDGO3%2F6Xdlz4FdCvrsHG3%2BUXsCjQme44d6rH4Il5xh4B9OV9z6Yvf%2FISYh4NKdnXsv%2B%2BmufEDLbv9DSGHNCTiIBWlpxABrz%2BoVzN81QDzDe97f5xyj95hPnzi4EleNF%2FOcRDq2lybdGAyQAfMDwfDwzrDupXIxr9OydrJbwck9eEFpfVAIBv71fpcfLTiLXQgY8uIu9B%2FjTau38rmMno"
		"FXRBVVFSa9DFNeWREaEMU3Zn2uu7KBbu9nePgGQfvyXxpYb7z9xBfs2nAm3uE%2Fif%2Fshm%2BcUDLqpYl7bM1gClBZ%2FEBvoBvIRASKGZcuyFtN0ZXu97As%2Fg%3D%3D", ENDITEM,
		"URL=https://idp.cevalogistics.com/adfs/portal/illustration/illustration.png?id=137068B663E06A3EB22CADA0A2B2586B2B41CECFF707C24067AE391967B21E03", "Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqG7I9txl1ZIAmQJhgXoNiPxduhlUGS6FaAPT5TT7t9PspM2hy6HHk2%2BJJ%2BXlOfIterYqvdPZgd%2FekCfbDcL8rtosxuAMk%2Bns8MsLWeH2%2FQwvYH0U3F714ryTmRQkuQXOJTWLEgxyUiyRexha9Bz40MoK4o0y9OirPOM5VOWlw8k2YQJ0nA%2FVD153yGjVDbdRMCRK%2FsoQ1rgRFhNedMiVUhJ8sU6AQPjgrRcIcRZFUeUR3iNVM56K6z6LE0jzeOC9M4wy1EiM1wDMi%2FYfvXtngVWdhhFyL7WdZVWP%2FY1SVaI4CLY2hrsNbg9uKMU8HN3%2F4Ya9zURyvbNwBg%2FKRc4jD%2FKBtz3MGuUXzeGY3Ok3vXoSfKilUE2nOM6enfySZbzqGbD1t1F%2FfVyfnZJlu97mtOLtuOMjkVX201llRR%2Fk5VS9nntgPvgNOCH5dOz8PSIoBnOFTbp4cUna6s77iTGo2tppO71Gf9St1aBbgftR8xclQkmYusQjq%2Fm2bomvhYQgbN23GBnnT%2F5fo9nOeb%2B4%2B41e%2FkXLf8B&RelayState=wFE7BqZPSjWBmBBioyCYjw%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=SH%2B0%2BMacA6LSwZFDGO3%2F6Xdlz4FdCvrsHG3%2BUXsCjQme44d6rH4Il5xh4B9OV9z6Yvf%2FISYh4NKdnXsv%2B%2BmufEDLbv9DSGHNCTiIBWlpxABrz%2BoVzN81QDzDe97f5xyj95hPnzi4EleNF%2FOcRDq2lybdGAyQAfMDwfDwzrDupXIxr9OydrJbwck9eEFpfVAIBv71fpcfLTiLXQgY8uIu9B%2FjTau38rmMno"
		"FXRBVVFSa9DFNeWREaEMU3Zn2uu7KBbu9nePgGQfvyXxpYb7z9xBfs2nAm3uE%2Fif%2Fshm%2BcUDLqpYl7bM1gClBZ%2FEBvoBvIRASKGZcuyFtN0ZXu97As%2Fg%3D%3D", ENDITEM,
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='PHNhbWxwOlJlc3BvbnNlIElEPSJfZDVmMTFiODItZWMxZS00NzYzLTg3NzYtNGNiYTQxYWI1NTM4IiBWZXJzaW9uPSIyLjAiIElzc3VlSW5zdGFudD0iMjAyMi0wMS0yNFQxMDoxMzoyMy45NDFaIiBEZXN0aW5hdGlvbj0iaHR0cHM6Ly9zYW1sLmNsb3VkLmNvbS9zYW1sL2FjcyIgQ29uc2VudD0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOmNvbnNlbnQ6dW5zcGVjaWZpZWQiIEluUmVzcG9uc2VUbz0iXzJmMDVlZTQxLTM3YjctNDdiOC1iMzVlLTYyODlmYzQ5YzBlNCIgeG1sbnM6c2FtbHA9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDpwcm90b2NvbCI' 
Name ='CorrelationParameter_1' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='SAMLResponse'*/
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter_1",
		"LB/IC=name=\"SAMLResponse\" value=\"",
		"RB/IC=+",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/ls/*",
		LAST);

	web_submit_data("ls",
		"Action=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqG7I9txl1ZIAmQJhgXoNiPxduhlUGS6FaAPT5TT7t9PspM2hy6HHk2%2BJJ%2BXlOfIterYqvdPZgd%2FekCfbDcL8rtosxuAMk%2Bns8MsLWeH2%2FQwvYH0U3F714ryTmRQkuQXOJTWLEgxyUiyRexha9Bz40MoK4o0y9OirPOM5VOWlw8k2YQJ0nA%2FVD153yGjVDbdRMCRK%2FsoQ1rgRFhNedMiVUhJ8sU6AQPjgrRcIcRZFUeUR3iNVM56K6z6LE0jzeOC9M4wy1EiM1wDMi%2FYfvXtngVWdhhFyL7WdZVWP%2FY1SVaI4CLY2hrsNbg9uKMU8HN3%2F4Ya9zURyvbNwBg%2FKRc4jD%2FKBtz3MGuUXzeGY3Ok3vXoSfKilUE2nOM6enfySZbzqGbD1t1F%2FfVyfnZJlu97mtOLtuOMjkVX201llRR%2Fk5VS9nntgPvgNOCH5dOz8PSIoBnOFTbp4cUna6s77iTGo2tppO71Gf9St1aBbgftR8xclQkmYusQjq%2Fm2bomvhYQgbN23GBnnT%2F5fo9nOeb%2B4%2B41e%2FkXLf8B&RelayState=wFE7BqZPSjWBmBBioyCYjw%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=SH%2B0%2BMacA6LSwZFDGO3%2F6Xdlz4FdCvrsHG3%2BUXsCjQme44d6rH4Il5xh4B9OV9z6Yvf%2FISYh4NKdnXsv%2B%2BmufEDLbv9DSGHNCTiIBWlpxABrz%2BoVzN81QDzDe97f5xyj95hPnzi4EleNF%2FOcRDq2lybdGAyQAfMDwfDwzrDupXIxr9OydrJbwck9eEFpfVAIBv71fpcfLTiLXQgY8uIu9B%2FjTau38rmMnoF"
		"XRBVVFSa9DFNeWREaEMU3Zn2uu7KBbu9nePgGQfvyXxpYb7z9xBfs2nAm3uE%2Fif%2Fshm%2BcUDLqpYl7bM1gClBZ%2FEBvoBvIRASKGZcuyFtN0ZXu97As%2Fg%3D%3D&client-request-id={client-request-id}",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest=nZNNb9swDIb%2FiqG7I9txl1ZIAmQJhgXoNiPxduhlUGS6FaAPT5TT7t9PspM2hy6HHk2%2BJJ%2BXlOfIterYqvdPZgd%2FekCfbDcL8rtosxuAMk%2Bns8MsLWeH2%2FQwvYH0U3F714ryTmRQkuQXOJTWLEgxyUiyRexha9Bz40MoK4o0y9OirPOM5VOWlw8k2YQJ0nA%2FVD153yGjVDbdRMCRK%2FsoQ1rgRFhNedMiVUhJ8sU6AQPjgrRcIcRZFUeUR3iNVM56K6z6LE0jzeOC9M4wy1EiM1wDMi%2FYfvXtngVWdhhFyL7WdZVWP%2FY1SVaI4CLY2hrsNbg9uKMU8HN3%2F4Ya9zURyvbNwBg%2FKRc4jD%2FKBtz3MGuUXzeGY3Ok3vXoSfKilUE2nOM6enfySZbzqGbD1t1F%2FfVyfnZJlu97mtOLtuOMjkVX201llRR%2Fk5VS9nntgPvgNOCH5dOz8PSIoBnOFTbp4cUna6s77iTGo2tppO71Gf9St1aBbgftR8xclQkmYusQjq%2Fm2bomvhYQgbN23GBnnT%2F5fo9nOeb%2B4%2B41e%2FkXLf8B&RelayState=wFE7BqZPSjWBmBBioyCYjw%3D%3D&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256&Signature=SH%2B0%2BMacA6LSwZFDGO3%2F6Xdlz4FdCvrsHG3%2BUXsCjQme44d6rH4Il5xh4B9OV9z6Yvf%2FISYh4NKdnXsv%2B%2BmufEDLbv9DSGHNCTiIBWlpxABrz%2BoVzN81QDzDe97f5xyj95hPnzi4EleNF%2FOcRDq2lybdGAyQAfMDwfDwzrDupXIxr9OydrJbwck9eEFpfVAIBv71fpcfLTiLXQgY8uIu9B%2FjTau38rmMno"
		"FXRBVVFSa9DFNeWREaEMU3Zn2uu7KBbu9nePgGQfvyXxpYb7z9xBfs2nAm3uE%2Fif%2Fshm%2BcUDLqpYl7bM1gClBZ%2FEBvoBvIRASKGZcuyFtN0ZXu97As%2Fg%3D%3D",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=UserName", "Value=CW1_LoadTesting_1009@logistics.corp", ENDITEM,
		"Name=Kmsi", "Value=true", ENDITEM,
		"Name=AuthMethod", "Value=FormsAuthentication", ENDITEM,
		"Name=Password", "Value=2JFIYF5xS62W", ENDITEM,
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='dGlyNjJkdDhidT0wOi0xIzEzODQ1MDg3O284eHZ6amU0dDA9MzotMSMzODk2MDE0NjtrZWkxa2ltMjhhPTE6LTEjMjEyODg2NjQ3' 
Name ='CorrelationParameter_2' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='consistencyToken'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_2",
		"RegExp=Citrix-ConsistencyToken:\\ (.*?)\\\r\\\n",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/callback*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='M2EzMmUyYTRiNDM5OTBiZDBkY2FmMDRiN2JmZjUwNGY2Njk1ZDY2ZWM0Nzg5ODEwNmFiNmRjNTE4MWE5NDczNi5zYW1sLnRUSS14RTBoWVVhVEhVb3hqWTQ2aWcuZmFsc2UudGlyNjJkdDhidT0wOi0xIzEzODQ1MDg3O284eHZ6amU0dDA9MzotMSMzODk2MDE0NjtrZWkxa2ltMjhhPTE6LTEjMjEyODg2NjQ3' 
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
Original value='2uTM4Up0hQLyZQSY7WFJLHqxXFlqZaILnOGF8GZvdCU.af4ae189c80e4adaf038e6f6900dc832' 
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

	web_submit_data("acs",
		"Action=https://saml.cloud.com/saml/acs",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t33.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=SAMLResponse", "Value={CorrelationParameter_1}+PElzc3VlciB4bWxucz0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOmFzc2VydGlvbiI+aHR0cDovL2lkcC5jZXZhbG9naXN0aWNzLmNvbS9hZGZzL3NlcnZpY2VzL3RydXN0PC9Jc3N1ZXI+PHNhbWxwOlN0YXR1cz48c2FtbHA6U3RhdHVzQ29kZSBWYWx1ZT0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOnN0YXR1czpTdWNjZXNzIiAvPjwvc2FtbHA6U3RhdHVzPjxBc3NlcnRpb24gSUQ9Il9iNDM0N2VjMC1kODA0LTQ0ODEtYTExNi1hMzIxNWYxYzQ4MGYiIElzc3VlSW5zdGFudD0iMjAyMi0wMS0yNFQxMDoxMzoyMy45NDFaIiBWZXJzaW9uPSIyLjAiIHhtbG5zPSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6YXNzZXJ0aW9uIj48SXNzdWVyPmh0dHA6Ly9pZHAuY2V2YWxvZ2lzdGljcy5jb20vYWRmcy9zZXJ2aWNlcy90cnVzdDwvSXNzdWVyPjxkczpTaWduYXR1cmUgeG1sbnM6ZHM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvMDkveG1sZHNpZyMiPjxkczpTaWduZWRJbmZvPjxkczpDYW5vbmljYWxpemF0aW9uTWV0aG9kIEFsZ29yaXRobT0iaHR0cDovL3d3dy53My5vcmcvMjAwMS8xMC94bWwtZXhjLWMxNG4jIiAvPjxkczpTaWduYXR1cmVNZXRob2QgQWxnb3JpdGhtPSJodHRwOi8vd3d3LnczLm9yZy8yMDAxLzA0L3htbGRzaWctbW9yZSNyc2Etc2hhMjU2IiAvPjxkczpSZWZlcmVuY2UgVVJJPSIjX2I0MzQ3ZWMwLWQ4MDQtNDQ4MS1hMTE2LWEzMjE1ZjFjNDgwZiI+PGRzOlRyYW5zZm9ybXM+"
		"PGRzOlRyYW5zZm9ybSBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvMDkveG1sZHNpZyNlbnZlbG9wZWQtc2lnbmF0dXJlIiAvPjxkczpUcmFuc2Zvcm0gQWxnb3JpdGhtPSJodHRwOi8vd3d3LnczLm9yZy8yMDAxLzEwL3htbC1leGMtYzE0biMiIC8+PC9kczpUcmFuc2Zvcm1zPjxkczpEaWdlc3RNZXRob2QgQWxnb3JpdGhtPSJodHRwOi8vd3d3LnczLm9yZy8yMDAxLzA0L3htbGVuYyNzaGEyNTYiIC8+PGRzOkRpZ2VzdFZhbHVlPlprQmprMkY5MWc5bk5yQTlEUWVNc1NIb3FyM01OeDJTV1NtRWh3aC9RZ2s9PC9kczpEaWdlc3RWYWx1ZT48L2RzOlJlZmVyZW5jZT48L2RzOlNpZ25lZEluZm8+PGRzOlNpZ25hdHVyZVZhbHVlPmtTS2pRSTRQWkViMjRDZ01ULy94ZTBUOGg2RTIzbXMwaVRxdmtzUE9LLzB5M0pBUno0cFgzL2dZc0hmT3NEYXdwaTJudFNNS0tuZW9qbjN3RVVRRUNRR0thNDJ1aEVtL3ZpcVlhRXFicmorc2RxTUEwVEpsRHVwRk1JTzYxeWk0K0lWMzFEc1lRZ05ITUswN1dSNDdWOWQwYnhwQXVLRlFnNzhvWFFqckZZY0JVQmFZTmdEZDV5RjhSUW5xTzgvVVpTMGFod0lIbFZnV3d2YnRGUFJxMy8zbkNDOXJyTjErWjhRZ2tjMkF4dG1yOUZMMTc1WCtrUk5kTUlYdkg3cDB2NnhlK3gxREhmbzEraWVVUFdJZXZsUEFCV0tBRmR2WC9uZWJkZ05xUjV0cElkTkxmbVpkdDZEcnVsS2lhQ2kraUlXOXBTdWNqYnFjSFl3bE5lbEIydz09PC9kczpTaWduYXR1cmVWYWx1ZT48S2V5SW5mbyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC"
		"8wOS94bWxkc2lnIyI+PGRzOlg1MDlEYXRhPjxkczpYNTA5Q2VydGlmaWNhdGU+TUlJQzVqQ0NBYzZnQXdJQkFnSVFmRU45V29ja2k3QktGdklRTGRPQW1qQU5CZ2txaGtpRzl3MEJBUXNGQURBdk1TMHdLd1lEVlFRREV5UkJSRVpUSUZOcFoyNXBibWNnTFNCcFpIQXVZMlYyWVd4dloybHpkR2xqY3k1amIyMHdIaGNOTWpBeE1ESTBNVEExTVRJM1doY05NalV4TURJek1UQTFNVEkzV2pBdk1TMHdLd1lEVlFRREV5UkJSRVpUSUZOcFoyNXBibWNnTFNCcFpIQXVZMlYyWVd4dloybHpkR2xqY3k1amIyMHdnZ0VpTUEwR0NTcUdTSWIzRFFFQkFRVUFBNElCRHdBd2dnRUtBb0lCQVFDdUNRNFRiMDhoeW55K09HeHRJS3pydVV5QVBHNXJqWGxhbWpGVXNQd05zMG82dHBWajJYUFNYeUMzVGxuQmZyQk1OZFNIRzdXZVJ0c1c2WWZpdnNEekkrTzdhOHltQm1pZjhyeVdYVkkya04wL21aVFdiNWdEK1dhSzdheHlad0d1NkdBODlmOThKQTNpUlRZYUUzaXZuNmFIQkh1aWtpdnkrZ3hua3oyMU5ZSGE1VnFwR05xL1hEbHdoQ094QVlrUHRsT0xrSTdrTEhkcGdOaWFYU0xkTzVocEhETklJU1hLbXFqcDNueFRBY2ZWZ29keEJoT0FzZDlkblFJcHpFT1hCVmNXL2xqajJKSnRKMVhyNFpEa2cwZXpaZG1pSzBqSmlHQW9qYVkrWFUyYzkyY016elBLcis0a1ZwcWcyREtZT0grRmRxRnhqUHg2WHNNRXVXVWhBZ01CQUFFd0RRWUpLb1pJaHZjTkFRRUxCUUFEZ2dFQkFLVjQ2a0MxUEUwYnF0bU81ZlJpTFVhLzFDM25UR3gzampPeFJ1VEtibVNzcVVKaFk5c21TSU51OWRNZHVRdjVBUFV5"
		"dlRsWk9EYWVEemsrV24wNGovbjhPTlhiTWRMemZXS0ZCdmcvQUgxZGh4Uzd3Z2xFNm9nR0hKUW9UWWx1NUFFd2hNVXFpajRSeWRkOW1lL3VWTWw2R2t3T1V0WDNBR2hFVXVxamRBU3FJMU9hcjVWUkdreFd1YTArT1Jrdkt5SXh6dE5IclBMSGdCUW5FcUY0bDJBSkZGcHRJZGRsOVJpQlY1S3gzUDRWenFLdXJ1bFZpdjJYRnBqWFNQN3o0bnlwZ1lRMnRVczJIVmhWVGFyMEZVeG9BMlpGTE1DWU1BR0hWL0NRNGJydGxzVzA0V2NDNWtUZXdFamNrMTcvWFhWRHZjM1JDVWFub3dJcnlYV1d0RGc9PC9kczpYNTA5Q2VydGlmaWNhdGU+PC9kczpYNTA5RGF0YT48L0tleUluZm8+PC9kczpTaWduYXR1cmU+PFN1YmplY3Q+PFN1YmplY3RDb25maXJtYXRpb24gTWV0aG9kPSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6Y206YmVhcmVyIj48U3ViamVjdENvbmZpcm1hdGlvbkRhdGEgSW5SZXNwb25zZVRvPSJfMmYwNWVlNDEtMzdiNy00N2I4LWIzNWUtNjI4OWZjNDljMGU0IiBOb3RPbk9yQWZ0ZXI9IjIwMjItMDEtMjRUMTA6MTg6MjMuOTQxWiIgUmVjaXBpZW50PSJodHRwczovL3NhbWwuY2xvdWQuY29tL3NhbWwvYWNzIiAvPjwvU3ViamVjdENvbmZpcm1hdGlvbj48L1N1YmplY3Q+PENvbmRpdGlvbnMgTm90QmVmb3JlPSIyMDIyLTAxLTI0VDEwOjEzOjIzLjk0MVoiIE5vdE9uT3JBZnRlcj0iMjAyMi0wMS0yNFQxMToxMzoyMy45NDFaIj48QXVkaWVuY2VSZXN0cmljdGlvbj48QXVkaWVuY2U+aHR0cHM6Ly9zYW1sLmNsb3VkLmNvbTwvQXVkaWVuY2U+PC9BdW"
		"RpZW5jZVJlc3RyaWN0aW9uPjwvQ29uZGl0aW9ucz48QXR0cmlidXRlU3RhdGVtZW50PjxBdHRyaWJ1dGUgTmFtZT0iY2lwX3NpZCI+PEF0dHJpYnV0ZVZhbHVlPlMtMS01LTIxLTk2MzA4MjY2Ni0zMTQyODE3NjMwLTM4OTQ2ODk5OTUtNjEwNDQ3PC9BdHRyaWJ1dGVWYWx1ZT48L0F0dHJpYnV0ZT48QXR0cmlidXRlIE5hbWU9ImNpcF91cG4iPjxBdHRyaWJ1dGVWYWx1ZT5DVzFfTG9hZFRlc3RpbmdfMTAwOUBsb2dpc3RpY3MuY29ycDwvQXR0cmlidXRlVmFsdWU+PC9BdHRyaWJ1dGU+PEF0dHJpYnV0ZSBOYW1lPSJjaXBfZW1haWwiPjxBdHRyaWJ1dGVWYWx1ZT5DVzFfTG9hZFRlc3RpbmdfMTAwOUBsb2dpc3RpY3MuY29ycDwvQXR0cmlidXRlVmFsdWU+PC9BdHRyaWJ1dGU+PEF0dHJpYnV0ZSBOYW1lPSJjaXBfb2lkIj48QXR0cmlidXRlVmFsdWU+YWIxVS9ZbXM1a3U2anllOW5CVWY2UT09PC9BdHRyaWJ1dGVWYWx1ZT48L0F0dHJpYnV0ZT48L0F0dHJpYnV0ZVN0YXRlbWVudD48QXV0aG5TdGF0ZW1lbnQgQXV0aG5JbnN0YW50PSIyMDIyLTAxLTI0VDEwOjEzOjIzLjgxMFoiPjxBdXRobkNvbnRleHQ+PEF1dGhuQ29udGV4dENsYXNzUmVmPnVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDphYzpjbGFzc2VzOlBhc3N3b3JkUHJvdGVjdGVkVHJhbnNwb3J0PC9BdXRobkNvbnRleHRDbGFzc1JlZj48L0F1dGhuQ29udGV4dD48L0F1dGhuU3RhdGVtZW50PjwvQXNzZXJ0aW9uPjwvc2FtbHA6UmVzcG9uc2U+", ENDITEM,
		"Name=RelayState", "Value=wFE7BqZPSjWBmBBioyCYjw==", ENDITEM,
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='DY_BboIwAED_hfMmUMVs3mZa3YwtEwsNDRdsjW2h4qQE7bJ_H9f3Lu_9BqKT52AVYIA8tvmzpJkmECcpXWsO100JNhbDiYGd5SYfybYExDQxhyXgDEfEX5IUopHYjSY2M4SiBWYoIVB4ohNfsrjfX7P8eIwXGV13rChUgVRxmqsfRg-gZmLgdtMLkA9y2z6J2TUSKi1pNKY6enx55FN4iDG8zFPwtjh_8mVt80jCj3fsO4ePePINwBBFxLg7Z82jBq3DRqlvipZ7igw26JnCy9R9mAcvwXBvp2Hl3K1fVWEV1kJ0w9X1r7KvB6fG82km2m6QM9HZKuy0FFV4vwV__w' 
Name ='webviewResponseId' 
Type ='Rule' 
AppName ='Citrix_XenApp' 
RuleName ='webviewResponseId'*/
	web_reg_save_param_attrib(
		"ParamName=webviewResponseId",
		"TagName=input",
		"Extract=value",
		"Name=webviewResponseId",
		SEARCH_FILTERS,
		"RequestUrl=*/rp*",
		LAST);

	web_submit_data("rp",
		"Action=https://accounts-dsauthweb.cloud.com/oidc/rp",
		"Method=POST",
		"TargetFrame=_self'/",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t34.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=code", "Value=M2EzMmUyYTRiNDM5OTBiZDBkY2FmMDRiN2JmZjUwNGY2Njk1ZDY2ZWM0Nzg5ODEwNmFiNmRjNTE4MWE5NDczNi5zYW1sLnRUSS14RTBoWVVhVEhVb3hqWTQ2aWcuZmFsc2Uu{CorrelationParameter_2}", ENDITEM,
		"Name=scope", "Value=openid profile email ctx_principal_aliases ctx_universal cip_credentials", ENDITEM,
		"Name=state", "Value={state}", ENDITEM,
		"Name=session_state", "Value={session_state}", ENDITEM,
		LAST);

	web_submit_data("Bounce",
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/Bounce",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://accounts-dsauthweb.cloud.com/",
		"Snapshot=t35.inf",
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
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9102.7b9cffbd2d5d96f128b9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("envelope_6",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:26.944Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"ceaa09070ae340fea5b1aa3d07344dd0\",\"init\":true,\"started\":\"2022-01-24T10:13:26.943Z\",\"timestamp\":\"2022-01-24T10:13:26.943Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_url("StoreWeb_4", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/e86d2642f412b9493b14.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://cips-iws-prod-weu-cip-cdn.azureedge.net/iwsprodweucip-container/womkdccyy46o-c786167b-5dd1-509a-8071-272c84f57d92-logonLogo-l0nOmghv", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=Sso/Proxy?destination=https%3A%2F%2Fwsp.eu.iws.cloud.com%2Fuser-personalization%2FuserPreferences", ENDITEM, 
		LAST);

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("ResumeForms", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/ResumeForms", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/xml", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=StateContext", "Value=", ENDITEM, 
		"Name=webviewResponseId", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8121.f4f028f849af0bfe6c35.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5063.287c9f9aca2f4de9e890.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/6724.fad10bcfca5388e10c52.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/2834.7edff6e875abd5b233cc.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/4933.04f88ddf4aadc0e3ecfa.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9128.aa95fb80d257f578d09e.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8784.af23dc3a89c4ee264b8a.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7032.9986872c4ff8582862a9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("envelope_7",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t40.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:28.926Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"ceaa09070ae340fea5b1aa3d07344dd0\",\"init\":false,\"started\":\"2022-01-24T10:13:26.943Z\",\"timestamp\":\"2022-01-24T10:13:28.924Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/9253.d92f1f6d4d25151742f9.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/8148.b5f3fb7bd6cbbb131adb.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);

	web_custom_request("envelope_8",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t41.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:28.927Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"20eb2719756e4d9f9f5c3267fbfbdadf\",\"init\":true,\"started\":\"2022-01-24T10:13:28.924Z\",\"timestamp\":\"2022-01-24T10:13:28.924Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1832.22bc2554e6fbc9748f04.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);

	web_add_cookie("IS_WEBVIEW_LOGON=true; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("GetUserDetails_2", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/Authentication/GetUserDetails", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_custom_request("ocsp.digicert.com_9", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\\xBB\\x1F\\xF7&\\x19W\\xBF?\\x14\\xA03$\\xBFb\\xF9", 
		EXTRARES, 
		"Url=https://wsp.eu.iws.cloud.com/user-personalization/endpoints", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("List", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/List", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"resourceDetails\":\"Full\",\"acceptsCachedResults\":true}", 
		EXTRARES, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/657.a1903cf1253b5d683a35.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/1937.b052b3869821645d36ef.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3369.a5944d6bc4cca698293d.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM, 
		LAST);

	web_custom_request("envelope_9",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:30.073Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"20eb2719756e4d9f9f5c3267fbfbdadf\",\"init\":false,\"started\":\"2022-01-24T10:13:28.924Z\",\"timestamp\":\"2022-01-24T10:13:30.072Z\",\"status\":\"exited\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		LAST);

	web_custom_request("envelope_10",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-24T10:13:30.076Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"800c229e1fa747ec8f657b72721eba87\",\"init\":true,\"started\":\"2022-01-24T10:13:30.072Z\",\"timestamp\":\"2022-01-24T10:13:30.072Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		EXTRARES,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/4ba4759c3e98938156d7.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/1cb825ff043ef7521574.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/f6ebd504e3b19c186177.woff2", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		"URL=https://radar.cedexis.com/1621860284/stub.js", "Referer=https://cevalogistics.cloud.com/", ENDITEM,
		LAST);

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("List_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/List", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"resourceDetails\":\"Full\",\"acceptsCachedResults\":false}", 
		EXTRARES, 
		"Url=https://normandy.cdn.mozilla.net/api/v1/", "Referer=", ENDITEM, 
		LAST);

	return 0;
}