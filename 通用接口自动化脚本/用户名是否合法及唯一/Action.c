Action()
{
	/*
		��֤�û����Ƿ�Ϸ���Ψһ�Խӿ�
    */
	char str[]="0"; //���öԱȵĹؼ���
    char *address="C:\\Users\\Administrator\\Desktop\\�û����Ƿ�Ϸ�.log"; //����log�ļ�����ĵ�ַ������
    long filename;//����洢�ļ�ָ��ı���

    if ((filename=fopen(address,"a+"))==NULL)//���ļ�
    {
        lr_error_message("can not open this file,address=%s",address);
        return -1;
    }

	//ץȡ���
	web_reg_save_param("code",
		"LB=",
		"RB=",
		"Ord=1",
		"RelFrameId=1",
		"Search=Body",
		"IgnoreRedirections=Yes",
		LAST);
	
	web_url("121.41.24.43", 
		"URL=http://121.41.24.43/?m=General&service=Account.CheckUserName{�������}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	//��¼���
	fprintf(filename,"����ֵ:@%s@Ԥ��ֵ:@%s@����ֵ:@%s@\n",lr_eval_string("{�������}"),lr_eval_string("{Ԥ��ֵ}"),lr_eval_string("{code}"));

	fclose(filename);//�ر��ļ�

	return 0;
}