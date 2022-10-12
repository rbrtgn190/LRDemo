//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Evaluate JavaScript code TC.vtcConnect('nimbusser...aos.com','4888')", "snapshot=Init_1.inf");
	truclient_step("2", "Execute VTS.vtcConnect ( 'nimbusserver.aos.com' , 4888 , [vtsName] )", "snapshot=Init_2.inf");

	return 0;
}
