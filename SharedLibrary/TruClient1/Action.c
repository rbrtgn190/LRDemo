//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://www6.advantageo...&backfill=0'", "snapshot=Action_1.inf");
	truclient_step("2", "Navigate to 'https://www.advantageonlineshopping.com/'", "snapshot=Action_2.inf");
	truclient_step("3", "Drag SPEAKERS 0 px right and 1 px up", "snapshot=Action_3.inf");
	truclient_step("4", "Click on image (1) image", "snapshot=Action_4.inf");
	truclient_step("5", "Click on ADD TO CART button", "snapshot=Action_5.inf");

	return 0;
}
