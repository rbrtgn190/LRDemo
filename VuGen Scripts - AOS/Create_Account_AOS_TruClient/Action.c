//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("AOS_URL");
	truclient_step("1", "Navigate to URL", "snapshot=Action_1.inf");
	lr_end_transaction("AOS_URL",0);
	lr_start_transaction("Create_Account");
	lr_start_transaction("Login_window");
	truclient_step("3", "Click on element (1)", "snapshot=Action_3.inf");
	lr_end_transaction("Login_window",0);
	lr_start_transaction("New_Account_link");
	truclient_step("4", "Click on CREATE NEW ACCOUNT link", "snapshot=Action_4.inf");
	lr_end_transaction("New_Account_link",0);
	lr_start_transaction("Account_info");
	truclient_step("5", "Click on Username label", "snapshot=Action_5.inf");
	truclient_step("6", "Type davidm1 in NOTICEThis is a demo... textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Email label", "snapshot=Action_7.inf");
	truclient_step("8", "Type david1@gmail.com in *Username Use 5 character... textbox", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Password label", "snapshot=Action_9.inf");
	truclient_step("10", "Type ******** in NOTICEThis is a demo... passwordbox", "snapshot=Action_10.inf");
	truclient_step("11", "Click on Confirm password label", "snapshot=Action_11.inf");
	truclient_step("12", "Type ******** in *Password Use 4 character... passwordbox", "snapshot=Action_12.inf");
	truclient_step("13", "Click on First Name label", "snapshot=Action_13.inf");
	truclient_step("14", "Type David in NOTICEThis is a demo... textbox", "snapshot=Action_14.inf");
	truclient_step("15", "Click on First Name Use 2 character... textbox", "snapshot=Action_15.inf");
	truclient_step("16", "Type Morgan in First Name Use 2 character... textbox", "snapshot=Action_16.inf");
	truclient_step("17", "Click on NOTICEThis is a demo... textbox", "snapshot=Action_17.inf");
	truclient_step("18", "Type 529987145 in NOTICEThis is a demo... textbox", "snapshot=Action_18.inf");
	truclient_step("19", "Select United States from NOTICEThis is a demo... listbox", "snapshot=Action_19.inf");
	truclient_step("20", "Click on AfganistanAlbaniaAlgeriaAmerican... textbox", "snapshot=Action_20.inf");
	truclient_step("21", "Type New york in AfganistanAlbaniaAlgeriaAmerican... textbox", "snapshot=Action_21.inf");
	truclient_step("22", "Click on NOTICEThis is a demo... textbox", "snapshot=Action_22.inf");
	truclient_step("23", "Type 768 9th. Avenue in NOTICEThis is a demo... textbox", "snapshot=Action_23.inf");
	truclient_step("24", "Click on State / Province / Region label", "snapshot=Action_24.inf");
	truclient_step("25", "Type New York in Address Use maximum... textbox", "snapshot=Action_25.inf");
	truclient_step("26", "Click on NOTICEThis is a demo... textbox", "snapshot=Action_26.inf");
	truclient_step("27", "Type 5521495 in NOTICEThis is a demo... textbox", "snapshot=Action_27.inf");
	lr_end_transaction("Account_info",0);
	lr_start_transaction("Agreement_AOS");
	truclient_step("28", "Click on I agree to the www.Advan...eShopping.com... checkbox", "snapshot=Action_28.inf");
	lr_end_transaction("Agreement_AOS",0);
	lr_start_transaction("Register_Account");
	truclient_step("29", "Click on REGISTER button", "snapshot=Action_29.inf");
	lr_end_transaction("Create_Account",0);
	lr_end_transaction("Register_Account",0);
	lr_start_transaction("Home_page");
	truclient_step("30", "Click on HOME link", "snapshot=Action_30.inf");
	lr_end_transaction("Home_page",0);

	return 0;
}
