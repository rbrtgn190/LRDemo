//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("01_Login");
	truclient_step("1", "Navigate to https://microfocus.lightning.force.com/", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Internal SSO Element", "snapshot=Action_2.inf");
	truclient_step("3", "Login", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Type jeang in Username TextBox", "snapshot=Action_3.1.inf");
		truclient_step("3.2", "Click on Password PasswordBox", "snapshot=Action_3.2.inf");
		truclient_step("3.3", "Type ****** in Password PasswordBox", "snapshot=Action_3.3.inf");
		truclient_step("3.4", "Click on Login Button", "snapshot=Action_3.4.inf");
	}
	truclient_step("4", "Select SMS OTP from Chain ListBox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Next Button", "snapshot=Action_5.inf");
	truclient_step("6", "Type ****** in One Time Password (OTP) PasswordBox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Next Button", "snapshot=Action_7.inf");
	lr_end_transaction("01_Login",0);
	return 0;
}
