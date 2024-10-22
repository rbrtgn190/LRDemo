//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("2", "Navigate to 'https://microfocus.my.salesforce.com/'", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Internal SSO", "snapshot=Action_3.inf");
	truclient_step("4", "Login", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Type jeang in Username textbox", "snapshot=Action_4.1.inf");
		truclient_step("4.2", "Click on Password passwordbox", "snapshot=Action_4.2.inf");
		truclient_step("4.3", "Type ****************... in Password passwordbox", "snapshot=Action_4.3.inf");
		truclient_step("4.4", "Click on Login button", "snapshot=Action_4.4.inf");
	}
	truclient_step("5", "Select SMS OTP from Chain listbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Next button", "snapshot=Action_6.inf");
	truclient_step("7", "Type ****** in One Time Password (OTP) passwordbox", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Next button", "snapshot=Action_8.inf");

	return 0;
}
