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
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	lr_end_transaction("Search and Select Item",0);
	lr_start_transaction("Add to cart");
	truclient_step("4", "Click on ADD TO CART button", "snapshot=Action_4.inf");
	lr_end_transaction("Add to cart",0);
	lr_start_transaction("Home Page");
	truclient_step("5", "Click on HOME link", "snapshot=Action_5.inf");
	lr_end_transaction("Home Page",0);

	return 0;
}
