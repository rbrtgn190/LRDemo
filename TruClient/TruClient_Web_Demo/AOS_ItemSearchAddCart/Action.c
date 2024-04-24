//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Open AOS URL");
	truclient_step("1", "Navigate to 'http://www.advantageonlineshopping.com'", "snapshot=Action_1.inf");
	lr_end_transaction("Open AOS URL",0);
	lr_start_transaction("Search and Select Item");
	truclient_step("2", "Click on LAPTOPS Shop Now link", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Laptop", "snapshot=Action_3.inf");
	lr_end_transaction("Search and Select Item",0);
	lr_start_transaction("Add to cart");
	truclient_step("4", "Click on ADD TO CART button", "snapshot=Action_4.inf");
	lr_end_transaction("Add to cart",0);
	lr_start_transaction("Home Page");
	truclient_step("5", "Click on HOME link", "snapshot=Action_5.inf");
	lr_end_transaction("Home Page",0);
	truclient_step("6", "Click on element (1)", "snapshot=Action_6.inf");
	truclient_step("7", "Click on username textbox", "snapshot=Action_7.inf");
	truclient_step("8", "Type john in username textbox", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Password label", "snapshot=Action_9.inf");
	truclient_step("10", "Type ** in Password passwordbox", "snapshot=Action_10.inf");
	lr_start_transaction("LoginFailed");
	truclient_step("11", "Click on SIGN IN button", "snapshot=Action_11.inf");
	truclient_step("12", "Verify Incorrect user name or... 's Visible Text contains Incorrect user name or password.", "snapshot=Action_12.inf");
	lr_end_transaction("LoginFailed",0);
	truclient_step("13", "Click on CloseDark", "snapshot=Action_13.inf");
	lr_start_transaction("EmptyCart");
	truclient_step("15", "Click on button (1) button", "snapshot=Action_15.inf");
	truclient_step("17", "Click on element (1)", "snapshot=Action_17.inf");
	truclient_step("19", "Click on CONTINUE SHOPPING link", "snapshot=Action_19.inf");
	lr_end_transaction("EmptyCart",0);

	return 0;
}
