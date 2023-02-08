//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Wait 3 seconds", "snapshot=Action_1.inf");
	truclient_step("2", "Navigate to 'http://advantageonlineshopping.com/'", "snapshot=Action_2.inf");

	return 0;
}
