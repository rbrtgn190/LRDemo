//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Wait 5 Seconds", "snapshot=Action_1.inf");
	truclient_step("2", "Evaluate JavaScript code Utils.addAutoHeader('Hea...ercool', false) ", "snapshot=Action_2.inf");
	truclient_step("3", "Navigate to https://www.wikipedia.org/", "snapshot=Action_3.inf");
	truclient_step("4", "Wait 180 Seconds", "snapshot=Action_4.inf");
	truclient_step("5", "Navigate to https://www.opentext.com/", "snapshot=Action_5.inf");
	truclient_step("6", "Take snapshot", "snapshot=Action_6.inf");
	truclient_step("7", "Navigate to http://localhost:3000", "snapshot=Action_7.inf");
	truclient_step("8", "Take snapshot", "snapshot=Action_8.inf");
	return 0;
}
