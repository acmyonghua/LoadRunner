Action()
{
	/*
		��֤�û����Ƿ�Ϸ���Ψһ�Խӿ�
    */
	char str[]="0"; //���öԱȵĹؼ���
    char *address="C:\\Users\\Administrator\\Desktop\\������+У��.log"; //����log�ļ�����ĵ�ַ������
    long filename;//����洢�ļ�ָ��ı���

    if ((filename=fopen(address,"a+"))==NULL)//���ļ�
    {
        lr_error_message("can not open this file,address=%s",address);
        return -1;
    }

	//ץȡ���
	web_reg_save_param("fhz01",
		"LB=",
		"RB=",
		"Ord=1",
		"RelFrameId=1",
		"Search=Body",
		"IgnoreRedirections=Yes",
		LAST);

    //haolyy_sms_template����code�洢���Ƿ������� 3275����ע����֤��

    //������֤��
	web_url("121.41.24.43", 
		"URL=http://121.41.24.43/?m=General&service=Account.SendSms&mobile=13482030055&type=3275&sendType=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

    //��֤��У��
    web_url("121.41.24.43", 
        "URL=http://121.41.24.43/?m=General&service=Account.CheckSms&mobile=13482030055&vericode={��֤��}&type=3275", 
        "TargetFrame=", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=", 
        "Snapshot=t1.inf", 
        "Mode=HTML", 
        LAST);
    

	//��¼���
// 	fprintf(filename,"����ֵ:@%s@Ԥ��ֵ:@%s@����ֵ:@%s@\n",lr_eval_string("&mobile=13482030055"),lr_eval_string("Ԥ��ֵ"),lr_eval_string("{code}"));
//
// 	fclose(filename);//�ر��ļ�

	return 0;
}