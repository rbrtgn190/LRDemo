// Recorded 1024*768
Action()
{
	char shipmentID[16]; // Selected shipmentID
	char window_name[256];
	char text_buffer[8];
	int ctrx_ret = -1;
	int tryBruteForce = 0;
	int i;
	
	ctrx_set_waiting_time(15); // TODO : remove debug
	
	//ctrx_set_connect_opt(ICAFILE, "YzRiNTlkNDQtYTg1MS00OGE3LWJlY2ItM2MxYmFiZjg3Y2Y1LkNhcmdvV2lzZSBMb2FkVGVzdA-- (9).ica");
	ctrx_set_connect_opt(ICAFILE, "C:\\Users\\demo\\Downloads\\YzRiNTlkNDQtYTg1MS00OGE3LWJlY2ItM2MxYmFiZjg3Y2Y1LkNhcmdvV2lzZSBMb2FkVGVzdA-- (36).ica");

	ctrx_wait_for_event("LOGON", CTRX_LAST);

	lr_think_time(21);

	//ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, -8, -8, 1041, 785, "snapshot86", CTRX_LAST); // CargoWise main window
	// Check if CargoWise main window is opened. If not, migth be a session from previous iteration, then try to close unexpected windows
	ctrx_ret = ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, -8, -8, 1041, 785, "snapshot86", CONTINUE_ON_ERROR, CTRX_LAST); // CargoWise main window
	if (ctrx_ret != E_OK) { // TODO : refactor as ctrx_close_if_exist
		ctrx_get_window_name(window_name, CTRX_LAST);
		lr_output_message(">>> Current Active Window : %s", window_name);
		
		// 
		if (strcmp(window_name, "Windows sign-in") == 0 || strcmp(window_name, "") == 0 ) {
			// Search for "Edit Shipment * - CEVTS1 - TESTING - Branch: CEVA "
			if (ctrx_win_exist("Edit Shipment *", 1, CTRX_LAST) == E_OK) {
			    ctrx_activate_window("Edit Shipment *", CTRX_LAST); // If window does not exist, it will abort the execution // Activate don't allow * ?!?
				ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); //  ALT+F4 : Close active window
				ctrx_unset_window("Edit Shipment *", CONTINUE_ON_ERROR, CTRX_LAST);					
			} else {
				tryBruteForce = 1; // true
			}
			
			// Search for "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland"
			if (ctrx_win_exist("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", 1, CTRX_LAST) == E_OK) {
			    ctrx_activate_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", CTRX_LAST);
				ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); //  ALT+F4 : Close active window
				ctrx_unset_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", CONTINUE_ON_ERROR, CTRX_LAST);			    	   
			} else {
				tryBruteForce = 1; // false
			}		

			if (tryBruteForce == 1) {
				lr_output_message(">>> Executing brute force cleanup");
				for (i=0;i<5;i++) {
					ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); //  ALT+F4 : Close active window
					sleep(1*1000);
				}
				tryBruteForce = 0;
			}
		} else {
		
			// 
			if (strcmp(window_name, "Edit Shipment * - CEVTS1 - TESTING - Branch: CEVA ") == 0) { // TODO strcmp substring (due to variable shipmentID)
				ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); //  ALT+F4 : Close active window
				ctrx_unset_window(window_name, CONTINUE_ON_ERROR, CTRX_LAST);
				
				ctrx_activate_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", CONTINUE_ON_ERROR, CTRX_LAST);
				ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); //  ALT+F4 : Close active window
				ctrx_unset_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", CONTINUE_ON_ERROR, CTRX_LAST);		
			}
			
			if (strcmp(window_name, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland") == 0) {
				ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); //  ALT+F4 : Close active window
				ctrx_unset_window(window_name, CONTINUE_ON_ERROR, CTRX_LAST);			
			}
		}
	}
	// TODO : Else and log transaction in error

	// Maximize CargoWise main window	
	ctrx_key(" ", MODIF_ALT, "", CTRX_LAST);
	ctrx_key("x", MODIF_ALT, "", CTRX_LAST);
	
	
	ctrx_key("é", MODIF_CONTROL, "", CTRX_LAST); // CTRL+2 : Operate

	//ctrx_mouse_click(140, 118, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot88", CTRX_LAST); // Forwarding
	ctrx_mouse_click(151, 125, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot88", CTRX_LAST); // Forwarding

	// TODO Insert sync on menu to be there
	//ctrx_mouse_click(45, 418, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot91", CTRX_LAST); // Shipments
	ctrx_mouse_click(36, 418, LEFT_BUTTON, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot91", CTRX_LAST); // Shipments

	lr_think_time(11);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", ACTIVATE, 7, 94, 1011, 574, "snapshot92", CTRX_LAST);
	
	ctrx_key(" ", MODIF_ALT, "", CTRX_LAST);
	ctrx_key("x", MODIF_ALT, "", CTRX_LAST); // Maximize

	ctrx_mouse_click(368, 270, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot93", CTRX_LAST); // Find


	lr_think_time(7);

	
	ctrx_sync_on_text_ocr(707, 247, 39, 13, "Found", "NULL=snapshot_1", CONTINUE_ON_ERROR, CTRX_LAST); // TODO sync is done too early... ? ! ? // TODO review coordinates
	ctrx_get_text_ocr(NULL, 707, 247, 39, 13, "snapshot_3", text_buffer, CTRX_LAST); // TODO : remove debug 
	lr_output_message(">>> Get Text 'Found' : %s", text_buffer); // TODO : remove debug
	
	//ctrx_get_text_ocr(NULL, 43, 398, 86, 19, "ShipmentID", shipmentID, CTRX_LAST); // sync on text to ensure full list is loaded (message "Found xxx records) // TODO review coordinates
	ctrx_get_text_ocr(NULL, 35, 297, 85, 15, "ShipmentID", shipmentID, CTRX_LAST);// sync on text to ensure full list is loaded (message "Found xxx records) 
	lr_output_message(">>> Selected ShipmentID : %s", shipmentID); // TODO create an VUser outout file
	

	//ctrx_mouse_click(17, 310, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot94", CTRX_LAST); // Select first line
	ctrx_mouse_click(20, 302, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot94", CTRX_LAST); // Select first line


	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST); // ENTER : Open selected Shipment

	lr_think_time(12);

	//ctrx_sync_on_window("Edit Shipment SCV2100062122 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot96", CTRX_LAST); // Edit shipment window
	ctrx_sync_on_window("Edit Shipment * - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot96", CTRX_LAST); // Edit shipment window
	ctrx_key(" ", MODIF_ALT, "", CTRX_LAST);
	ctrx_key("x", MODIF_ALT, "", CTRX_LAST); // Maximize
	
	//ctrx_sync_on_bitmap(203 , 187 , 34 , 22 , "9dba50fa8ef89e5e0a6a19baf14f2420|4e0863ae2e92ad6e4508901927926715", CTRX_LAST);
	ctrx_sync_on_bitmap(194, 172, 38, 23, "29fda34b1703a863de6698e1bd4aa5ce", CTRX_LAST);

	//ctrx_mouse_click(529, 266, LEFT_BUTTON, 0, "Edit Shipment SCV2100062122 - CEVTS1 - TESTING - Branch: CEVA =snapshot97", CTRX_LAST); // Enter description text field
	ctrx_mouse_click(394, 258, LEFT_BUTTON, 0, "Edit Shipment * - CEVTS1 - TESTING - Branch: CEVA =snapshot97", CTRX_LAST); // Enter description text field

	ctrx_key("a", MODIF_CONTROL, "", CTRX_LAST); // CTRL+A : select all text of the description filed

	ctrx_type("LOAD TEST {vuserid} {timestamp}", "", CTRX_LAST); // Edit description

	lr_think_time(4);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST); // TAB : exit from description field

	//ctrx_mouse_click(849, 710, LEFT_BUTTON, 0, "Edit Shipment SCV2100062122 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", CTRX_LAST); // Save and close
	//ctrx_mouse_click(849, 710, LEFT_BUTTON, 0, "Edit Shipment * - CEVTS1 - TESTING - Branch: CEVA =snapshot100", CTRX_LAST); // Save and close
	ctrx_key("s", MODIF_SHIFT | MODIF_CONTROL, "", CTRX_LAST);// Save and close

	lr_think_time(12);

	
	// TODO : Wait for Save dialog to close before deal with Shipments window
	// TODO : or sync on bitmap
	// TODO : or ctrx_sync_on_obj_info("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", 0, 0, FOCUSED, "TRUE", CTRX_LAST );
	// TODO : or insert check on bitmap / Text ?
	// wait for Save dialog to appear and become active
	ctrx_set_window("Please Wait...", WIN_ACTIVE, CTRX_LAST);
	// wait fir Save dialog to close
	ctrx_unset_window("Please Wait...", CTRX_LAST);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", ACTIVATE, 7, 94, 1011, 574, "snapshot101", CTRX_LAST); // Shipments window

	ctrx_mouse_click(477, 13, LEFT_BUTTON, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot102", CTRX_LAST); // Select title window bar (ensure Shipments window is active)

//	ctrx_key("ALT_KEY", 0, "", CTRX_LAST); // ?

	lr_think_time(12);

	ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); // ALT+F4 : Close Shipments window

	lr_think_time(6);

	ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, -8, -8, 1041, 785, "snapshot107", CTRX_LAST); // CargoWise main window

//	ctrx_key("&", MODIF_CONTROL, "", CTRX_LAST); // ?

	ctrx_key("F4_KEY", MODIF_ALT, "", CTRX_LAST); //  ALT+F4 : Close CargoWise main window

	ctrx_logoff(CTRX_NORMAL_LOGOFF, CTRX_LAST);

	return 0;
}