Action()
 {
	 unsigned long *ftp_session=NULL;
	 char *address="D:\\FTP\\01.txt"; //����log�ļ�����ĵ�ַ������
     long filename;//����洢�ļ�ָ��ı���


	 web_reg_save_param("WcfResponse",
        "LB=\"ResultCode\":",
        "RB=}",
        "Ord=1",
        "RelFrameId=1",
        "Search=Body",
        "IgnoreRedirections=Yes",
    LAST);
     
	lr_rendezvous("�ϴ�����");

		
	lr_start_transaction("�ļ��ϴ�");

     ftp_logon_ex(&ftp_session,"ftp_logon",
					//"URL=ftp://dmstest:dms.test=8021@180.153.154.44:8021",
				      "URL=ftp://dmstest:dms.test=8021@112.124.9.72:8021",
				LAST);

     ftp_put_ex(&ftp_session, "Ftp_Put",
					"SOURCE_PATH=D:\\FTP\\Package\\{FileName}",
					"TARGET_PATH=\\DataSyncTesting\\{FileName}",
					"PASSIVE=TRUE",
					"MODE=BINARY",
					ENDITEM,
				LAST);

	 //�ͷ�FTP����
 	 ftp_logout_ex(&ftp_session);



	lr_end_transaction("�ļ��ϴ�", LR_AUTO);

	
	// lr_think_time(30);

   web_add_auto_header("Content-Type","application/json");

   lr_rendezvous("WCF���ϵ�");

   lr_start_transaction("WCF����");

   web_custom_request("ListThemes",

                      // "URL=http://180.153.154.44:3005/Impls/TableModeDataSync.svc/ProcessRequest",
					// "URL=http://192.168.0.48:3003/Impls/TableModeDataSync.svc/ProcessRequest",
					  "URL=http://112.124.9.72:3005/Impls/TableModeDataSync.svc/ProcessRequest", 

                       "Method=POST",

                       "Resource=0",

                       "RecContentType=application/json",

						"Referer=",

						"Body={\"pRequest\":{\"UploadFile\":[\"DataSyncTesting\/{FileName}\"],\"UserID\":\"{User}\",\"Token\":\"\",\"LastUpdateTime\":\"2013-07-16 11:40:11 290\",\"Version\":\"1\",\"OperationCode\":3,\"Platform\":\"SCH-I779\",\"ClientID\":\"58\"}}",
						"TargetFrame=",

                       LAST);



   lr_output_message("����ֵΪ%s",lr_eval_string("{WcfResponse}"));

//    if (atoi(lr_eval_string("{WcfResponse}"))<=99){
// 	   lr_output_message("�ɹ�");
//    }else{
// 	   lr_output_message("ʧ��");
//    }

   lr_end_transaction("WCF����", LR_AUTO);


    if ((filename=fopen(address,"a+"))==NULL)//���ļ�
    {
        lr_error_message("�޷����ļ�,��ַ��=%s",address);
        return -1;
    }

   if (atoi(lr_eval_string("{WcfResponse}"))<=99){
	   lr_output_message("�ɹ�");
	   fprintf(filename,"����ɹ�,����ֵ��%s\n",lr_eval_string("{WcfResponse}"));
   }else{
	   lr_output_message("ʧ��");
	   fprintf(filename,"����ʧ��,����ֵ��%s\n",lr_eval_string("{WcfResponse}"));
   }

   fclose(filename);//�ر��ļ�
 
     return 0;
 }
