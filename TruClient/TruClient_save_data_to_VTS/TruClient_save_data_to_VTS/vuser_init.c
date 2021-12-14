//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	// VTS configured to work with SSL.  "useSSL": true.
	// for plain connection use VTS.vtcConnect API.
	
	truclient_step("1", "Execute VTS.vtcConnectEx ( 'localhost' , 8888 , [userName] , [password] , [domain] , 'DEMO' )", "snapshot=Init_1.inf");

	return 0;
}
