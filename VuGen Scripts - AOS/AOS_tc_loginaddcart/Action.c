//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("1_Home");
	truclient_step("1", "Navigate to 'http://nimbusserver.aos.com:8000'", "snapshot=Action_1.inf");
	lr_end_transaction("1_Home",0);
	truclient_step("3", "Click on UserMenu button", "snapshot=Action_3.inf");
	lr_start_transaction("2_Login");
	truclient_step("4", "Click on username textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type UserName in username textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Password label", "snapshot=Action_6.inf");
	truclient_step("7", "Type ****************... in PasswordPassword passwordbox", "snapshot=Action_7.inf");
	truclient_step("8", "Type ****************... in PasswordPassword passwordbox", "snapshot=Action_8.inf");
	truclient_step("9", "Click on SIGN IN button", "snapshot=Action_9.inf");
	truclient_step("10", "Verify username 's Visible Text contains davidm", "snapshot=Action_10.inf");
	lr_end_transaction("2_Login",0);
	lr_start_transaction("3_BrowseSpeakers");
	truclient_step("11", "Click on SPEAKERS", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Bose Soundlink Bluetooth...", "snapshot=Action_12.inf");
	lr_end_transaction("3_BrowseSpeakers",0);
	lr_start_transaction("4_AddCart");
	truclient_step("13", "Click on ADD TO CART button", "snapshot=Action_13.inf");
	truclient_step("14", "Click on CHECKOUT button", "snapshot=Action_14.inf");
	lr_end_transaction("4_AddCart",0);
	lr_start_transaction("5_End");
	truclient_step("16", "Click on NEXT button", "snapshot=Action_16.inf");
	truclient_step("17", "Click on dvantage link", "snapshot=Action_17.inf");
	truclient_step("18", "Click on davidm JavaScript link", "snapshot=Action_18.inf");
	truclient_step("19", "Click on Sign out label", "snapshot=Action_19.inf");
	lr_end_transaction("5_End",0);

	return 0;
}
