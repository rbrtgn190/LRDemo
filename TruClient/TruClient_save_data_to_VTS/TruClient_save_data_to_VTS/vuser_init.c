//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Execute VTS.vtcConnectEx ( 'nimbusserver.aos.com' , 4888 , [userName] , [password] , [domain] , [vtsName] )", "snapshot=Init_1.inf");

	return 0;
}
