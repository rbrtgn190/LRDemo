//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_end()
{
	truclient_step("1", "Execute VTS.vtcDisconnect ( 'DEMO' )", "snapshot=End_1.inf");

	return 0;
}
