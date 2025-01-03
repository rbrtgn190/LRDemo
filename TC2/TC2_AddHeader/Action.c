//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Evaluate JavaScript code Utils.addAutoHeader('Hea...ercool', false) ", "snapshot=Action_1.inf");
	truclient_step("2", "Navigate to https://www.wikipedia.org/", "snapshot=Action_2.inf");
	truclient_step("3", "Navigate to https://www.opentext.com/", "snapshot=Action_3.inf");
	return 0;
}
