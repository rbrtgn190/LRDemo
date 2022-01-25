# 1 "c:\\users\\demo\\documents\\vugen\\scripts\\ceva\\citrixica_multi1\\\\combined_CitrixICA_Multi1.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\demo\\documents\\vugen\\scripts\\ceva\\citrixica_multi1\\\\combined_CitrixICA_Multi1.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\demo\\documents\\vugen\\scripts\\ceva\\citrixica_multi1\\\\combined_CitrixICA_Multi1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/ctrxfuncs.h" 1
 















 
 



 
 
 
 
 













 
 
 
 
 






















 
















 
 
typedef enum ObjAttribute
{
	ENABLED,
	VISIBLE,
	FOCUSED,
	CHECKED,
	LINES,
	TEXT,
	CAPTURE,
	CAPTURE_LINE,
	ITEM
} eObjAttribute;

typedef enum ConnectionOptionEnum
{
	APPLICATION,
	NETWORK_PROTOCOL,
	ICAFILE,
	CLIENT_NAME
} eConnectionOption;

typedef enum WindowEventEnum
{
	CREATE,
	ACTIVATE
} eWindowEvent;




int ctrx_connect_server(char * server_name, char * username, char * password, char * domain,...);
int ctrx_nfuse_connect(char * mpcUrl, ...);
int ctrx_disconnect_server(char * server_name, ...);
int ctrx_mouse_move(long xPos, long yPos, long buttonId, long modifiers, ...);
int ctrx_mouse_down(long xPos, long yPos, long buttonId, long modifiers, char * window_name, ...);
int ctrx_mouse_up(long xPos, long yPos, long buttonId, long modifiers, char * window_name, ...);
int ctrx_mouse_click(long xPos, long yPos, long buttonId, long modifiers, char * window_name, ...);
int ctrx_mouse_double_click(long xPos, long yPos, long buttonId, long modifiers, char * window_name, ...);
int ctrx_key_down(char * keyId, long modifierState);
int ctrx_key_up(char * keyId, long modifierState);
int ctrx_key(char * keyId, long modifierState,...);
int ctrx_set_window(char * window_name, ...);
int ctrx_set_window_ex(char * window_name, long _time32, ...);
int ctrx_unset_window(char * window_name, ...);
int ctrx_type(char * data, ...);
int ctrx_set_waiting_time(long _time32);
int ctrx_save_bitmap(long xstart, long ystart, long width, long height, char * file_name);
int ctrx_get_bitmap_value(long xstart, long ystart, long width, long height, char * buffer,...);
int ctrx_sync_on_bitmap(long xstart, long ystart, long width, long height, char * hash, ...);
int ctrx_sync_on_bitmap_change(long xstart, long ystart, long width, long height,...);
int ctrx_set_connect_opt(eConnectionOption opt, char * value, ...);
int ctrx_win_exist(char * win_name, long waiting_time, ...);
int ctrx_wait_for_event(char * event_name, ...);
void ctrx_set_exception(char * title, long function, void *this_context);
void ctrx_execute_on_window(char * title, long function, void *this_context);
int ctrx_get_window_name(char * buffer, ...);
int ctrx_get_window_position(char * title, long * xpos, long * ypos, long * width, long * height, ...);
int ctrx_sync_on_window(char * window_name, eWindowEvent event, long xpos, long ypos, long width, long height, char * filename, ...);
int ctrx_activate_window(char * window_name, ...);
int ctrx_get_text(char * window_name, long xpos, long ypos, long width, long height, char * filename, char * text_buffer, ...);
int ctrx_get_text_ocr(char * window_name, long xpos, long ypos, long width, long height, char * filename, char * text_buffer, ...);
int ctrx_get_text_location(char * window_name, long *lpXPos, long *lpYPos, long *lpWidth, long *lpHeight, char * pcText, long bMatchWholeWordOnly,char * filename, ...);
int ctrx_menu_select_item(char * window_name,char * menu_path,...);
int ctrx_list_select_item(char * window_name,long xpos, long ypos,char * item,...);
int ctrx_obj_mouse_move(char * obj_desc,long xPos, long yPos, long buttonId, long modifiers,...);
int ctrx_obj_mouse_up(char * obj_desc,long xPos, long yPos, long buttonId, long modifiers, char * window_name,...);
int ctrx_obj_mouse_down(char * obj_desc,long xPos, long yPos, long buttonId, long modifiers, char * window_name,...);
int ctrx_obj_mouse_click(char * obj_desc,long xPos, long yPos, long buttonId, long modifiers, char * window_name,...);
int ctrx_obj_mouse_double_click(char * obj_desc,long xPos, long yPos, long buttonId, long modifiers, char * window_name,...);
int ctrx_obj_get_info(char * window_name,long xpos, long ypos, eObjAttribute attribute, char *value, ...);
int ctrx_button_get_info(char * window_name,long xpos, long ypos, eObjAttribute attribute, char *value, ...);
int ctrx_edit_get_info(char * window_name,long xpos, long ypos, eObjAttribute attribute, char *value, ...);
int ctrx_list_get_info(char * window_name,long xpos, long ypos, eObjAttribute attribute, char *value, ...);
int ctrx_sync_on_obj_info(char * window_name,long xpos, long ypos, eObjAttribute attribute, char *value, ...);
int ctrx_sync_on_text(long xpos, long ypos, char * value, eObjAttribute textEvent, char * window_name, ...);
int ctrx_sync_on_text_ex(long xpos, long ypos, long width, long height, char * value, char * window_name, ...);
int ctrx_sync_on_text_ocr(long xpos, long ypos, long width, long height, char * value, char * window_name, ...);
int ctrx_logoff(long force, ...);
int ctrx_get_server_name(char * buffer, ...);
int ctrx_run_published_app(char * app_name, ...);
int ctrx_get_waiting_time(long *_time32);

 



 
char	text_buffer[1024];

 
char	object_value_buffer[1024];








# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 8 "globals.h" 2

# 1 "lrw_custom_body.h" 1



 
const char * const body_variable_1 = "BodyBinary={\"type\":\"main\",\"id\":\"0f24e462-21d5-4dfd-8cde-086fde4b70a3\",\"creationDate\":\"2022-01-21T15:34:45.501Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"name\":\"Firefox\",\"version\":\"96.0.1\",\"displayVersion\":\"96.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":281,\"start\":114,\"main\":179,\"selectProfile\":196,\"afterProfileLocked\":197,\"startupCrashDetectionBegin\":915,\"startupCrashDetectionEnd\":31779,\"firstPaint\":1318,\"firstPaint2\":1385,\"sessionRestoreInit\":972,\"sessionRestored\":1436,\"createTopLevelWindow\":273,\"quitApplication\":281052,\"profileBeforeChange\":281133,\"blankWindowShown\":914,\"AMI_startup_begin\":926,\"XPI_startup_begin\":928,\"XPI_bootstrap_addons_begin\":933,\"XPI_bootstrap_addons_end\":942,\"XPI_startup_end\":943,\"AMI_startup_end\":943,\"XPI_finalUIStartup\":973,\"sessionRestore"
		"Initialized\":975,\"delayedStartupStarted\":1387,\"delayedStartupFinished\":1431,\"startupInterrupted\":0,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":2315153,\"startupWindowVisibleWriteBytes\":52921,\"startupSessionRestoreReadBytes\":15132756,\"startupSessionRestoreWriteBytes\":75205,\"activeTicks\":12},\"processes\":{\"parent\":{\"scalars\":{\"script.preloader.mainthread_recompile\":1,\"browser.startup.abouthome_cache_result\":7,\"browser.engagement.max_concurrent_tab_pinned_count\":0,\"startup.profile_selection_reason\":\"default\",\"privacy.dfpi_rollout_enabledByDefault\":2,\"dom.contentprocess.os_priority_lowered\":5,\"formautofill.availability\":false,\"browser.engagement.max_concurrent_tab_count\":1,\"a11y.backplate\":true,\"datasanitization.session_permission_exceptions\":0,\"networking.http3_enabled\":true,\"dom.contentprocess.os_priority_change_considered\":21,\"startup.seconds_since_last_os_restart\":82435,\"security.global_privacy_control_enabled\":0,\"gfx.os_compositor\":false,\"bro"
		"wser.engagement.total_uri_count_normal_and_private_mode\":15,\"browser.engagement.session_time_excluding_suspend\":281138,\"datasanitization.network_cookie_lifetimePolicy\":0,\"contentblocking.cryptomining_blocking_enabled\":true,\"browser.engagement.active_ticks\":12,\"browser.engagement.session_time_including_suspend\":281138,\"policies.count\":1,\"contentblocking.category\":0,\"security.https_only_mode_enabled_pbm\":0,\"dom.parentprocess.private_window_used\":true,\"startup.is_cold\":false,\"blocklist.mlbf_enabled\":true,\"os.environment.is_taskbar_pinned\":true,\"networking.nss_initialization\":17,\"content.process_max_precise\":7,\"security.https_only_mode_enabled\":0,\"dom.contentprocess.os_priority_raised\":7,\"os.environment.is_admin_without_uac\":true,\"networking.loading_certs_task\":59,\"timestamps.first_paint_two\":1384,\"contentblocking.fingerprinting_blocking_enabled\":true,\"os.environment.launch_method\":\"Other\",\"startup.skeleton_ui_disabled_reason\":\"Cmdline\",\"widget.dark_mode\":false"
		",\"timestamps.first_paint\":1317,\"browser.engagement.max_concurrent_window_count\":1},\"keyedScalars\":{\"telemetry.event_counts\":{\"doh#state#shutdown\":1,\"upgrade_dialog#trigger#reason\":1,\"downloads#added#fileExtension\":1,\"doh#state#rollback\":1,\"form_autocomplete#show#logins\":3,\"downloads#helpertype#unknowntype\":1},\"browser.ui.interaction.tabs_bar\":{\"cmd-closeWindow\":1},\"a11y.theme\":{\"default\":false},\"browser.engagement.sessionrestore_interstitial\":{\"deferred_restore\":1},\"browser.ui.toolbar_widgets\":{\"bookmark_pinned_pageaction-urlbar\":true,\"import-button_pinned_bookmarks-bar\":true,\"save-to-pocket-button_pinned_nav-bar-end\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"stop-reload-button_pinned_nav-bar-start\":true,\"downloads-button_pinned_nav-bar-end\":true,\"personal-bookmarks_pinned_bookmarks-bar\":true,\"menu-toolbar_pinned_off\":true,\"tabbrowser-tabs_pinned_tabs-bar\":true,\"titlebar_pinned_off\":true,\"alltabs-button_pinned_tabs-bar\":true,\"new-tab-but"
		"ton_pinned_tabs-bar\":true,\"forward-button_pinned_nav-bar-start\":true,\"menubar-items_pinned_menu-bar\":true,\"back-button_pinned_nav-bar-start\":true,\"bookmarks-bar_pinned_newtab\":true}}},\"content\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":13,\"range\":[1,10000],\"values\":{\"0\":22,\"1\":7,\"2\":3,\"3\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":525,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":3,\"2\":3,\"4\":1,\"5\":1,\"14\":1,\"17\":4,\"20\":10,\"24\":3,\"29\":2,\"34\":2,\"40\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2868,\"range\":[1,200],\"values\":{\"4\":0,\"5\":20,\"6\":2,\"8\":1,\"9\":2,\"10\":81,\"11\":3,\"12\":2,\"13\":3,\"14\":12,\"40\":1,\"46\":33,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":160,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\""
		":{\"0\":159,\"1\":1,\"2\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":280,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":2,\"2\":3,\"3\":1,\"5\":1,\"10\":16,\"12\":1,\"14\":4,\"29\":1,\"34\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":23,\"range\":[1,1000],\"values\":{\"0\":21,\"1\":5,\"2\":1,\"3\":1,\"4\":1,\"9\":1,\"10\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9415,\"range\":[1,150000],\"values\":{\"32\":0,\"40\":1,\"65\":2,\"82\":1,\"104\":1,\"132\":3,\"167\":1,\"211\":4,\"267\":5,\"338\":7,\"427\":1,\"540\":2,\"683\":1,\"863\":1,\"1091\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":5,\"range\":[1,10000],\"values\":{\"0\":26,\"1\":3,\"2\":1,\"3\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":30,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\""
		":109,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":2888,\"range\":[1,100],\"values\":{\"61\":0,\"63\":1,\"86\":1,\"88\":1,\"92\":1,\"94\":3,\"96\":1,\"98\":20,\"100\":2}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":419,\"range\":[1,120],\"values\":{\"3\":0,\"4\":11,\"5\":2,\"6\":2,\"7\":1,\"8\":2,\"10\":4,\"11\":2,\"15\":1,\"31\":1,\"42\":1,\"57\":3,\"61\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":8094,\"range\":[1,2000],\"values\":{\"0\":11,\"1\":4,\"2\":1,\"4\":2,\"6\":1,\"8\":1,\"9\":2,\"10\":2,\"11\":1,\"15\":1,\"17\":12,\"19\":8,\"22\":4,\"25\":3,\"29\":3,\"33\":4,\"44\":3,\"50\":1,\"57\":1,\"65\":2,\"75\":2,\"99\":40,\"113\":20,\"130\":1,\"149\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":160,\"range\":[1,200],\"values\":{\"2\":0,\"3\":3,\"4\":7,\"6\":17,\"7\":3,\"8\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":679,\"range\":[1,50"
		"000],\"values\":{\"0\":4,\"1\":9,\"2\":2,\"3\":3,\"7\":2,\"9\":1,\"11\":2,\"21\":1,\"25\":1,\"41\":1,\"45\":1,\"50\":1,\"108\":1,\"309\":1,\"340\":0}},\"GC_WAIT_FOR_IDLE_MS\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":4,\"range\":[1,120000],\"values\":{\"0\":25,\"1\":4,\"2\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":502312,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":134,\"23\":128,\"41\":13,\"50\":6,\"61\":34,\"74\":41,\"90\":13,\"109\":5,\"132\":32,\"194\":31,\"235\":1,\"284\":5,\"344\":1,\"416\":4,\"503\":13,\"609\":46,\"737\":14,\"892\":76,\"1080\":13,\"2318\":8,\"2805\":13,\"15625\":6,\"18910\":8,\"22886\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":15227,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":262,\"3\":172,\"5\":6,\"8\":2,\"12\":12,\"19\":43,\"30\":106,\"47\":7,\"73\":8,\"113\":13,\"176\":8,\"662\":6,\"1029\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":9040,\"range\":[1,150000000"
		"],\"values\":{\"0\":114,\"1\":165,\"2\":71,\"3\":25,\"4\":35,\"5\":31,\"6\":17,\"7\":22,\"8\":25,\"10\":24,\"12\":28,\"14\":16,\"17\":10,\"20\":14,\"24\":8,\"29\":8,\"35\":6,\"42\":7,\"50\":5,\"60\":3,\"72\":4,\"87\":3,\"105\":1,\"126\":1,\"151\":1,\"3461\":1,\"4161\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":6,\"1\":0}},\"TOTAL_CONTENT_PAGE_LOAD_TIME\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":6963,\"range\":[100,30000],\"values\":{\"0\":2,\"112\":1,\"191\":1,\"286\":1,\"340\":1,\"1456\":1,\"1733\":1,\"2458\":1,\"2605\":0}},\"HTTP_PAGE_DNS_ISSUE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,30000],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"HTTP_PAGE_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":20,\"range\":[1,30000],\"values\":{\"16\":0,\"20\":1,\"24\":0}},\"HTTP_PAGE_TLS_HANDSHAKE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1352,\"range\":[1,30000],\"values\":{\"1023\":0,\"124"
		"8\":1,\"1522\":0}},\"HTTP_PAGE_TCP_CONNECTION_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1378,\"range\":[1,30000],\"values\":{\"1023\":0,\"1248\":1,\"1522\":0}},\"HTTP_SUB_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":328,\"range\":[1,30000],\"values\":{\"0\":2,\"1\":1,\"2\":1,\"7\":2,\"20\":1,\"29\":1,\"43\":1,\"94\":1,\"115\":1,\"140\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":210,\"range\":[1,50],\"values\":{\"0\":115,\"2\":105,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":5,\"1\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14192,\"range\":[1,10000],\"values\":{\"0\":75,\"1\":13,\"2\":8,\"3\":7,\"4\":10,\"5\":10,\"6\":21,\"7\":21,\"8\":54,\"10\":54,\"12\":65,\"14\":107,\"17\":130,\"20\":149,\"24\":95,\"29\":43,\"34\":7,\"40\":6,\"48\":2,\"57\":2,\"135\":2,\"160\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bu"
		"cket_count\":50,\"histogram_type\":0,\"sum\":6480,\"range\":[1,10000],\"values\":{\"0\":53,\"1\":9,\"2\":2,\"3\":1,\"4\":3,\"5\":3,\"6\":8,\"7\":7,\"8\":19,\"10\":22,\"12\":32,\"14\":30,\"17\":15,\"20\":26,\"24\":17,\"29\":10,\"34\":19,\"40\":10,\"48\":15,\"57\":8,\"68\":11,\"81\":1,\"96\":1,\"135\":1,\"160\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"PWMGR_FORM_AUTOFILL_RESULT\":{\"bucket_count\":21,\"histogram_type\":1,\"sum\":16,\"range\":[1,20],\"values\":{\"7\":0,\"8\":2,\"9\":0}},\"PWMGR_LOGIN_PAGE_SAFETY\":{\"bucket_count\":9,\"histogram_type\":1,\"sum\":0,\"range\":[1,8],\"values\":{\"0\":2,\"1\":0}},\"PWMGR_NUM_FORM_HAS_POSSIBLE_USERNAME_EVENT_PER_DOC\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":1,\"range\":[1,21],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PWMGR_IS_USERNAME_ONLY_FORM\""
		":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":31,\"range\":[1,2],\"values\":{\"0\":31,\"1\":0}},\"WEBFONT_DOWNLOAD_TIME_AFTER_START\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14478,\"range\":[1,60000],\"values\":{\"428\":0,\"531\":1,\"1929\":3,\"2964\":2,\"3674\":0}},\"JS_PAGELOAD_EXECUTION_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":435,\"range\":[1,60000],\"values\":{\"0\":1,\"1\":1,\"8\":1,\"19\":1,\"28\":1,\"181\":2,\"200\":0}},\"JS_PAGELOAD_DELAZIFICATION_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":11,\"range\":[1,10000],\"values\":{\"0\":3,\"4\":1,\"7\":1,\"8\":0}},\"JS_PAGELOAD_BASELINE_COMPILE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":13,\"range\":[1,10000],\"values\":{\"5\":0,\"6\":1,\"7\":1,\"8\":0}},\"JS_PAGELOAD_PROTECT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12,\"range\":[1,10000],\"values\":{"
		"\"4\":0,\"5\":1,\"7\":1,\"8\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5,\"range\":[1,10000],\"values\":{\"0\":5,\"2\":1,\"3\":1,\"4\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":136,\"range\":[1,1000],\"values\":{\"0\":150,\"1\":73,\"2\":14,\"3\":3,\"4\":2,\"5\":2,\"8\":1,\"9\":0}},\"TIME_TO_NON_BLANK_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":11797,\"range\":[1,100000],\"values\":{\"92\":0,\"102\":1,\"139\":1,\"190\":1,\"321\":1,\"819\":1,\"1532\":2,\"2327\":1,\"4355\":1,\"4835\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":8101,\"range\":[1,100000],\"values\":{\"139\":0,\"154\":1,\"819\":1,\"2327\":1,\"4355\":1,\"4835\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":242,\"range\":[1,5000],\"values\":{\"0\":0,\"1\":1,\"2\":1,\"4\":2,\"8\":3,\"11\":2,\"12\":1,\"13\":2,\"14\":1,\"16\":1,\"17\":1,\"18\":1,\"19\":2,\"20\":1,\"23\":1,"
		"\"25\":0}},\"INPUT_EVENT_QUEUED_KEYBOARD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":84,\"range\":[1,5000],\"values\":{\"2\":0,\"3\":3,\"6\":1,\"8\":2,\"12\":2,\"13\":1,\"16\":1,\"17\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":10343,\"range\":[1,50000],\"values\":{\"8\":0,\"9\":1,\"50\":1,\"61\":1,\"74\":1,\"174\":1,\"309\":1,\"1433\":2,\"2316\":1,\"3743\":1,\"4120\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":11733,\"range\":[1,50000],\"values\":{\"67\":0,\"74\":1,\"119\":1,\"192\":1,\"281\":1,\"309\":1,\"666\":1,\"1433\":1,\"1577\":1,\"2316\":1,\"4120\":1,\"4535\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12109,\"range\":[1,50000],\"values\":{\"67\":0,\"74\":1,\"192\":1,\"281\":2,\"309\":1,\"807\":1,\"1433\":1,\"1577\":1,\"2316\":1,\"4120\":1,\"4535\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12124,\"range\":[1"
		",50000],\"values\":{\"67\":0,\"74\":1,\"192\":1,\"281\":2,\"309\":1,\"807\":1,\"1433\":1,\"1577\":1,\"2316\":1,\"4120\":1,\"4535\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":13351,\"range\":[1,50000],\"values\":{\"74\":0,\"81\":1,\"192\":1,\"309\":2,\"340\":1,\"1433\":1,\"1577\":1,\"1736\":1,\"2316\":1,\"4535\":1,\"4992\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":11573,\"range\":[1,50000],\"values\":{\"74\":0,\"81\":1,\"309\":2,\"340\":1,\"1433\":1,\"1736\":1,\"2316\":1,\"4535\":1,\"4992\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":11615,\"range\":[1,50000],\"values\":{\"81\":0,\"89\":1,\"309\":2,\"340\":1,\"1433\":1,\"1736\":1,\"2316\":1,\"4535\":1,\"4992\":0}},\"TIME_TO_RESPONSE_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":107,\"range\":[1,50000],\"values\":{\"45\":0,\"50\":1,\"55\":1,\"61\":0}},\"PERF_PAGE_LOAD_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0"
		",\"sum\":11242,\"range\":[1,50000],\"values\":{\"74\":0,\"81\":1,\"309\":1,\"340\":1,\"1433\":1,\"1736\":1,\"2316\":1,\"4535\":1,\"4992\":0}},\"PERF_PAGE_LOAD_TIME_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3073,\"range\":[1,50000],\"values\":{\"9\":0,\"10\":1,\"15\":1,\"28\":1,\"108\":1,\"281\":1,\"807\":1,\"1736\":1,\"1911\":0}},\"PERF_DOM_CONTENT_LOADED_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":10042,\"range\":[1,50000],\"values\":{\"67\":0,\"74\":1,\"281\":1,\"309\":1,\"807\":1,\"1433\":1,\"2316\":1,\"4120\":1,\"4535\":0}},\"PERF_DOM_CONTENT_LOADED_TIME_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1871,\"range\":[1,50000],\"values\":{\"7\":0,\"8\":1,\"14\":1,\"25\":1,\"108\":1,\"232\":1,\"605\":1,\"807\":1,\"888\":0}},\"PERF_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5540,\"range\":[1,50000],\"values\":{\"131\":0,\"144\":1,\"807\":1,\"4120\":1,\"4535\":0}},\"PERF_FIRST_CONTENTFUL_PAINT_FR"
		"OM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1615,\"range\":[1,50000],\"values\":{\"89\":0,\"98\":1,\"666\":1,\"807\":1,\"888\":0}},\"PERF_REQUEST_ANIMATION_CALLBACK_NON_PAGELOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":12,\"range\":[1,5000],\"values\":{\"0\":8,\"2\":2,\"8\":1,\"9\":0}},\"APZ_ZOOM_ACTIVITY\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":9,\"1\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":28,\"range\":[1,50],\"values\":{\"0\":126,\"2\":14,\"3\":0}},\"USE_COUNTER2_CUSTOMELEMENTREGISTRY_DEFINE_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_APPLICATIONCACHE_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_CHROME_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{"
		"\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_TOUCHLIST_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_VISUALVIEWPORT_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_WINDOW_WEBKITREQUESTANIMATIONFRAME_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignContent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignItems_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignSelf_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageRepeat_DOCUMENT\":{\"buc"
		"ket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clear_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Direction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Display_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexDirection_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexWrap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_Float_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontKerning_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSizeAdjust_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontStretch_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantCaps_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantEastAsian_DOCUMENT\":{\"bucket_count\":3,\"histogr"
		"am_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantLigatures_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantNumeric_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantPosition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontWeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_JustifyContent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,"
		"\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Position_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinecap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinejoin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextRendering_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextTransform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TouchAction_DOCUMENT\":{\"bucket_cou"
		"nt\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_UserSelect_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Visibility_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WhiteSpace_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WritingMode_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ZIndex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ClipRule_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE"
		"_COUNTER2_CSS_PROPERTY_FillRule_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexGrow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexShrink_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowX_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowY_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Opacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":"
		"2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundAttachment_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundRepeat_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},"
		"\"USE_COUNTER2_CSS_PROPERTY_BackgroundSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageOutset_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageSlice_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxShadow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Color_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Content_DOCUMENT\":{\"bucket_count\":3,\"histog"
		"ram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Cursor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Filter_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFamily_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFeatureSettings_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontLanguageOverride_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_"
		"COUNTER2_CSS_PROPERTY_FontVariantAlternates_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LetterSpacing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineHeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyleType_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Quotes_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDasharray_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDashoffset_DOCUMENT\":{\"bucket_count\":3,\"hi"
		"stogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextOverflow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextShadow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_VerticalAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WillChange_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordSpacing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"US"
		"E_COUNTER2_CSS_PROPERTY_Fill_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Stroke_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformOrigin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageSource_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextIndent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum"
		"\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinHeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingLeft_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingRi"
		"ght_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\""
		"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Bottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Left_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginLeft_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginRight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Right_DOCUMENT\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Top_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values"
		"\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Background_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPosition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTop_DOCUMENT\":"
		"{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeft_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Border_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Overflow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":"
		"4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Animation_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariant_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Margin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Outline_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Padding_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,"
		"\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Flex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextDecoration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransformOrigin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAppearance_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}"
		"},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxShadow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordWrap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexDirection_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexWrap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitJustifyContent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignContent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignItems_DOCUMENT\":"
		"{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexGrow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexShrink_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignSelf_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozBoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserSelect_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserSelect_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2]"
		",\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxDirection_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxOrient_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxPack_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTransition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROP"
		"ERTY_WebkitTransition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimation_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTapHighlightColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextSizeAdjust_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitRtlOrdering_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitLocale_DOCUMENT\":{\"bucket_count\":3,\"histog"
		"ram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}}},\"keyedHistograms\":{\"HTTPS_RR_OPEN_TO_FIRST_SENT\":{\"no_https_rr_sub\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":22204,\"range\":[1,30000],\"values\":{\"1\":0,\"2\":2,\"3\":3,\"4\":1,\"5\":1,\"7\":2,\"9\":1,\"13\":1,\"16\":1,\"94\":1,\"115\":5,\"140\":2,\"171\":7,\"209\":6,\"255\":3,\"311\":7,\"379\":9,\"462\":6,\"564\":3,\"839\":2,\"1248\":1,\"1522\":2,\"1857\":0}},\"no_https_rr_page\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1408,\"range\":[1,30000],\"values\":{\"2\":0,\"3\":1,\"1248\":1,\"1522\":0}}}},\"scalars\":{\"script.preloader.mainthread_recompile\":5,\"networking.http3_enabled\":true,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"extension\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"hist"
		"ogram_type\":0,\"sum\":3,\"range\":[1,10000],\"values\":{\"0\":3,\"3\":1,\"4\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19,\"range\":[1,10000],\"values\":{\"2\":0,\"3\":1,\"5\":1,\"10\":1,\"12\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":490,\"range\":[1,200],\"values\":{\"43\":0,\"46\":10,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":10,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":10,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19,\"range\":[1,10000],\"values\":{\"2\":0,\"3\":1,\"5\":1,\"10\":1,\"12\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"0\":2,\"2\":1,\"3\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":771,\"range\":[1,150000],\"values\":{\"82\":0,\"104\":1,\"167\":1,\"427"
		"\":1,\"540\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":1,\"range\":[1,100],\"values\":{\"0\":8,\"1\":1,\"2\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":268,\"range\":[1,100],\"values\":{\"71\":0,\"73\":1,\"96\":1,\"98\":1,\"100\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":74,\"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"10\":1,\"57\":1,\"61\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":146,\"range\":[1,2000],\"values\":{\"15\":0,\"17\":4,\"19\":1,\"22\":1,\"33\":1,\"38\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10,\"range\":[1,200],\"values\":{\"2\":0,\"3\":2,\"4\":1,\"5\":0}},\"GC_EFF"
		"ECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":249,\"range\":[1,50000],\"values\":{\"0\":1,\"15\":1,\"232\":1,\"255\":0}},\"GC_WAIT_FOR_IDLE_MS\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":3,\"range\":[1,120000],\"values\":{\"0\":1,\"3\":1,\"4\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1342472,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":148,\"23\":18,\"34\":83,\"41\":2,\"50\":28,\"61\":6,\"74\":8,\"90\":1,\"109\":11,\"132\":6,\"160\":3,\"194\":23,\"284\":5,\"344\":76,\"416\":15,\"503\":4,\"609\":26,\"737\":11,\"892\":25,\"1080\":15,\"1307\":29,\"1582\":16,\"1915\":12,\"2318\":14,\"2805\":27,\"3395\":8,\"4109\":13,\"4973\":13,\"6019\":7,\"7284\":7,\"8815\":7,\"10668\":5,\"12911\":1,\"15625\":3,\"18910\":1,\"22886\":1,\"27698\":1,\"40569\":2,\"330972\":1,\"400557\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":37163,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":166,\"3\":141,\"5\":10,\"8\":18,\"12\":111,\"1"
		"9\":78,\"30\":21,\"47\":64,\"73\":11,\"113\":16,\"176\":14,\"274\":11,\"426\":10,\"662\":6,\"1029\":3,\"1599\":1,\"2485\":1,\"3862\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":13322,\"range\":[1,150000000],\"values\":{\"0\":154,\"1\":94,\"2\":36,\"3\":18,\"4\":16,\"5\":16,\"6\":25,\"7\":31,\"8\":29,\"10\":27,\"12\":28,\"14\":46,\"17\":35,\"20\":22,\"24\":18,\"29\":9,\"35\":17,\"42\":12,\"50\":14,\"60\":9,\"72\":4,\"87\":4,\"105\":5,\"126\":2,\"151\":4,\"219\":1,\"263\":1,\"380\":1,\"457\":1,\"549\":2,\"1657\":1,\"1992\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":1,\"1\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":40,\"range\":[1,50],\"values\":{\"0\":14,\"2\":20,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,"
		"\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":6,\"1\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":12,\"1\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,10000],\"values\":{\"0\":4,\"2\":1,\"3\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":20,\"1\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":400,\"range\":[1,50000],\"values\":{\"3\":0,\"4\":1,\"55\":2,\"61\":1,\"81\":1,\"131\":1,\"144\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1074,\"range\":[1,50000],\"values\":{\"119\":0,\"131\":1,\"158\":3,\"192\":1,\"232\":1,\"255\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum"
		"\":1130,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":3,\"174\":1,\"192\":1,\"232\":1,\"255\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1135,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":3,\"174\":1,\"192\":1,\"232\":1,\"255\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1198,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":3,\"192\":1,\"232\":2,\"255\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1198,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":3,\"192\":1,\"232\":2,\"255\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1198,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":3,\"192\":1,\"232\":2,\"255\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":61,\"1\":0}},\"USE_COUNTER2_WINDOW_CHROME_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"ra"
		"nge\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"keyedHistograms\":{},\"scalars\":{\"script.preloader.mainthread_recompile\":3,\"networking.http3_enabled\":true,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"dynamic\":{\"scalars\":{},\"keyedScalars\":{}},\"gpu\":{\"histograms\":{\"CHECKERBOARD_POTENTIAL_DURATION\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1703,\"range\":[1,1000000],\"values\":{\"1023\":0,\"1347\":1,\"1774\":0}},\"COMPOSITE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":26029,\"range\":[1,1000],\"values\":{\"0\":648,\"1\":724,\"2\":6414,\"3\":2445,\"4\":535,\"5\":206,\"6\":81,\"7\":108,\"8\":44,\"9\":15,\"10\":4,\"11\":3,\"12\":5,\"14\":1,\"16\":2,\"18\":2,\"23\":1,\"26\":0}},\"GPU_PROCESS_INITIALIZATION_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":378,\"range\":[1,64"
		"000],\"values\":{\"335\":0,\"370\":1,\"409\":0}},\"KEYPRESS_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":46,\"range\":[1,200000],\"values\":{\"8\":0,\"10\":1,\"28\":1,\"36\":0}},\"MOUSEUP_FOLLOWED_BY_CLICK_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":646,\"range\":[1,200000],\"values\":{\"10\":0,\"13\":2,\"17\":1,\"22\":3,\"28\":2,\"46\":1,\"58\":1,\"74\":2,\"151\":1,\"192\":0}},\"CONTENT_FULL_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":291,\"range\":[1,1000],\"values\":{\"0\":72,\"1\":57,\"2\":66,\"3\":13,\"4\":2,\"5\":5,\"6\":1,\"7\":1,\"8\":1,\"9\":1,\"10\":0}},\"CONTENT_FRAME_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":26383,\"range\":[1,5000],\"values\":{\"8\":0,\"9\":4,\"11\":5,\"13\":7,\"15\":5,\"18\":2,\"21\":2,\"25\":1,\"29\":1,\"34\":2,\"40\":4,\"47\":3,\"55\":2,\"64\":6,\"75\":6,\"88\":8,\"103\":39,\"120\":37,\"140\":41,\"164\":20,\"192\":18,\"224\":4,\"262\":1,\"306\":0}},\"CONTENT_FRAME_TIME_VSYNC\":{\"bucket_count\":"
		"100,\"histogram_type\":1,\"sum\":28168,\"range\":[8,792],\"values\":{\"0\":0,\"8\":3,\"16\":3,\"24\":2,\"112\":10,\"120\":19,\"128\":19,\"136\":19,\"144\":15,\"152\":16,\"160\":14,\"168\":18,\"176\":2,\"184\":3,\"200\":4,\"208\":7,\"216\":5,\"224\":8,\"232\":4,\"256\":1,\"264\":3,\"272\":1,\"288\":1,\"584\":1,\"592\":0}},\"CONTENT_FRAME_TIME_WITH_SVG\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":21001,\"range\":[1,5000],\"values\":{\"25\":0,\"29\":1,\"103\":6,\"120\":33,\"140\":37,\"164\":25,\"192\":14,\"224\":10,\"262\":3,\"306\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"socket\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}}},\"histograms\":{\"A11Y_INSTANTIATED_FLAG\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"v"
		"alues\":{\"0\":1,\"1\":0}},\"APPLICATION_REPUTATION_BINARY_TYPE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"APPLICATION_REPUTATION_REASON\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":3,\"range\":[1,50],\"values\":{\"2\":0,\"3\":1,\"4\":0}},\"APPLICATION_REPUTATION_SHOULD_BLOCK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"APPLICATION_REPUTATION_LOCAL\":{\"bucket_count\":4,\"histogram_type\":1,\"sum\":4,\"range\":[1,3],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"CHILD_PROCESS_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2025,\"range\":[1,64000],\"values\":{\"7\":0,\"8\":1,\"92\":1,\"113\":1,\"152\":1,\"168\":1,\"185\":2,\"248\":1,\"303\":1,\"452\":1,\"499\":0}},\"CONTENT_PROCESS_LAUNCH_MAINTHREAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,64000],\"values\":{\"0\":4,\"1\":2,\"2\":0}},\"CONTENT_PROCESS_LAUNCH_TOTAL_MS\":{\"bucket_count\":100,"
		"\"histogram_type\":0,\"sum\":1711,\"range\":[1,64000],\"values\":{\"138\":0,\"152\":1,\"185\":2,\"248\":1,\"370\":1,\"499\":1,\"551\":0}},\"CONTENT_PROCESS_SYNC_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":422,\"range\":[1,64000],\"values\":{\"102\":0,\"113\":2,\"185\":1,\"204\":0}},\"CONTENT_PROCESS_LAUNCH_IS_SYNC\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":6,\"1\":3,\"2\":0}},\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":31,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":7,\"2\":1,\"4\":1,\"8\":2,\"10\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":220,\"range\":[1,10000],\"values\":{\"12\":0,\"14\":3,\"17\":4,\"20\":2,\"24\":1,\"34\":1,\"40\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1810,\"range\":[1,200],\"values\":{\"4\":0,\"5\":4,\"10\":2,\"11\":1,\"12\":2,\"13\":1,\"17\":1,\"37\":1,\"46\":34,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogra"
		"m_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":46,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":46,\"1\":0}},\"GC_ANIMATION_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":33,\"range\":[1,10000],\"values\":{\"0\":2,\"5\":1,\"7\":1,\"8\":1,\"12\":1,\"14\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":198,\"range\":[1,10000],\"values\":{\"10\":0,\"12\":1,\"14\":3,\"17\":4,\"20\":2,\"24\":1,\"29\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":15,\"range\":[1,1000],\"values\":{\"0\":6,\"1\":4,\"11\":1,\"12\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":8454,\"range\":[1,150000],\"values\":{\"211\":0,\"267\":1,\"338\":1,\"540\":2,\"683\":2,\"863\":4,\"1091\":1,\"1379\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":8,\"range\":[1,10000],\"values\":{\"0\":7,\"1\":2,\"2\":1,\"4\":1,\"5\":0}},\"GC_MARK_WEAK_MS\":{\"bu"
		"cket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":11,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":33,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":1080,\"range\":[1,100],\"values\":{\"92\":0,\"94\":1,\"96\":2,\"98\":8,\"100\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":229,\"range\":[1,120],\"values\":{\"3\":0,\"4\":5,\"10\":2,\"23\":1,\"48\":1,\"54\":1,\"57\":1,\"61\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1007,\"range\":[1,2000],\"values\":{\"0\":1,\"4\":1,\"15\":3,\"17\":4,\"19\":5,\"22\":8,\"25\":2,\"29\":6,\"44\":2,\"50\":1,\"99\":1,\"113\":1,\"130\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":46,\"range\":[1,200],\"values\":{\"3\":0,\"4\":10,\"6\":1,\"7\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":91,\"range\":["
		"1,50000],\"values\":{\"0\":3,\"1\":3,\"2\":1,\"6\":1,\"19\":1,\"21\":1,\"37\":1,\"41\":0}},\"GC_WAIT_FOR_IDLE_COUNT\":{\"bucket_count\":25,\"histogram_type\":0,\"sum\":0,\"range\":[1,120],\"values\":{\"0\":75,\"1\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3356656,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":455,\"23\":18,\"34\":6,\"41\":10,\"50\":28,\"61\":7,\"74\":33,\"90\":94,\"109\":13,\"132\":23,\"160\":8,\"194\":8,\"235\":245,\"284\":919,\"344\":224,\"416\":278,\"503\":363,\"609\":391,\"737\":143,\"892\":106,\"1080\":26,\"1307\":17,\"1582\":36,\"1915\":19,\"2318\":24,\"2805\":14,\"3395\":10,\"4109\":8,\"4973\":10,\"6019\":12,\"7284\":13,\"8815\":26,\"10668\":11,\"12911\":7,\"15625\":4,\"18910\":2,\"27698\":1,\"33521\":2,\"40569\":1,\"186713\":1,\"484771\":1,\"586691\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":142942,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":487,\"3\":69,\"5\":140,\"8\":1151,\"12\":188,\"19\":743,\"30"
		"\":547,\"47\":117,\"73\":39,\"113\":25,\"176\":23,\"274\":19,\"426\":47,\"662\":13,\"1029\":4,\"1599\":2,\"2485\":2,\"14498\":1,\"22533\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":23304,\"range\":[1,150000000],\"values\":{\"0\":611,\"1\":1273,\"2\":528,\"3\":291,\"4\":161,\"5\":71,\"6\":64,\"7\":64,\"8\":99,\"10\":66,\"12\":62,\"14\":62,\"17\":46,\"20\":36,\"24\":36,\"29\":33,\"35\":28,\"42\":31,\"50\":15,\"60\":14,\"72\":5,\"87\":4,\"105\":5,\"126\":7,\"182\":1,\"316\":1,\"953\":1,\"1378\":1,\"1992\":1,\"2395\":0}},\"GPU_PROCESS_LAUNCH_TIME_MS_2\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":592,\"range\":[1,64000],\"values\":{\"499\":0,\"551\":1,\"608\":0}},\"MEMORY_TOTAL\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":926964,\"range\":[32768,16777216],\"values\":{\"418095\":0,\"445575\":2,\"474861\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":2,\"1\":0}},\"SHUTDOWN_OK\":{\"bucket_count\":3,\"histo"
		"gram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"HTTP_KBREAD_PER_CONN2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1943,\"range\":[1,100000],\"values\":{\"0\":33,\"1\":4,\"2\":2,\"3\":2,\"4\":2,\"5\":1,\"6\":1,\"8\":1,\"16\":1,\"20\":1,\"31\":2,\"39\":1,\"61\":2,\"76\":1,\"95\":1,\"119\":2,\"149\":2,\"186\":1,\"233\":1,\"365\":1,\"457\":0}},\"HTTP_TRANSACTION_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":209,\"range\":[1,2],\"values\":{\"0\":31,\"1\":209,\"2\":0}},\"HTTP_PAGELOAD_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":23,\"range\":[1,2],\"values\":{\"0\":0,\"1\":23,\"2\":0}},\"HTTP_SCHEME_UPGRADE_TYPE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":33,\"range\":[1,50],\"values\":{\"0\":0,\"1\":33,\"2\":0}},\"TLS_EARLY_DATA_NEGOTIATED\":{\"bucket_count\":4,\"histogram_type\":1,\"sum\":0,\"range\":[1,3],\"values\":{\"0\":58,\"1\":0}},\"SSL_HANDSHAKE_VERSION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":241,\"range\":[1,16],\"value"
		"s\":{\"2\":0,\"3\":3,\"4\":58,\"5\":0}},\"SSL_HANDSHAKE_RESULT\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":0,\"range\":[1,672],\"values\":{\"0\":57,\"1\":0}},\"SSL_TIME_UNTIL_READY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":25530,\"range\":[1,60000],\"values\":{\"29\":0,\"30\":1,\"43\":1,\"64\":1,\"67\":3,\"70\":1,\"80\":1,\"84\":1,\"88\":1,\"92\":2,\"100\":1,\"105\":1,\"120\":1,\"126\":1,\"132\":1,\"151\":2,\"165\":1,\"173\":1,\"189\":1,\"207\":1,\"237\":2,\"248\":1,\"271\":1,\"283\":1,\"310\":4,\"324\":2,\"339\":2,\"406\":1,\"425\":2,\"465\":3,\"508\":2,\"531\":2,\"555\":2,\"581\":1,\"636\":1,\"665\":2,\"696\":1,\"762\":2,\"797\":1,\"834\":1,\"1368\":2,\"1638\":1,\"2145\":1,\"2244\":0}},\"SSL_RESUMED_SESSION\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":60,\"1\":1,\"2\":0}},\"HTTP_CHANNEL_DISPOSITION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":2545,\"range\":[1,16],\"values\":{\"1\":0,\"2\":31,\"3\":2,\"8\":18,\"9\":47,\"10\":191,\"11\":0"
		"}},\"HTTP_CHANNEL_ONSTART_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":311,\"range\":[1,2],\"values\":{\"0\":5,\"1\":311,\"2\":0}},\"HTTP3_0RTT_STATE\":{\"bucket_count\":6,\"histogram_type\":1,\"sum\":0,\"range\":[1,5],\"values\":{\"0\":4,\"1\":0}},\"DNS_LOOKUP_METHOD2\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":854,\"range\":[1,16],\"values\":{\"0\":0,\"1\":256,\"2\":18,\"3\":3,\"6\":91,\"7\":1,\"8\":0}},\"DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1228,\"range\":[1,60000],\"values\":{\"3\":0,\"4\":3,\"11\":4,\"14\":4,\"17\":3,\"21\":5,\"26\":2,\"32\":3,\"40\":5,\"50\":5,\"62\":1,\"95\":1,\"118\":1,\"146\":0}},\"DNS_NATIVE_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4497,\"range\":[1,60000],\"values\":{\"1\":0,\"2\":3,\"3\":8,\"4\":19,\"5\":18,\"6\":9,\"7\":14,\"9\":5,\"11\":14,\"14\":8,\"17\":15,\"21\":14,\"26\":11,\"32\":19,\"40\":14,\"50\":10,\"62\":7,\"77\":3,\"95\":2,\"118\":1,\"146\":0}},\"DNS_NATIVE_QUEUING\":{\"bucket_count\":50,\"h"
		"istogram_type\":0,\"sum\":1,\"range\":[1,60000],\"values\":{\"0\":197,\"1\":1,\"2\":0}},\"DNS_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":83,\"range\":[1,60000],\"values\":{\"11\":0,\"14\":1,\"17\":1,\"21\":1,\"26\":1,\"32\":0}},\"DNS_BLACKLIST_COUNT\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":0,\"range\":[1,21],\"values\":{\"0\":51,\"1\":0}},\"STARTUP_CACHE_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":212,\"range\":[1,50],\"values\":{\"0\":4,\"1\":170,\"2\":21,\"3\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":379,\"range\":[1,50],\"values\":{\"0\":348,\"1\":17,\"2\":181,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"NETWORK_ID_ONLINE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"URLCLASSIFIER_LOOKUP_TIME_2\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\""
		":1,\"range\":[1,5000],\"values\":{\"0\":201,\"1\":1,\"2\":0}},\"URLCLASSIFIER_SHUTDOWN_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,60000],\"values\":{\"0\":1,\"1\":0}},\"URLCLASSIFIER_CL_CHECK_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,500],\"values\":{\"0\":202,\"1\":0}},\"URLCLASSIFIER_VLPS_FILELOAD_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":94,\"range\":[1,1000],\"values\":{\"0\":20,\"1\":3,\"2\":1,\"5\":1,\"29\":2,\"70\":0}},\"URLCLASSIFIER_VLPS_FALLOCATE_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":4,\"1\":0}},\"URLCLASSIFIER_VLPS_CONSTRUCT_TIME\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":85,\"range\":[1,5000],\"values\":{\"0\":2,\"2\":1,\"55\":1,\"105\":0}},\"URLCLASSIFIER_VLPS_METADATA_CORRUPT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":5,\"1\":0}},\"FX_NUMBER_OF_UNIQUE_SITE_ORIGINS_PER_DOCUMENT\":{\"bucket_count\":50,\"histogram_"
		"type\":0,\"sum\":9,\"range\":[1,100],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"FX_PAGE_LOAD_MS_2\":{\"bucket_count\":200,\"histogram_type\":1,\"sum\":10626,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"304\":1,\"1516\":1,\"1567\":1,\"2476\":1,\"4647\":1,\"4698\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":206011,\"range\":[1,10000],\"values\":{\"0\":114,\"1\":58,\"2\":103,\"3\":100,\"4\":109,\"5\":111,\"6\":171,\"7\":163,\"8\":368,\"10\":348,\"12\":350,\"14\":545,\"17\":352,\"20\":177,\"24\":68,\"29\":9,\"40\":1,\"57\":1,\"68\":1,\"96\":1,\"752\":1,\"10000\":1}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":182091,\"range\":[1,10000],\"values\":{\"0\":62,\"1\":3,\"2\":5,\"3\":9,\"4\":5,\"5\":9,\"6\":8,\"7\":15,\"8\":40,\"10\":61,\"12\":95,\"14\":92,\"17\":11,\"20\":11,\"24\":48,\"29\":32,\"34\":7,\"40\":24,\"48\":5,\"57\":11,\"68\":11,\"81\":3,\"96\":5,\"114\":4,\"135\":1,\"160\":2,\"190\":1,\"894\":1,\"10000\":1}},\"FX_SESSIO"
		"N_RESTORE_STARTUP_INIT_SESSION_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,30000],\"values\":{\"0\":1,\"1\":0}},\"FX_SESSION_RESTORE_STARTUP_ONLOAD_INITIAL_WINDOW_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":6,\"range\":[1,30000],\"values\":{\"2\":0,\"4\":1,\"7\":0}},\"MS_MESSAGE_REQUEST_TIME_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":6,\"range\":[1,2000],\"values\":{\"0\":1,\"2\":1,\"3\":1,\"5\":0}},\"SEARCH_SERVICE_INIT_MS\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":272,\"range\":[1,1000],\"values\":{\"119\":0,\"203\":1,\"345\":0}},\"TOUCH_ENABLED_DEVICE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_SET_DEFAULT_DIALOG_PROMPT_RAWCOUNT\":{"
		"\"bucket_count\":15,\"histogram_type\":0,\"sum\":1,\"range\":[1,250],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"NETWORK_CACHE_V2_MISS_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"NETWORK_CACHE_V2_HIT_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":0}},\"CERT_VALIDATION_SUCCESS_BY_CA\":{\"bucket_count\":257,\"histogram_type\":1,\"sum\":829,\"range\":[1,256],\"values\":{\"2\":0,\"3\":61,\"49\":1,\"199\":3,\"200\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"COOKIE_BEHAVIOR\":{\"bucket_count\":16,\"histogram_type\":1,\"sum\":4,\"range\":[1,15],\"values\":{\"3\":0,\"4\":1,\"5\":0}},\"TRACKING_PROTECTION_ENABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range"
		"\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_PBM_DISABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"FINGERPRINTERS_BLOCKED_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":15,\"1\":0}},\"CRYPTOMINERS_BLOCKED_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":15,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"0\":2,\"1\":2,\"2\":0}},\"TOP_LEVEL_CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":27,\"range\":[1,2],\"values\":{\"0\":27,\"1\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":633,\"range\":[1,100000],\"values\":{\"41\":0,\"45\":1,\"171\":1,\"395\":1,\"438\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":471,\"range\":[1,5000],\"values\":{\"0\":1,\"2\":3,"
		"\"3\":1,\"4\":3,\"5\":1,\"7\":1,\"8\":3,\"9\":1,\"10\":4,\"11\":2,\"12\":2,\"13\":2,\"14\":2,\"15\":2,\"16\":3,\"17\":2,\"18\":1,\"19\":1,\"20\":1,\"21\":2,\"23\":1,\"29\":1,\"31\":0}},\"INPUT_EVENT_QUEUED_KEYBOARD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":79,\"range\":[1,5000],\"values\":{\"1\":0,\"2\":1,\"3\":2,\"6\":1,\"7\":1,\"8\":1,\"11\":2,\"13\":1,\"15\":1,\"16\":0}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3711,\"range\":[1,60000],\"values\":{\"485\":0,\"535\":4,\"718\":2,\"792\":0}},\"WEBEXT_EXTENSION_STARTUP_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2215,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":1,\"158\":13,\"174\":0}},\"REFERRER_POLICY_COUNT\":{\"bucket_count\":19,\"histogram_type\":1,\"sum\":180,\"range\":[1,18],\"values\":{\"0\":5,\"1\":6,\"8\":5,\"9\":4,\"10\":3,\"17\":4,\"18\":0}},\"HTTPS_RR_PRESENTED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":270,\"1\":0}},\"USE_COUNTE"
		"R2_CUSTOMELEMENTREGISTRY_DEFINE_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_APPLICATIONCACHE_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_CHROME_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_WINDOW_TOUCHLIST_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_VISUALVIEWPORT_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_WINDOW_WEBKITREQUESTANIMATIONFRAME_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignContent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0"
		"\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignItems_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignSelf_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageRepeat_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxSizing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clear_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Direction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Display_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,"
		"\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexDirection_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexWrap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Float_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontKerning_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSizeAdjust_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontStretch_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontStyle_PAGE\":{\"bucket_count"
		"\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantCaps_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantEastAsian_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantLigatures_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantNumeric_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantPosition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontWeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\""
		"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_JustifyContent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Position_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinecap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinejoin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextRendering_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,"
		"\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextTransform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TouchAction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_UserSelect_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Visibility_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WhiteSpace_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WritingMode_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ZIndex_PAGE\":{\"bu"
		"cket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ClipRule_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillRule_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexGrow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexShrink_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowX_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowY_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPE"
		"RTY_Opacity_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundAttachment_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\""
		":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundRepeat_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageOutset_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageSlice_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxShadow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Color_PAGE\":{"
		"\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Content_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Cursor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Filter_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFamily_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFeatureSettings_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontLanguageOverride_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"US"
		"E_COUNTER2_CSS_PROPERTY_FontSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantAlternates_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LetterSpacing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineHeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyleType_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Quotes_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDasharray_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range"
		"\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDashoffset_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextOverflow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextShadow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_VerticalAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WillChange_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordSpacing_PAGE\":{\"bucket_"
		"count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Stroke_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformOrigin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageSource_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PRO"
		"PERTY_TextIndent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinHeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingLeft_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\""
		":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingRight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":"
		"2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Bottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Left_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginLeft_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginRight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Right_PAGE\":{\"bucket_count\""
		":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Top_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_CO"
		"UNTER2_CSS_PROPERTY_OutlineColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Background_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPosition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2]"
		",\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeft_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Border_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Overflow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transition_PAGE\":{\"bucket_count\":3,\"histogram_"
		"type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Animation_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariant_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Margin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Outline_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Padding_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Flex_PAGE\":{\"bucket_coun"
		"t\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextDecoration_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransformOrigin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAppearance_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxShadow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\""
		"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordWrap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexDirection_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexWrap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitJustifyContent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignContent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignItems_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexGrow_PAGE\":{\"bucket_count"
		"\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexShrink_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignSelf_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozBoxSizing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserSelect_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserSelect_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},"
		"\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxDirection_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxOrient_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxPack_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTransition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimation_PAGE\":{\"bucket_count\":3,\"histogram_t"
		"ype\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlex_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTapHighlightColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextSizeAdjust_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitRtlOrdering_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitLocale_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}}},\"keyedHistograms\":{\"NETWORK_HTTP_REDIRECT_TO_SCHEME\":{\"https\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":14,\"1\":1,\""
		"2\":0}}},\"SSL_TIME_UNTIL_HANDSHAKE_FINISHED_KEYED_BY_KA\":{\"none\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":30,\"range\":[1,60000],\"values\":{\"29\":0,\"30\":1,\"31\":0}},\"x25519\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":25500,\"range\":[1,60000],\"values\":{\"41\":0,\"43\":1,\"64\":1,\"67\":3,\"70\":1,\"80\":1,\"84\":1,\"88\":1,\"92\":2,\"100\":1,\"105\":1,\"120\":1,\"126\":1,\"132\":1,\"151\":2,\"165\":1,\"173\":1,\"189\":1,\"207\":1,\"237\":2,\"248\":1,\"271\":1,\"283\":1,\"310\":4,\"324\":2,\"339\":2,\"406\":1,\"425\":2,\"465\":3,\"508\":2,\"531\":2,\"555\":2,\"581\":1,\"636\":1,\"665\":2,\"696\":1,\"762\":2,\"797\":1,\"834\":1,\"1368\":2,\"1638\":1,\"2145\":1,\"2244\":0}}},\"HTTP_CHANNEL_DISPOSITION_UPGRADE\":{\"disabledNoReason\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":429,\"range\":[1,50],\"values\":{\"0\":18,\"1\":47,\"2\":191,\"3\":0}},\"disabledWont\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":68,\"range\":[1,50],\"values\":{\"1\":0,\"2\":31,\"3\":2,\"4\":"
		"0}}},\"TRANSACTION_WAIT_TIME_HTTPS_RR\":{\"h1_no_https_rr\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":18126,\"range\":[1,5000],\"values\":{\"0\":74,\"1\":34,\"2\":4,\"3\":7,\"4\":5,\"5\":3,\"6\":1,\"7\":2,\"8\":3,\"13\":1,\"14\":2,\"17\":1,\"19\":1,\"20\":2,\"23\":1,\"25\":1,\"27\":1,\"31\":1,\"35\":2,\"38\":1,\"41\":1,\"44\":1,\"47\":6,\"50\":3,\"54\":4,\"58\":2,\"62\":2,\"66\":1,\"71\":2,\"76\":6,\"87\":1,\"93\":2,\"107\":4,\"115\":4,\"123\":6,\"132\":2,\"142\":1,\"152\":6,\"163\":3,\"175\":2,\"188\":4,\"202\":3,\"217\":2,\"250\":3,\"268\":4,\"287\":5,\"308\":3,\"330\":2,\"354\":5,\"380\":1,\"467\":1,\"501\":1,\"537\":2,\"576\":1,\"618\":0}}},\"HTTP3_CONNECTION_CLOSE_CODE_3\":{\"transport_closed\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":4,\"1\":0}}},\"HTTP3_CHANNEL_ONSTART_SUCCESS\":{\"no_http3\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":240,\"range\":[1,2],\"values\":{\"0\":4,\"1\":240,\"2\":0}}},\"DNS_LOOKUP_DISPOSITION3\":{\"mozilla.cloud"
		"flare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1192,\"range\":[1,50],\"values\":{\"5\":0,\"6\":194,\"7\":4,\"8\":0}}},\"URLCLASSIFIER_CL_KEYED_UPDATE_TIME\":{\"google4\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":1445,\"range\":[20,120000],\"values\":{\"821\":0,\"1121\":1,\"1531\":0}}},\"URLCLASSIFIER_UPDATE_REMOTE_NETWORK_ERROR\":{\"google4\":{\"bucket_count\":31,\"histogram_type\":1,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":1,\"1\":0}},\"mozilla\":{\"bucket_count\":31,\"histogram_type\":1,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":1,\"1\":0}}},\"URLCLASSIFIER_UPDATE_REMOTE_STATUS2\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":1,\"range\":[1,16],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"mozilla\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":1,\"range\":[1,16],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"URLCLASSIFIER_UPDATE_SERVER_RESPONSE_TIME\":{\"google4\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":938,\"range\":[1,100000],\"values\":{\"514\":0,\"7"
		"71\":1,\"1156\":0}},\"mozilla\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":1082,\"range\":[1,100000],\"values\":{\"514\":0,\"771\":1,\"1156\":0}}},\"URLCLASSIFIER_UPDATE_TIMEOUT\":{\"google4\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":0,\"range\":[1,4],\"values\":{\"0\":1,\"1\":0}},\"mozilla\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":0,\"range\":[1,4],\"values\":{\"0\":1,\"1\":0}}},\"URLCLASSIFIER_UPDATE_ERROR\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":0,\"range\":[1,16],\"values\":{\"0\":1,\"1\":0}},\"mozilla\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":0,\"range\":[1,16],\"values\":{\"0\":1,\"1\":0}}},\"UPTAKE_REMOTE_CONTENT_RESULT_1\":{\"main/personality-provider-models\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/search-default-override-allowlist\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/search-config\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/password-rules\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/hijack-blocklists\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/websites-with-shared-credential-backends\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/pioneer-study-addons-v1\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/tippytop\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/search-telemetry\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/doh-config\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/public-suffix-list\":{\"bucket_count\":51,\"hist"
		"ogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/anti-tracking-url-decoration\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/normandy-recipes-capabilities\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/whats-new-panel\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"blocklists/gfx\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/nimbus-desktop-defaults\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/sites-classification\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/url-classifier-skip-urls\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/language-dictionaries\":{\"bucke"
		"t_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"settings-changes-monitoring\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"main/cfr\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/personality-provider-recipe\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/fxmonitor-breaches\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/nimbus-desktop-experiments\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/message-groups\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/doh-providers\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/password-recipes\":{\"bucket_c"
		"ount\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/partitioning-exempt-urls\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"settings-sync\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"main/query-stripping\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/top-sites\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"blocklists/addons-bloomfilters\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS_BY_ADDONID\":{\"UFT.Firefox.Agent.2021.0@microfocus.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":762,\"range\":[1,60000],\"values\":{\"651\":0,\"718\":1,\"792\":0}},\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":547,"
		"\"range\":[1,60000],\"values\":{\"485\":0,\"535\":1,\"590\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":554,\"range\":[1,60000],\"values\":{\"485\":0,\"535\":1,\"590\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":758,\"range\":[1,60000],\"values\":{\"651\":0,\"718\":1,\"792\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":547,\"range\":[1,60000],\"values\":{\"485\":0,\"535\":1,\"590\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":543,\"range\":[1,60000],\"values\":{\"485\":0,\"535\":1,\"590\":0}}},\"WEBEXT_EXTENSION_STARTUP_MS_BY_ADDONID\":{\"UFT.Firefox.Agent.2021.0@microfocus.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":163,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"default-theme@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":163,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\""
		"proxy-failover@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":163,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"bing@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":163,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"doh-rollout@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":110,\"range\":[1,50000],\"values\":{\"98\":0,\"108\":1,\"119\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":160,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"amazon@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":163,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":160,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":163,\"range\":[1,50000],\"values\":{\"144\":0,\"158\""
		":1,\"174\":0}},\"wikipedia@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":161,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":162,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":159,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"google@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":162,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}},\"ddg@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":163,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":1,\"174\":0}}},\"QM_QUOTA_INFO_LOAD_TIME_V0\":{\"Normal\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":0,\"range\":[1,180000],\"values\":{\"0\":1,\"1\":0}}},\"QM_FIRST_INITIALIZATION_ATTEMPT\":{\"TemporaryStorage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1"
		",\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"Storage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PersistentOrigin\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"SQLITE_STORE_OPEN\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"Login Data\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],"
		"\"values\":{\"0\":2,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":4,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"val"
		"ues\":{\"0\":1,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}}},\"SQLITE_STORE_QUERY\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":7,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":16,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":32,\"1\":0}},\"Login Data\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":8,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":21,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,"
		"\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":23,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":95,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":5,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":52,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":237,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":219,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":16,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum"
		"\":0,\"range\":[1,50],\"values\":{\"0\":32,\"1\":0}}}},\"info\":{\"reason\":\"shutdown\",\"revision\":\"https://hg.mozilla.org/releases/mozilla-release/rev/be5a26bea29ae03aceaba84e36f205f01c2be791\",\"timezoneOffset\":60,\"previousBuildId\":null,\"sessionId\":\"69990a41-a687-4c42-a1cc-c76db8bef2c0\",\"subsessionId\":\"42ba837d-47cc-4470-ba04-057b903d7ee1\",\"previousSessionId\":\"55ced907-e0b4-41a9-972b-bb54b10309c7\",\"previousSubsessionId\":\"62c425a0-d46d-42e2-b75f-4711409a6422\",\"subsessionCounter\":1,\"profileSubsessionCounter\":62,\"sessionStartDate\":\"2022-01-21T16:00:00.0+01:00\",\"subsessionStartDate\":\"2022-01-21T16:00:00.0+01:00\",\"sessionLength\":281,\"subsessionLength\":280,\"addons\":\"UFT.Firefox.Agent.2021.0%40microfocus.com:2021.0.0.2596,doh-rollout%40mozilla.org:2.0.0,formautofill%40mozilla.org:1.0.1,pictureinpicture%40mozilla.org:1.0.0,screenshots%40mozilla.org:39.0.1,webcompat%40mozilla.org:29.2.0,proxy-failover%40mozilla.com:1.0.2,default-theme%40mozilla.org:1.3,google%40search.mozi"
		"lla.org:1.1,wikipedia%40search.mozilla.org:1.1,bing%40search.mozilla.org:1.3,ddg%40search.mozilla.org:1.1,amazon%40search.mozilla.org:1.9,addons-search-detection%40mozilla.com:2.0.0\"}},\"clientId\":\"672cfb6d-f61c-4f22-b43d-108f28e82080\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20220113185450\",\"version\":\"96.0.1\",\"vendor\":\"Mozilla\",\"displayVersion\":\"96.0.1\",\"platformVersion\":\"96.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8191,\"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"family\":6,\"model\":165,\"stepping\":2,\"l2cacheKB\":256,\"l3cacheKB\":12288,\"speedMHz\":2712,\"extensions\":[\"hasMMX\",\"hasSSE\",\"has"
		"SSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2021,\"hasSuperfetch\":true,\"hasPrefetch\":false,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"fr-FR\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":17763,\"windowsUBR\":2183},\"hdd\":{\"binary\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"profile\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"},\"system\":{\"model\":\"VMware, VMware Virtual S\",\"revision\":\"1.0\",\"type\":\"HDD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\":0,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersi"
		"on\":\"8.17.3.1\",\"driverDate\":\"4-22-2021\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":2560,\"screenHeight\":1440,\"refreshRate\":64,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"wrQualified\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"webrender\":{\"status\":\"disabled:FEATURE_FAILURE_NOT_QUALIFIED\"},\"wrCompositor\":{\"status\":\"unavailable:FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"wrSoftware\":{\"status\":\"available\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"d2d\":{\"status\":\"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":null,\"antispyware\":null,\"firewall\":null},\"isWow64\":false,\"isWowARM64\":false},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,"
		"\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-US\",\"intl\":{\"requestedLocales\":[\"en-US\"],\"availableLocales\":[\"en-US\"],\"appLocales\":[\"en-US\"],\"systemLocales\":[\"fr-FR\",\"en-US\"],\"regionalPrefsLocales\":[\"en-US\"],\"acceptLanguages\":[\"en-US\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\"userPrefs\":{\"browser.shell.checkDefaultBrowser\":false,\"browser.search.region\":\"FR\",\"browser.search.widget.inNavBar\":false,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"network.proxy.http\":\"<user-set>\",\"network.proxy.ssl\":\"<user-set>\",\"network.trr.mode\":5,\"security.enterprise_roots.auto-enabled\":true,\"security.enterprise_roots.enabled\":true,\"widget.content.allow-gtk-dark-theme\":false,\"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{"
		"\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":4},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[other]addEngineWithDetails:google@search.mozilla.org\",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\"creationDate\":18933,\"firstUseDate\":18933},\"addons\":{\"activeAddons\":{\"UFT.Firefox.Agent.2021.0@microfocus.com\":{\"version\":\"2021.0.0.2596\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18933,\"isSystem\":false,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Test Web Applications Using Mozilla Firefox\",\"name\":\"Micro Focus UFT Agent\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18933,\"signedState\":2},\"doh-rollout@mozilla.org\":{\"version\":\"2."
		"0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"This used to be a Mozilla add-on that supported the roll-out of DoH, but now only exists as a stub t\",\"name\":\"DoH Roll-Out\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18874,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":"
		"\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"webcompat@mozilla.org\":{\"version\":\"29.2.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19013,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled"
		"\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18874},\"proxy-failover@mozilla.com\":{\"version\":\"1.0.2\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18934,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Direct Failover for system requests.\",\"name\":\"Proxy Failover\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18934}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Follow the operating system setting for buttons, menus, and windows.\",\"name\":\"System theme \\xE2\\x80\\x94 auto\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.3\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18933,\"updateDay\":18933},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":\"1.8.1.1\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"v"
		"ersion\":\"4.10.2391.0\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"30c0efba-d92b-4d6f-904f-73e2c7d08ffd\"},\"bug-1712189-rollout-keep-firefox-up-to-date-even-when-it-is-not-ru-release-90-94\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"1ca0d79c-0b81-44e2-bb86-29876ff4f8d0\"},\"bug-1732206-rollout-fission-release-rollout-release-94-95\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"7bbd508f-d3bc-4ff6-bc9f-0a6eac48d64c\"},\"bug-1750257-rollout-pref-off-networkcookiesamesiteschemeful-in-release-96-96\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"f587f911-f125-4da3-8377-9da1a94835fa\"}}}}" ;


# 9 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 10 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"a65413127e534b02aa5d120cb1dfe19c\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 11 "globals.h" 2





 
 




# 3 "c:\\users\\demo\\documents\\vugen\\scripts\\ceva\\citrixica_multi1\\\\combined_CitrixICA_Multi1.c" 2


# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 5 "c:\\users\\demo\\documents\\vugen\\scripts\\ceva\\citrixica_multi1\\\\combined_CitrixICA_Multi1.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_max_html_param_len("73886");  

	 
# 28 "Action.c"

	 
# 58 "Action.c"

 





	web_reg_save_param_regexp(
		"ParamName=sentry_key",
		"RegExp=https://(.*?)@sentry\\.io",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/StoreWeb/*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB= authDomain=\"",
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/StoreWeb/*",
		"LAST");

	web_set_max_html_param_len("5600");

	web_url("cevalogistics.cloud.com", 
		"URL=https://cevalogistics.cloud.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"LAST");

 
# 114 "Action.c"

 
# 124 "Action.c"


 






		
		 
# 165 "Action.c"

	 

	web_url("StoreWeb", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=assets/workspace/react.2bd7a2cfd6f3a5c98233.js", "ENDITEM", 
		"Url=assets/workspace/workspace-vertical-logo-teal.svg", "ENDITEM", 
		"Url=assets/workspace/spinner-teal.svg", "ENDITEM", 
		"LAST");

	 
# 200 "Action.c"

	web_url("StoreWeb_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=assets/workspace/favicon.png", "ENDITEM", 
		"LAST");

 
# 246 "Action.c"

 
# 322 "Action.c"
	web_add_header("Csrf-Token", 
		"undefined");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 





	web_reg_save_param_ex(
		"ParamName=CitrixXenApp_CsrfToken",
		"LB/IC=CsrfToken=",
		"RB/IC=;",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"LAST");

	web_submit_data("GetUserDetails", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/Authentication/GetUserDetails", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");
 
# 405 "Action.c"
	
lr_output_message(lr_eval_string(">>>> CsrfToken : {CitrixXenApp_CsrfToken}"));

web_add_cookie("WSUI-PendingLogins=[{%22challenge%22:%22reason=%5C%22notoken%5C%22%2C%20location=%5C%22Authentication/GetAuthMethods%5C%22%22%2C%22locationAfterLogin%22:{%22pathname%22:%22/home%22%2C%22search%22:%22%22%2C%22hash%22:%22%22}}]; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
		
	
	 
	 
	web_add_header("X-Citrix-AM-CredentialTypes","none, username, domain, password, newpassword, passcode, savecredentials, textcredential, webview");
	web_add_header("X-Citrix-AM-LabelTypes","none, plain, heading, information, warning, error, confirmation, image");
	web_add_header("Origin","https://cevalogistics.cloud.com");
	web_add_header("DNT","1");
	web_add_header("Sec-Fetch-Dest","empty");
	web_add_header("Sec-Fetch-Mode","cors");
	web_add_header("Sec-Fetch-Site","same-origin");
	

	web_reg_find("Search=All",
		"Text=authentication/response/1\"><Status>success</Status>",
		"LAST");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text=The client does not meet the minimum requirements for this Form",
		"LAST");
	
	 
	web_reg_save_param("Login_Response", "LB=", "RB=",
	"Search=Noresource",
    "IgnoreRedirections=Yes",
    "LAST");
	
	
		web_reg_save_param_ex(
		"ParamName=webview",
		"LB=oidc/webview/",
		"RB=<",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"RequestUrl=*/Login",
		"LAST");
	
		web_custom_request("Login",
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/Login",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/vnd.citrix.authenticateresponse-1+xml",
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/",
		"Snapshot=t201.inf",
		"Mode=HTML",
		"EncType=application/json;charset=utf-8",
		"Body={}",
		"EXTRARES",
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/e86d2642f412b9493b14.woff2", "Referer=https://cevalogistics.cloud.com/", "ENDITEM",
		"URL=https://ctx-ws-assets.cloud.com/assets/workspace/f32753567f64c1ddeec8.woff", "Referer=https://cevalogistics.cloud.com/", "ENDITEM",
		"LAST");




	lr_output_message(lr_eval_string(">>>> Login_Response : {Login_Response}"));
	lr_output_message(lr_eval_string(">>>> webview : {webview}"));
	
	 






 
 
 
 
 


	lr_xml_extract("XML={Login_Response}",
	               "Query=/*[local-name()='AuthenticateResponse'][1]/*[local-name()='AuthenticationRequirements'][1]/*[local-name()='Requirements'][1]/*[local-name()='Requirement'][1]/*[local-name()='Credential'][1]/wv:WebView[1]/wv:StartUrl[1]/text()[1]",
	               "XMLFragmentParam=XmlStartUrl",
	               "LAST");
                                       
       lr_output_message(lr_eval_string("XmlStartUrl : {XmlStartUrl}"));

 
# 526 "Action.c"

 





	web_reg_save_param_regexp(
		"ParamName=state",
		"RegExp=state=(.*?)\\\r\\\n",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		 
		"RequestUrl=*/{webview}*",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=regionSessionId",
		"RegExp=regionSessionId=(.*?);",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"RequestUrl=*/authorize*",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=client-request-id",
		"RegExp=client-request-id=(.*?)\">\\\r\\\n\\ \\ \\ \\ \\ \\ \\ \\ ",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/ls/*",
		"LAST");

	 
	 
	web_reg_find("Search=Body",
		"Text=Connecting to CEVA Logistics Federation Services",
		"LAST");

 



	
	web_reg_save_param_ex(
		"ParamName=SAMLRequest",
		"LB=SAMLRequest=",
		"RB=&",
		"SEARCH_FILTERS",
		"Scope=HEADERS",
		"RequestUrl=*/saml/login*",
		"HeaderNames=Location",
		"LAST");

	web_reg_save_param_ex(
		"ParamName=RelayState",
		"LB=RelayState=",
		"RB=&",
		"SEARCH_FILTERS",
		"Scope=HEADERS",
		"RequestUrl=*/saml/login*",
		"HeaderNames=Location",
		"LAST");
	
		web_reg_save_param_ex(
		"ParamName=Signature",
		"LB=Signature=",
		"RB=",
		"SEARCH_FILTERS",
		"Scope=HEADERS",
		"RequestUrl=*/saml/login*",
		"HeaderNames=Location",
		"LAST");
	
	web_url("accounts-dsauthweb.cloud.com",
		"URL={XmlStartUrl}?_id=webviewResponseId&_cx=&_rt=https%3A%2F%2Fcevalogistics.cloud.com%2FCitrix%2FStoreWeb%2FExplicitAuth%2FBounce&_cs={CitrixXenApp_CsrfToken}&_ps=true",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t204.inf",
		"Mode=HTML",
		"EXTRARES",
 
 
 
 
 
 
		"LAST");

lr_output_message(lr_eval_string(">>>> state : {state}"));
lr_output_message(lr_eval_string(">>>> regionSessionId : {regionSessionId}"));
lr_output_message(lr_eval_string(">>>> client-request-id : {client-request-id}"));
lr_output_message(lr_eval_string(">>>> SAMLRequest : {SAMLRequest}"));
lr_output_message(lr_eval_string(">>>> RelayState : {RelayState}"));
lr_output_message(lr_eval_string(">>>> Signature : {Signature}"));

 
	web_reg_save_param_ex(
		"ParamName=SAMLResponse",
		"LB=name=\"SAMLResponse\" value=\"",
		 
		 
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/ls/*",
		"LAST");



 
	web_reg_save_param_ex(
		"ParamName=RelayState",
		"LB=name=\"RelayState\" value=\"",
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/ls/*",
		"LAST");
		
	web_add_header("Origin","https://cevalogistics.cloud.com");
	web_add_header("DNT","1");
	web_add_header("Sec-Fetch-Dest","empty");
	web_add_header("Sec-Fetch-Mode","cors");
	web_add_header("Sec-Fetch-Site","same-origin");
	web_add_header("Sec-Fetch-User","?1");
	web_add_header("Upgrade-Insecure-Requests","1");
	 	

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text=HTTP Error 400. The request has an invalid header name",
		"LAST");

	web_reg_find("Fail=Found",
		"Search=All",
		"Text=X-MS-Forwarded-Status-Code: 500",
		"LAST");

	web_submit_data("ls",
 
 
		"Action=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest={SAMLRequest}"
		"&RelayState={RelayState}"
		"&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256"
		"&Signature={Signature}"
		"&client-request-id={client-request-id}", 
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		
		 






		
		
		"Referer=https://idp.cevalogistics.com/adfs/ls/?SAMLRequest={SAMLRequest}"
		"&RelayState={RelayState}"
		"&SigAlg=http%3A%2F%2Fwww.w3.org%2F2001%2F04%2Fxmldsig-more%23rsa-sha256"
		"&Signature={Signature}",
		
		
		"Snapshot=t205.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=UserName", "Value=CW1_LoadTesting_1009@logistics.corp", "ENDITEM",
		"Name=Kmsi", "Value=true", "ENDITEM",
		"Name=AuthMethod", "Value=FormsAuthentication", "ENDITEM",
		"Name=Password", "Value=2JFIYF5xS62W", "ENDITEM",
		"LAST");


lr_output_message(lr_eval_string(">>>> SAMLResponse : {SAMLResponse}"));
lr_output_message(lr_eval_string(">>>> RelayState : {RelayState}"));


	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=accounts.cloud.com");

 

 





	web_reg_save_param_regexp(
		"ParamName=consistencyToken",
		"RegExp=Citrix-ConsistencyToken:\\ (.*?)\\\r\\\n",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/callback*",
		"LAST");

 





	web_reg_save_param_attrib(
		"ParamName=code",
		"TagName=input",
		"Extract=value",
		"Name=code",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/callback*",
		"LAST");

 





	web_reg_save_param_attrib(
		"ParamName=session_state",
		"TagName=input",
		"Extract=value",
		"Name=session_state",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/callback*",
		"LAST");


 







	web_reg_find("Fail=Found",
		"Search=All",
		"Text/IC=core/error",
		"LAST");

	web_submit_data("acs",
		"Action=https://saml.cloud.com/saml/acs",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t206.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=SAMLResponse", "Value={SAMLResponse}", "ENDITEM",
		"Name=RelayState", "Value={RelayState}", "ENDITEM",
		"LAST");


lr_output_message(lr_eval_string(">>>> consistencyToken : {consistencyToken}"));
lr_output_message(lr_eval_string(">>>> code : {code}"));
lr_output_message(lr_eval_string(">>>> session_state : {session_state}"));
lr_output_message(lr_eval_string(">>>> dsAuth_state : {dsAuth_state}"));


	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=accounts-dsauthweb.cloud.com");

	web_add_cookie("consistencyToken={consistencyToken}; DOMAIN=accounts-dsauthweb.cloud.com");

 





	web_reg_save_param_attrib(
		"ParamName=webviewResponseId",
		"TagName=input",
		"Extract=value",
		"Name=webviewResponseId",
		"LAST");

	web_submit_data("rp",
		"Action=https://accounts-dsauthweb.cloud.com/oidc/rp",
		"Method=POST",
		"TargetFrame=_self'/",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t207.inf",
		"Mode=HTML",
		"ITEMDATA",
		 
		"Name=code", "Value={code}", "ENDITEM",
		"Name=scope", "Value=openid profile email ctx_principal_aliases ctx_universal cip_credentials", "ENDITEM",
		"Name=state", "Value={state}", "ENDITEM",
		"Name=session_state", "Value={session_state}", "ENDITEM",
		"LAST");

lr_output_message(lr_eval_string(">>>> webviewResponseId : {webviewResponseId}"));



	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=cevalogistics.cloud.com");

	web_add_cookie("consistencyToken={consistencyToken}; DOMAIN=cevalogistics.cloud.com");

	web_submit_data("Bounce",
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/Bounce",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://accounts-dsauthweb.cloud.com/",
		"Snapshot=t208.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=_cx", "Value=", "ENDITEM",
		"Name=webviewResponseId", "Value={webviewResponseId}", "ENDITEM",
		"Name=_cs", "Value={CitrixXenApp_CsrfToken}", "ENDITEM",
		"LAST");

	web_url("StoreWeb_3", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://accounts-dsauthweb.cloud.com/", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("regionSessionId={regionSessionId}; DOMAIN=ctx-ws-assets.cloud.com");

	web_add_cookie("consistencyToken={consistencyToken}; DOMAIN=ctx-ws-assets.cloud.com");

	 
# 903 "Action.c"

	web_url("StoreWeb_4", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5638.71f35daac7835f4d7398.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8803.dba0b394959e74fd31e3.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7284.fec36cac4f8237a26a2c.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/e86d2642f412b9493b14.woff2", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=Sso/Proxy?destination=https%3A%2F%2Fwsp.eu.iws.cloud.com%2Fuser-personalization%2FuserPreferences", "ENDITEM", 
		"Url=Resources/Icon/L0NpdHJpeC9TdG9yZS9yZXNvdXJjZXMvdjIvVkZWNVMwbFJja3h4T1cxRlZFRnhXVk5EU1hSdmRqZGFiM0JWUFEtLS9pbWFnZQ--?size=128", "ENDITEM", 
		"Url=Cas/RequestTicket", "ENDITEM", 
		"LAST");

 
# 936 "Action.c"

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text=There was a failure with the mapped account",
		"LAST");

	web_submit_data("ResumeForms", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/ExplicitAuth/ResumeForms", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/xml", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=StateContext", "Value=", "ENDITEM", 
		"Name=webviewResponseId", "Value=", "ENDITEM", 
		"EXTRARES", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8121.f4f028f849af0bfe6c35.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5063.287c9f9aca2f4de9e890.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/2834.7edff6e875abd5b233cc.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/6724.fad10bcfca5388e10c52.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/4933.04f88ddf4aadc0e3ecfa.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9128.aa95fb80d257f578d09e.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8784.af23dc3a89c4ee264b8a.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7032.9986872c4ff8582862a9.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/9253.d92f1f6d4d25151742f9.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"LAST");

 
# 1008 "Action.c"

	web_add_cookie("IS_WEBVIEW_LOGON=true; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text={\"unauthorized\": true}",
		"LAST");

	web_submit_data("GetUserDetails_2", 
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/Authentication/GetUserDetails", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	 
# 1052 "Action.c"


	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text={\"unauthorized\": true}",
		"LAST");

	web_custom_request("List", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/List", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"resourceDetails\":\"Full\",\"acceptsCachedResults\":true}", 
		"EXTRARES", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/657.a1903cf1253b5d683a35.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/1937.b052b3869821645d36ef.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3369.a5944d6bc4cca698293d.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/4ba4759c3e98938156d7.woff2", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"LAST");

 
# 1121 "Action.c"


	web_add_auto_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_auto_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
	web_reg_save_param_ex(
		"ParamName=launchica",
		"LB=LaunchIca\\/",
		"RB=.ica",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text={\"unauthorized\": true}",
		"LAST");

	web_custom_request("List_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/List", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"resourceDetails\":\"Full\",\"acceptsCachedResults\":false}", 
		"LAST");

	web_custom_request("GetDetectionTicket", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionTicket", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("GetDetectionStatus", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionStatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"ticket\":\"CDTx7cCMdYa4GjiMvqVQ4!NPA--\"}",  
		"LAST");

	web_custom_request("GetDetectionStatus_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionStatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"ticket\":\"CDTx7cCMdYa4GjiMvqVQ4!NPA--\"}",   
		"LAST");

	web_custom_request("GetDetectionStatus_3", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/ClientAssistant/GetDetectionStatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"ticket\":\"CDTx7cCMdYa4GjiMvqVQ4!NPA--\"}",   
		"EXTRARES", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/5906.8e27f610f1130c115f99.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/AdaptiveCards.5e52cf9c5253006c933b.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/7684.1732f234c9f1329a13ac.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/8193.ea70d577ef1a6f85c11f.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://cips-iws-prod-weu-cip-cdn.azureedge.net/iwsprodweucip-container/womkdccyy46o-c786167b-5dd1-509a-8071-272c84f57d92-headerLogo-MZLnwCb6", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/oneDriveIntegration.5b4677125005f8f75a1a.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/3729.f5e74750057a51e19ae2.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/2899.b327ab4615b4ddfd60a3.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/1251.780d8383e3623c1c6754.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/wrikeIntegration.072f22b039b4bfcb7ffb.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/AppsWidget.9b441884b241ce420d4d.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/DesktopsWidget.555ee31ffba1d3580abb.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Csrf-Token", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Citrix-IsUsingHTTPS", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	 
# 1372 "Action.c"

 
# 1384 "Action.c"

 
# 1413 "Action.c"
	lr_think_time(9);

	lr_start_transaction("LauchCWCtrx");

	 
# 1433 "Action.c"


	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 
lr_save_timestamp("launch_id", "LAST");
lr_output_message("LaunchIca : %s", lr_eval_string("{launchIca}"));

web_submit_data("GetLaunchStatus",  
		"Action=https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/GetLaunchStatus/{launchica}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/",
		"Snapshot=t239.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=createFileFetchTicket", "Value=false", "ENDITEM",
		"LAST");

 
# 1476 "Action.c"

	ctrx_nfuse_connect("https://cevalogistics.cloud.com/Citrix/StoreWeb/Resources/LaunchIca/{launchica}.ica?CsrfToken={CitrixXenApp_CsrfToken}&IsUsingHttps=Yes&launchId={launchIca}", "last"); 

	lr_think_time(12);

	 
# 1742 "Action.c"








 
	ctrx_wait_for_event("LOGON", "last");

	lr_end_transaction("LauchCWCtrx",2);

	lr_start_transaction("ctrx_Operate");

	ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, 0, 0, 1025, 769, "snapshot1", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_mouse_click(83, 35, 1, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot2", "last");

	lr_end_transaction("ctrx_Operate",2);

	lr_start_transaction("ctrxForwarding");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_mouse_click(145, 91, 1, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot10", "last");

	lr_end_transaction("ctrxForwarding",2);

	lr_start_transaction("ctrxShipments");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	lr_think_time(8);

	ctrx_mouse_click(40, 407, 1, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot15", "last");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_custom_request("KeepAlive", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Home/KeepAlive", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t248.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://contile.services.mozilla.com/v1/tiles", "Referer=", "ENDITEM", 
		"LAST");

	lr_end_transaction("ctrxShipments",2);

	lr_start_transaction("ctrxFind");

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland", ACTIVATE, 7, 94, 1011, 574, "snapshot21", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_mouse_click(434, 273, 1, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot22", "last");

	lr_end_transaction("ctrxFind",2);

	lr_start_transaction("ctrxClickFirstShipmentID");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_mouse_double_click(117, 311, 1, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland=snapshot27", "last");

	lr_end_transaction("ctrxClickFirstShipmentID",2);

	lr_start_transaction("ctrxgoToDescription");

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot32", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_mouse_click(49, 97, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot38", "last");

	ctrx_mouse_click(86, 99, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot39", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_mouse_click(67, 59, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot42", "last");

	ctrx_mouse_click(262, 706, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot43", "last");

	ctrx_sync_on_window("Edit Shipment SCV2200010351 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot44", "last");

	ctrx_mouse_click(65, 708, 1, 0, "Edit Shipment SCV2200010351 - CEVTS1 - TESTING - Branch: CEVA =snapshot45", "last");

	lr_think_time(340);

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t249.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0CK<j\\xAC\\xD2\\xC0\\xBB\\xD5\\xF5\\x1C\\xB8\\xAA\\xE3\\x95j", 
		"LAST");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("KeepAlive_2", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Home/KeepAlive", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t250.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(6);

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot46", "last");

	ctrx_key("DOWN_ARROW_KEY", 0, "", "last");

	ctrx_key("DOWN_ARROW_KEY", 0, "", "last");

	ctrx_key("RIGHT_ARROW_KEY", 0, "", "last");

	ctrx_key("RIGHT_ARROW_KEY", 0, "", "last");

	ctrx_key("RIGHT_ARROW_KEY", 0, "", "last");

	ctrx_key("RIGHT_ARROW_KEY", 0, "", "last");

	ctrx_key("DOWN_ARROW_KEY", 0, "", "last");

	ctrx_key("DOWN_ARROW_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	lr_think_time(26);

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_sync_on_window("Create Declaration for Shipment - CEVTS1 - TESTING - Branch: C", ACTIVATE, 351, 332, 322, 102, "snapshot64", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_key("TAB_KEY", 1, "", "last");

	ctrx_mouse_click(208, 73, 1, 0, "Create Declaration for Shipment - CEVTS1 - TESTING - Branch: C=snapshot72", "last");

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot73", "last");

	ctrx_mouse_click(28, 59, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot74", "last");

	lr_think_time(5);

	ctrx_mouse_double_click(982, 58, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot75", "last");

	ctrx_mouse_double_click(982, 57, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", "last");

	ctrx_mouse_double_click(982, 57, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", "last");

	ctrx_mouse_click(982, 57, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot78", "last");

	ctrx_mouse_click(62, 59, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot79", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	lr_think_time(36);

	web_custom_request("gts1d4_5", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t251.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		"EXTRARES", 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642780222103&jzb="
		"eJzVVt-PozYQ_lci7nW5YEMSs2-32bQXqdrt3abdq6oKGWOCuwaDbRKSKv_7DUHZdH9Eyl2XVs1LMLbnm5lv5mN-_8uxm5I7l06qWG2cCyfWam24jqzI4TUaB3hCPIz8SUAunJUwwiodiQRu-DHFDKWhG_s-cgMvIW4YY-yGPCRp6uFRMpmAQcqYqgvb3QkImXgkGMP7Wkt4kVlbmsvhkPEVlWopjBXMvGdS1cl7pvLhVFgtmuEdoPJ7Hg_fDTMFjl04pValcS7Bf6qX3HZPS7D4LoFIcl5YOLTHhH8m4Wj7YIWVbbSd2cG90g-mpKw1SK3VrcEdnGrAnuPs4LGkGkwtaDwHU0UtJex2C6f5guPNjz98CCltRjc3JdhINc35fjOub-PJl0-byezuWt18nsGm4cYIVey3p6FvClyF04-VvEKf5m3iN5YDvh_6u4vzWRn7_w9Wrue_vuBDc6Nqzfi8SFWENiVTInBVdOs-2ajSrc6rI3cdCQ"
		"e2WjZEkfAG7LnIAcbyzbxbe4CTCZkclx2ZM8nzo2NXvywWtzcvfGP7CN1aRFFcW6uKwZ6KiCyXa2QHa1MLFyHkk3R7yrVv9-W1JKWSN1NVWCoK4B_FUmMW9gtpheSzwnLNkyhc0Y3KBhytqzD-c4y6yDP-MHqoBnycZmsqvbdz5-7nDy-5sErJhSgjXm1jO-o39kPpmQitG2_ctM3XIxyjWtWGy888hQ5Ia4PaLuoRsOfKoXFbq3A2CkiWs_wNK2M2XcyPjQpIJS249N77AfE8gvEIBHEyJm1vnB8qfooNyzOwn4fbtSaWUDZNv_ldiwRUNaq2LDHopCQm1FIXPiZ2f7m743aCNqRlaVwPuZ7rfYdYvupTKwhmi8pVAoKgRplqTgrCM9eYknVevK0n-ZIye3DkZI7eEBAFPLUBP0DifwGS-_CVXQ14vUrQ8nS2_3GTsa6Xn8WL_K0cA9cIGRRnp-vw7_DoKTwsvy3HmGDqFY-Y7aTSOybj"
		"5Wb98IjZTk2911I1Ij55hCS9QIIESMGohVn0ozJHds8BG52ll1e3179915fnmRyj3Wu_w3w-hRFT3QvDBz8pmixAVP6biR2HBO3--ArZlTkw", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"LAST");

	ctrx_sync_on_bitmap(-122, -103, 175, 174, "snapshot94", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("NO_KEY", 0, "", "last");

	ctrx_key("ALT_KEY", 0, "", "last");

	ctrx_mouse_click(709, 472, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot94", "last");

	ctrx_mouse_click(416, 272, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", "last");

	ctrx_mouse_click(594, 265, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", "last");

	ctrx_mouse_down(529, 252, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", "last");

	ctrx_mouse_up(558, 365, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", "last");

	ctrx_mouse_down(519, 321, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", "last");

	ctrx_mouse_up(414, 177, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", "last");

	ctrx_mouse_click(410, 203, 2, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot98", "last");

	ctrx_key("ESC_KEY", 0, "", "last");

	ctrx_mouse_click(435, 271, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", "last");

	ctrx_mouse_click(45, 67, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", "last");

	ctrx_mouse_click(121, 59, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", "last");

	ctrx_mouse_click(60, 13, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot100", "last");

	ctrx_mouse_click(67, 0, 1, 0, "NULL=snapshot100", "last");

	ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, 0, 0, 1025, 769, "snapshot101", "last");

	ctrx_mouse_click(47, 412, 1, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot102", "last");

	lr_think_time(4);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", ACTIVATE, 7, 94, 1011, 574, "snapshot103", "last");

	ctrx_mouse_click(387, 271, 1, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2=snapshot104", "last");

	lr_think_time(4);

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	lr_think_time(9);

	ctrx_key("UP_ARROW_KEY", 0, "", "last");

	ctrx_key("UP_ARROW_KEY", 0, "", "last");

	ctrx_key("UP_ARROW_KEY", 0, "", "last");

	ctrx_key("UP_ARROW_KEY", 0, "", "last");

	ctrx_key("UP_ARROW_KEY", 0, "", "last");

	ctrx_key("UP_ARROW_KEY", 0, "", "last");

	ctrx_mouse_click(72, 309, 1, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2=snapshot157", "last");

	ctrx_key("DOWN_ARROW_KEY", 0, "", "last");

	ctrx_key("UP_ARROW_KEY", 0, "", "last");

	ctrx_key("ENTER_KEY", 0, "", "last");

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot161", "last");

	ctrx_mouse_click(20, 47, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot162", "last");

	ctrx_mouse_click(20, 42, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot163", "last");

	ctrx_mouse_click(38, 59, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot164", "last");

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", CREATE, 7, 94, 1011, 574, "snapshot165", "last");

	ctrx_mouse_click(432, 235, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot166", "last");

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot167", "last");

	ctrx_key("BACKSPACE_KEY", 0, "", "last");

	ctrx_type("3", "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", CREATE, 7, 94, 1011, 574, "snapshot172", "last");

	ctrx_mouse_down(994, 471, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot173", "last");

	ctrx_mouse_up(985, 273, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot174", "last");

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot175", "last");

	ctrx_mouse_click(425, 99, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot176", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_key("TAB_KEY", 0, "", "last");

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", CREATE, 7, 94, 1011, 574, "snapshot199", "last");

	ctrx_mouse_click(297, 272, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot200", "last");

	ctrx_sync_on_window("Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA ", ACTIVATE, 7, 6, 1011, 750, "snapshot201", "last");

	ctrx_mouse_double_click(297, 272, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot202", "last");

	ctrx_mouse_click(854, 718, 1, 0, "Edit Shipment SCV2200010347 - CEVTS1 - TESTING - Branch: CEVA =snapshot203", "last");

	lr_think_time(9);

	ctrx_sync_on_window("Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2", ACTIVATE, 7, 94, 1011, 574, "snapshot204", "last");

	ctrx_mouse_click(975, 10, 1, 0, "Shipments - CEVTS1 - TESTING - Branch: CEVA Logistics (Ireland_2=snapshot205", "last");

	ctrx_sync_on_window("CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire", ACTIVATE, 0, 0, 1025, 769, "snapshot206", "last");

	ctrx_mouse_click(14, 37, 1, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot207", "last");

	ctrx_mouse_click(1003, 16, 1, 0, "CargoWise One - CEVTS1 - TESTING - Branch: CEVA Logistics (Ire=snapshot208", "last");

	ctrx_logoff(0, "last");

	web_custom_request("ocsp.digicert.com_8", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t252.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0CK<j\\xAC\\xD2\\xC0\\xBB\\xD5\\xF5\\x1C\\xB8\\xAA\\xE3\\x95j", 
		"LAST");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("KeepAlive_3", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Home/KeepAlive", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("ctrxgoToDescription",2);

	lr_think_time(16);

	lr_start_transaction("weblogout");

	web_custom_request("ocsp.digicert.com_9", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t254.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		"LAST");

	web_custom_request("ocsp.digicert.com_10", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		"LAST");

	web_custom_request("envelope_11",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t256.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.032Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"7a1f2b73e13648ef81f5c2dfab1e4536\",\"init\":true,\"started\":\"2022-01-21T15:52:32.031Z\",\"timestamp\":\"2022-01-21T15:52:32.031Z\",\"status\":\"ok\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		"LAST");

	web_custom_request("envelope_12",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t257.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.030Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"3fbcf61a798c4f3c9c6893005ded0813\",\"init\":false,\"started\":\"2022-01-21T15:38:24.198Z\",\"timestamp\":\"2022-01-21T15:52:32.030Z\",\"status\":\"exited\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		"LAST");

	web_custom_request("ocsp.digicert.com_11", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		"LAST");

	web_custom_request("ocsp.digicert.com_12", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t259.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\n\\xFD\\xAC\\x1E\\xBC>\\xF9<\\x19\\xA8\r\\x0F8\\xC4\\xAC", 
		"LAST");

	web_custom_request("envelope_13",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t260.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.031Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"2a0299ac2ed54175b42aeb11f1e623cb\",\"init\":true,\"started\":\"2022-01-21T15:52:32.030Z\",\"timestamp\":\"2022-01-21T15:52:32.030Z\",\"status\":\"ok\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		"LAST");

	web_custom_request("gts1d4_6", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		"LAST");

	web_custom_request("gts1d4_7", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		"LAST");

	web_custom_request("gts1d4_8", 
		"URL=http://ocsp.pki.goog/gts1d4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t263.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB0\\xE3\\xFC\\x96\\xF6\\xAD\\xC3S\t\\x00\\x00\\x00\\x00\\xD8\\x1B^", 
		"LAST");

	web_custom_request("envelope_14",
		"URL=https://sentry.io/api/1240805/envelope/?sentry_key={sentry_key}&sentry_version=7",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://cevalogistics.cloud.com/",
		"Snapshot=t264.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body={\"sent_at\":\"2022-01-21T15:52:32.032Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.2\"}}\n"
		"{\"type\":\"session\"}\n"
		"{\"sid\":\"2a0299ac2ed54175b42aeb11f1e623cb\",\"init\":false,\"started\":\"2022-01-21T15:52:32.030Z\",\"timestamp\":\"2022-01-21T15:52:32.031Z\",\"status\":\"exited\",\"errors\":0,\"did\":\"3ba2c1f9-b331-40d8-9b22-9e98ff025d77\",\"attrs\":{\"release\":\"3a28a4950f\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:96.0) Gecko/20100101 Firefox/96.0\"}}",
		"LAST");

	web_custom_request("ocsp.sca1b.amazontrust.com_3", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0Fa@\\xBAJF\\x0B\\x8F\\x10\\x15\\x8Aa\\x1B[\\xF1t", 
		"EXTRARES", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/Logout.6641e355800cef753867.js", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/guide.json/c51a876e-13e7-4d6e-78d0-f764775a736d?jzb="
		"eJyVUcuO00AQ_Jfh6qzzYmPnhpYFcQAhZWEPCEXtmY5pZTxjTbfzEMq_b8deGSRy4WDJqprqqq7-bQ7EJDF9cmZtFhXM7WxXTqrFYjZZTl0xKav5fFJiWex20_lbt1qZzIC1sQvSS5ZFsZoWy3uFu-QV-CXS8jrPLR7Ax5pYyPKd9bFzdzY2-QNJolO-UU98xip_k-ur2IkOaFDAgYBZj7Guv_Qf0Yi_gNABzXoHnjEzR97SkR8DVB51zh-UrwE-pBjkKT7HtOcWLH6mOqk-ho8dObyhiuE7BJLz-9gAhZHxEOoOarU1GLbfNuYytjRu8FdT1m5bIPcYhMRjg0Eehqf3tzhWMdR1wrqPllngrNEvoLAFj0lxPMI5O2KTnTA45L3EdvDRssH_azS7SV6dSLgZpK8LPJ3bfq-TYArgB474KyQJqAd6rUDB_sgbTAeyqKN-_NQWWkg6-N3YxeVyeQFGQNfp&v=2.121.0_prod&ct="
		"1642780352062", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642780352077&jzb="
		"eJztWG1zmzgQ_ise-jXEiBcD_Za6uatn7pJr41560-kwQgijWiCMBH65yX_vYmo7b766rXGaG_uLAcE-K6322Wf18V9NzXOqvdRiQUqpnWhhIaaSFoFiKTxGPdt0PcNyDM8yT7SKSaZEEbAIvrBCbBIU-3poWUi3jcjT_dA0dZ_6XhwbphO5LhjEhIgyU803tue5hmf34HlZcHiQKJXLl90uoRXmYsSkYkSeEi7K6JSItNtnqmCz7hWg0msadl90EwGOnWh5IXKpvQT_cTGiqrkagcUXEcwkpZmCl5aY8E84vFpfKKZ4PdvGbOdaFGOZY1IbxEoVtcEbeGsG9jTtBi5zXICpIQ4HYCorOYfR5kabfTDD-e-_nfkYz5yLixxsxAVO6XIwLC9D98PbuXt-9VpcvDuHQUmlZCJbDvd9S2bmxO-_mfBX6O2gXvi5ooBv-dbNye5Rsf3nEZXXg78fxKOgUpQFoYMsFgGa50QwWxfBpX5nYBIvin"
		"SyiV0ThFW06miwLKIzsKcjDSKWzgfNvQE4CePR5rYJ5jmn6caxV--Hw8uLB76R5Qz1kgVBWColss4yFIE3Gk2R6kxlyXSEkOXFi22ufb8vjy1SzOmsLzKFWQbxRyEvTOK3C6kYp-eZogWNAr_Cc5F0KJpO_PBzDzUzT-jYGU86tBcnU8yN_blz9dfZw1goIfiQ5QGdLELltDv31daTAZrOjN6sTr4W4QguRCkpf0djyIC4lKjOohYBW945OKz3Krwb2F6SknSPO-O8PxxsEhWQcpxRbpxatmcYnmk6nmG6Pa_Ojd2nCjXtNjbc7oB9f7pNapocts2s3fWdsghYNZgsSCTRVkqMsMI6FBO1_Lj5Rm8IrYvzXOoG0g3d-AGyfNSnmhDkAuVVBIQgnETMthLCPdeI4GWa7deTdISJWjmydY32CIhsGiubriDNA0BSC6ps1aFlFaHR9tX-6SQjTS7fmy-yFrwHsUZIojDZvg9vw6O78HD7fWts"
		"eiY2sjVmrVRaxyQ0n0_Ha8xaNbW-lyaOZ3lrSK8VSKAAzghWoEXfCLmJ7i5gzk58-ery9T8_VHnu0TG6eey30ud9kJjimkna-UPgaAik8jSK3fQ9dEuyE1jc8X9Jdv-ZNFLbql6zUyvpOZ8tYD0Z2bF9CBIo3ISNF-vk2CoE7xWZFEuVUBzts8gcueEX4YYVF6wb-SuKC5JsGvuzOsc5HoG1jxqHSq19ehKSQIbt7t7XI9OC7HgWJPFYw3agZp1FxqnrGJaLeobtuLblu9a3GvgrNec0UM448sIDdvEH4IepUI7TcvfYLFiPhVMOTKT4ZBaWe5Sf2yGrwq1S0H8N5CFk_TguoxAaia90W2-s76k27yGr_6RZeWeT_1y3eay7x7r7i2nyVfk9exrljbze7cPybyhvZJmwVM_1sHy5FydVnFYtH0l-pRmnZ093PWJa11odVzBQ7CnlG2OBM8Y4L1s-Yz5KlqNkOUqWo2Q5Spb__zHiRrX8Gm"
		"cDpmlZN5--AItOnn0", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"Url=https://citrix-cloud-data.customer.pendo.io/data/ptm.gif/c51a876e-13e7-4d6e-78d0-f764775a736d?v=2.121.0_prod&ct=1642780352083&jzb="
		"eJztlm9v2joUxr8K8t5CifOHJH13S7krUgfq2m6dqqqyEwc8TBxim5BNfPeeQEfLbbmityu9k-AN-N_5HT8c28_1T6TLjKFDlMjIKFRHNJeFYvmt5mPoxi3X9gPL8XCIW3U05Yprmd_yGFY4lNgRTsIGdRzccK04aITUthshC4MksWwv9n0ISKJImlQv17hB4FuB24J-kwvoGGqdqcNmM2JTIuSAK80jdRAJaeKDSI6bba5zPmueA5V9ZbT5oTmUkFgdZbnMFDqE_Ek-YHr5awART7swuoDBdyRgDiqU4Y2iNDl3oE9zLWBrqRECstM6vw9DeRqzGUy30LyOxmV32bQhypCL-KGZkZyluiPY-IF6efo81eipFYebqI851joHms9xjrtfnge1dJmUkx2A8GA6mITRNkI28JqSeB0MzReBC6k9r_rr33yHLU4LEdSYFpMZNdYukNPcn47TX0i8A-QoMTHVNYaxwnSoNp-MmGjS0AxOZhVkTJ"
		"QeMhJfwiXxiaXmP5yV8077otvvbVJCBd53p8ZaKnYTdyslXllYuT_kox8rJbwXKrGmwGvrIGJZWYxWuVQX6JvX3sQLHKj2e2TwJkiSZYJHRHOZnkilVxlsA_O2qqqj_vG3JxvcJvw_ihbPH39g_QweF3QqB7W-0ajqWdIvCO0CaxkXLr2qgWZXNi0__v1XSMjM6_Uy4Cc5GbPFIDV96l-dlX7n_Fj2PndgUDGlQJLFcDt0VGpPwvbJRBzhs-oZoyVUG6QUuuG8vnqqI1BytPmpti07_DOe6o0lGc8M8Xdy1QcYF0m1x99E2ruPvfvYu4-9-9i7j737eL37eOo_wE8IMoAg10iwRKObdzEkNvYfGxIhoQ7_xY847v_Dj8AsudBw5UiqzO_zdXzvPaR0sD-_uQOE1IrM", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"LAST");

	web_custom_request("ocsp.sca1b.amazontrust.com_4", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0Fa@\\xBAJF\\x0B\\x8F\\x10\\x15\\x8Aa\\x1B[\\xF1t", 
		"LAST");

	web_add_cookie("CtxsDesktopAutoLaunchDone=no; DOMAIN=cevalogistics.cloud.com");

	web_add_header("Csrf-Token",
		"{CitrixXenApp_CsrfToken}");

	web_add_header("X-Citrix-IsUsingHTTPS", 
		"Yes");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("Disconnect", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/Sessions/Disconnect", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://cevalogistics.cloud.com/Citrix/StoreWeb/", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		"EncType=", 
		"EXTRARES", 
		"Url=https://ctx-ws-assets.cloud.com/assets/workspace/1102480f35b518b91e0a.png", "Referer=https://cevalogistics.cloud.com/", "ENDITEM", 
		"LAST");

	web_custom_request("ocsp.digicert.com_13", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\xB4\\x95\\xDC\\xE1?\\x80\\xD8\\xE2\\x17\\x01\\xB6\\xFDm\\xBD_", 
		"LAST");

	web_custom_request("ocsp.digicert.com_14", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t269.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\xB4\\x95\\xDC\\xE1?\\x80\\xD8\\xE2\\x17\\x01\\xB6\\xFDm\\xBD_", 
		"LAST");

	web_custom_request("ocsp.digicert.com_15", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\"{\\x1E\\xADY\\x81\\xBDY\\x98^\\x0F\\xC5\\xE0\\xE6\\xF8", 
		"LAST");

	web_url("Logoff", 
		"URL=https://cevalogistics.cloud.com/Citrix/StoreWeb/IdpLogoff/Logoff", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		"LAST");

	web_websocket_close("ID=0", 
		"Code=1000", 
		"LAST");

	return 0;
}
# 6 "c:\\users\\demo\\documents\\vugen\\scripts\\ceva\\citrixica_multi1\\\\combined_CitrixICA_Multi1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 7 "c:\\users\\demo\\documents\\vugen\\scripts\\ceva\\citrixica_multi1\\\\combined_CitrixICA_Multi1.c" 2

