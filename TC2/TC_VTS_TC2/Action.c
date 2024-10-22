//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Evaluate JavaScript code var vendeur = TC.vtcSear...eur, 'Standard')", "snapshot=Action_1.inf");
	truclient_step("2", "Execute VTS.vtcSearchRow ( 'Vendeur' , 'Titi' , ';' , [vtsName] )", "snapshot=Action_2.inf");
	truclient_step("3", "Execute TC.log ( vVendeur , 'Standard' )", "snapshot=Action_3.inf");
	truclient_step("4", "Execute TC.outputMessage ( eval(vVendeur) )", "snapshot=Action_4.inf");

	return 0;
}
