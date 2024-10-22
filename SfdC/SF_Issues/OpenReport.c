//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

OpenReport()
{
	truclient_step("1", "Navigate to https://microfocus.light...htning/page/home", "snapshot=OpenReport_1.inf");
	truclient_step("2", "Click on Reports Link", "snapshot=OpenReport_2.inf");
	truclient_step("3", "Click on Created by Me JavascriptLink", "snapshot=OpenReport_3.inf");
	truclient_step("4", "Click on Case LR KERBEROS Link", "snapshot=OpenReport_4.inf");
	lr_start_transaction("02_GetReport");
	truclient_step("6", "Wait until Total Records Element exists", "snapshot=OpenReport_6.inf");
	truclient_step("7", "Get VisibleText from TotalRecords Element", "snapshot=OpenReport_7.inf");
	lr_end_transaction("02_GetReport",0);
	return 0;
}
