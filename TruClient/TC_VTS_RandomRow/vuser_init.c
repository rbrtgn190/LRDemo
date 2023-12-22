//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Execute VTS.vtcConnect ( 'nimbusserver' , 4888 , 'myVTS' )", "snapshot=Init_1.inf");
	truclient_step("2", "Evaluate JavaScript code TCA.vtcConnect('nimbusse...ror(error); });", "snapshot=Init_2.inf");
	truclient_step("3", "Execute TC.outputMessage ( userName )", "snapshot=Init_3.inf");
	truclient_step("4", "Execute VTS.vtcDisconnect ( [vtsName] )", "snapshot=Init_4.inf");

	return 0;
}
