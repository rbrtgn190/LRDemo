#include <stdio.h>
#include <string.h>
 
Action()
{
	char * tmp;
    FILE* file;
    int i;

		
    #ifdef unix
        char * filename = "/tmp/myfile.txt";
    #else
    	char filename[1024];
	    if (tmp = (char *)getenv("TEMP"))
	        lr_output_message ("Temp Dir = %s", tmp);
	    else {
	        lr_output_message ("TEMP environment variable undefined");
	        if (tmp = (char *)getenv("TMP"))
	        	lr_output_message ("Temp Dir = %s", tmp);
		    else {
		        lr_output_message ("TEMP environment variable undefined");
		        return -1;
	        }
	    }
        strcpy(filename, tmp);
        strcat(filename, "\\");
    	strcat(filename, "myfile.txt");
    #endif
    lr_output_message ("Full path of file is %s", filename);
 	lr_output_message("host : %s", lr_get_host_name()); 
      
      lr_start_transaction("GetFileFromGitLab");
 
      // ------------- Request file raw content
      
      // -- Save file content onto parameter 'fileContent'
      web_reg_save_param_ex(
            "ParamName=fileContent",
            "LB=",
            "RB=",
            SEARCH_FILTERS,
            "Scope=BODY",
            LAST);
 
      // -- Add authentication TOKEN header
      web_add_header("PRIVATE-TOKEN",
            "glpat-gYeUpTqPiqNx43Nrceo3");
 
      // -- Request
      web_custom_request("web_custom_request",
            "URL=http://nimbusserver.aos.com:180/api/v4/projects/1/repository/files/myfile.txt/raw?ref=main",
            "Method=GET",
            "TargetFrame=",
            "Resource=0",
            "Referer=",
            "Body=",
            LAST);
 
      lr_end_transaction("GetFileFromGitLab", LR_AUTO);
      
      // -- Log file content
      lr_log_message("----%s----", lr_eval_string("{fileContent}"));
      
      
      // ---- Save file content onto file
      
      // -- create file, overwriting mode
    if ((file = fopen(filename, "w+")) == NULL) {
        lr_output_message ("Unable to create %s", filename);
        return -1;
    }
      
      // -- write to file
      //i = fwrite(lr_eval_string("{fileContent}"), sizeof(lr_eval_string("{fileContent}")), sizeof(lr_eval_string("{fileContent}")), file);
    i = fprintf (file, "%s", lr_eval_string("{fileContent}"));
 
      if (i > 0)
        lr_output_message ("Successfully wrote %d record", i);
   
 
    // -- close file handle
    fclose(file);
 
 
      
      return 0;
}

