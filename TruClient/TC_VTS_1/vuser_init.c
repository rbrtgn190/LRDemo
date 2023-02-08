//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Evaluate JavaScript code vUserId=TCA.userId.then(...rror(error); });", "snapshot=Init_1.inf");
	truclient_step("2", "Execute TC.outputMessage ( 'User : ' + vUserId + ' ... ' + vScenarioId )", "snapshot=Init_2.inf");
	truclient_step("3", "Execute [Unspecified]", "snapshot=Init_3.inf");
	truclient_step("4", "Execute VTS.vtcConnect ( 'nimbusserver' , 4888 , [vtsName] )", "snapshot=Init_4.inf");
	truclient_step("5", "Execute VTS.vtcGetCell ( 'UserName' , vUserId , [vtsName] )", "snapshot=Init_5.inf");
	truclient_step("6", "Execute VTS.vtcGetCell ( 'Password' , vUserId , [vtsName] )", "snapshot=Init_6.inf");
	truclient_step("7", "Execute TC.log ( 'User : ' + vUserId + ' ... : ' + vPassword , 'Standard' )", "snapshot=Init_7.inf");
	truclient_step("8", "Execute VTS.vtcDisconnect ( [vtsName] )", "snapshot=Init_8.inf");

	return 0;
}
