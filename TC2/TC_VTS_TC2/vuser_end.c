//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_end()
{
	truclient_step("1", "Evaluate JavaScript code TC.vtcDisconnect()", "snapshot=End_1.inf");
	truclient_step("2", "Execute VTS.vtcDisconnect ( [vtsName] )", "snapshot=End_2.inf");

	return 0;
}
