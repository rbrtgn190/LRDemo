Action()
{
	int id, scid;
	char *vuser_group;
	lr_whoami(&id, &vuser_group, &scid);
	lr_message( "Group: %s, vuser id: %d, scenario id %d, param : %s", vuser_group, id, scid, lr_eval_string("{myParam}"));
	//lr_output_message("{myParam}");

	return 0;
}
