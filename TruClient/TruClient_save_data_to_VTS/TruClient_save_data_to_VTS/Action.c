//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://httpbin.org/#/Dynamic_data'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on GET", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Try it out button", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Execute button", "snapshot=Action_4.inf");
	truclient_step("5", "Get Visible Text from Details", "snapshot=Action_5.inf");
	truclient_step("6", "Execute TC.log ( uuid , 'Standard' )", "snapshot=Action_6.inf");
	truclient_step("7", "Execute VTS.vtcAddCell ( 'Unique IDs' , eval(uuid) , 'DEMO' )", "snapshot=Action_7.inf");

	return 0;
}
