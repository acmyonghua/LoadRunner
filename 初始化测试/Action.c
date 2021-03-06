Action()

{
	//unsigned long *ftp = NULL;
    ftp = 0;

    web_reg_save_param("WcfResponse",
        "LB=\"DownloadFile\":\"",
        "RB=\"",
        "Ord=1",
        "RelFrameId=1",
        "Search=Body",
        "IgnoreRedirections=Yes",
    LAST);

	web_reg_save_param("FileName",
        "LB=\\",
        "RB=\"",
        "Ord=1",
        "RelFrameId=1",
        "Search=Body",
        "IgnoreRedirections=Yes",
    LAST);


 //加个头文件，用来说明使用的方法
   web_add_auto_header("Content-Type","application/json");
   
   lr_rendezvous("WCF集合点");

   lr_start_transaction("WCF调用");

   web_custom_request("ListThemes",

                       //"URL=http://180.153.154.44:3005/Impls/TableModeDataSync.svc/ProcessRequest",
						 "URL=http://112.124.9.72:3005/Impls/TableModeDataSync.svc/ProcessRequest", 

                       "Method=POST",

                       "Resource=0",

                       "RecContentType=application/json",

						"Referer=",                      

						"Body={\"pRequest\":{\"UploadFile\":\"\",\"IsLogin\":true,\"UserID\":\"{user}\",\"Token\":\"\",\"LastUpdateTime\":\"1900-01-01 00:00:00 000\",\"Version\":\"1\",\"OperationCode\":2,\"Platform\":\"ace\",\"ClientID\":\"58\"}}",

						"TargetFrame=",

                       LAST);
   
   lr_end_transaction("WCF调用", LR_AUTO);


   lr_output_message("This is the first flightnumber %s",lr_eval_string("{WcfResponse}"));
   lr_output_message("This is the first flightnumber %s",lr_eval_string("{FileName}"));


	  if(web_get_int_property(HTTP_INFO_RETURN_CODE)==200)

		  lr_output_message("OK!!");
	  else

		  lr_error_message("Fail!!");


	lr_think_time(10);
      
	lr_rendezvous("FTP下载");

	lr_start_transaction("下载文件");

     ftp_logon_ex(&ftp,"FtpLogon",
					//"URL=ftp://dmstest:dms.test=8021@180.153.154.44:8021",//登录FTP
				  "URL=ftp://dmstest:dms.test=8021@112.124.9.72:8021",
				  //"URL=ftp://jack.ch******@192.168.0.30:21",
				LAST);

     ftp_get_ex(&ftp,"Get_Files",
				   "SOURCE_PATH={WcfResponse}", //FTP文件位置[已经参数化]
				   "TARGET_PATH=D:\\FTP\\{FileName}", //下载到本地的路径[参数化文件名]
					"PASSIVE=TRUE",
				   "MODE=BINARY", //下载方式，[二进制]
                 //"MODE=ASCII",
				    ENDITEM ,
				LAST);



 	 ftp_logout_ex(&ftp);//释放FTP连接

	lr_end_transaction("下载文件", LR_AUTO);


     return 0;

}


