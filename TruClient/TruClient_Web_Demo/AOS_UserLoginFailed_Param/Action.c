//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Open AOS URL");
	truclient_step("1", "Navigate to 'http://www.advantageonlineshopping.com'", "snapshot=Action_1.inf");
	lr_end_transaction("Open AOS URL",0);
	truclient_step("2", "Click on element (1)", "snapshot=Action_2.inf");
	truclient_step("3", "Click on username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Type User in username textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Password label", "snapshot=Action_5.inf");
	truclient_step("6", "Type ** in Password passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on SIGN IN button", "snapshot=Action_7.inf");
	truclient_step("8", "Verify Incorrect user name or... 's Visible Text contains Incorrect user name or password.", "snapshot=Action_8.inf");
	truclient_step("9", "Click on CloseDark", "snapshot=Action_9.inf");

	return 0;
}
