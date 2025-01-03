//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Resize window to 390 px / 844 px", "snapshot=Action_1.inf");
	truclient_step("2", "Evaluate JavaScript code UtilsA.addAutoHeader('Us...ror(error); }); ", "snapshot=Action_2.inf");
	truclient_step("3", "Evaluate JavaScript code Utils.addAutoHeader('myC...eFake', false); ", "snapshot=Action_3.inf");
	lr_start_transaction("T1_SEB");
	truclient_step("4", "Navigate to https://seb.com/", "snapshot=Action_4.inf");
	lr_end_transaction("T1_SEB",0);
	truclient_step("5", "Wait 1 Seconds", "snapshot=Action_5.inf");
	truclient_step("6", "Take snapshot", "snapshot=Action_6.inf");
	return 0;
}
