//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Execute TC.userId", "snapshot=Init_1.inf");
	truclient_step("2", "Execute TC.groupName", "snapshot=Init_2.inf");
	truclient_step("3", "Execute VTS.vtcConnect ( 'nimbusserver' , 4888 , [vtsName] )", "snapshot=Init_3.inf");
	truclient_step("4", "Execute VTS.vtcPopCells ( [vtsName] )", "snapshot=Init_4.inf");
	truclient_step("5", "Evaluate JavaScript code TC.log('vPopedCells : ' ...Cells.Password);", "snapshot=Init_5.inf");
	truclient_step("6", "Execute VTS.vtcGetCell ( 'UserName' , TC.userId , [vtsName] )", "snapshot=Init_6.inf");
	truclient_step("7", "Execute VTS.vtcGetCell ( 'Password' , TC.userId , [vtsName] )", "snapshot=Init_7.inf");
	truclient_step("8", "Execute TC.log ( 'GroupName : ' + vGroupN... : ' + vPassword , 'Standard' )", "snapshot=Init_8.inf");
	truclient_step("9", "Execute VTS.vtcDisconnect ( [vtsName] )", "snapshot=Init_9.inf");

	return 0;
}
