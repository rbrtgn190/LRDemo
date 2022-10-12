//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Execute TC.userId", "snapshot=Init_1.inf");
	truclient_step("2", "Execute VTS.vtcConnect ( 'nimbusserver' , 4888 , [vtsName] )", "snapshot=Init_2.inf");
	truclient_step("3", "Execute VTS.vtcGetCell ( 'UserName' , TC.userId , [vtsName] )", "snapshot=Init_3.inf");
	truclient_step("4", "Execute VTS.vtcGetCell ( 'Password' , TC.userId , [vtsName] )", "snapshot=Init_4.inf");
	truclient_step("5", "Execute TC.log ( 'User : ' + TC.userId + ... : ' + vPassword , 'Standard' )", "snapshot=Init_5.inf");
	truclient_step("6", "Execute VTS.vtcDisconnect ( [vtsName] )", "snapshot=Init_6.inf");

	return 0;
}
