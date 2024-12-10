//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

OpenCase()
{
	truclient_step("1", "Navigate to https://microfocus.light...cope=userFolders", "snapshot=OpenCase_1.inf");
	truclient_step("4", "Click on JG1206 CAS#2012111212... Link", "snapshot=OpenCase_4.inf");
	truclient_step("5", "Click on Element(17) Element", "snapshot=OpenCase_5.inf");
	truclient_step("6", "Click on Printable View JavascriptLink", "snapshot=OpenCase_6.inf");
	truclient_step("7", "Activate tab #2", "snapshot=OpenCase_7.inf");
	truclient_step("9", "Click on Expand All Focusable", "snapshot=OpenCase_9.inf");
	truclient_step("15", "Get VisibleText from Case: 00975126 ~ Salesforce... Focusable", "snapshot=OpenCase_15.inf");
	truclient_step("16", "Evaluate JavaScript code TC.outputMessage(vCaseText);", "snapshot=OpenCase_16.inf");
	return 0;
}
