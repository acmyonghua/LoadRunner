Action()
{
	char *address="C:\\Users\\Administrator\\Desktop\\haolyy.txt"; //����log�ļ�����ĵ�ַ������
    long filename;//����洢�ļ�ָ��ı���

	char *address1="C:\\Users\\Administrator\\Desktop\\vip.txt"; //����log�ļ�����ĵ�ַ������
    long filename1;//����洢�ļ�ָ��ı���

	if ((filename=fopen(address,"a+"))==NULL)//���ļ�
    {
        lr_error_message("�޷��򿪴��ļ�,address=%s",address);
        return -1;
    }

	if ((filename1=fopen(address1,"a+"))==NULL)//���ļ�
    {
        lr_error_message("�޷��򿪴��ļ�,address=%s",address1);
        return -1;
    }

	web_submit_data("haolyy",
	"Action=http://upload.haolyy.com/index.php?user&q=login",
	"Method=POST",
	"TargetFrame=",
	"RecContentType=text/html",
	"Referer=http://upload.haolyy.com/index.php?user&q=login",
	//"Snapshot=t98.inf",
	"Mode=HTML",
	ITEMDATA,
	"Name=ajax", "Value=1", ENDITEM,
	"Name=keywords", "Value={w_name1}", ENDITEM,
	"Name=password", "Value=abcd1234", ENDITEM,
	LAST);

	//��׬����
	web_reg_save_param("haolyy.yzsy",
	"LB=<ul class=\"shouy_zhuan\">\r\n      <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�ѻ���
	web_reg_save_param("haolyy.yhjl",
	"LB=<ul class=\"shouy_zhuan3\">\r\n      <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�ۻ�Ͷ��
	web_reg_save_param("haolyy.ljtz",
	"LB=<ul class=\"shouy_zhuan2\">\r\n            <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//���ձ�Ϣ
	web_reg_save_param("haolyy.dsbx",
	"LB=<ul class=\"shouy_zhuan4\">\r\n      <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�������
	web_reg_save_param("haolyy.kyye",
	"LB=<p><span>�������</span><span class=\"hc_sp2\">",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�����ʽ�
	web_reg_save_param("haolyy.djzj",
	"LB=<p><span>�����ʽ�</span><span class=\"hc_sp2\">",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�ʲ��ܶ�
	web_reg_save_param("haolyy.zcze",
	"LB=var t_l = \"",
	"RB=\";\r\n",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//���
	web_reg_save_param("haolyy.hb",
	"LB=<span id=\"hb\">",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�����
	web_reg_save_param("haolyy.tyj",
	"LB=�����<span> ",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//���
	web_reg_save_param("haolyy.hdj",
	"LB=���<span> ",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

// 	//����ؿ���
// 	web_reg_save_param("haolyy.zjhkr",
// 	"LB=����ؿ��� <span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//��ʣ
// 	web_reg_save_param("haolyy.hs",
// 	"LB=<dt class=\"rli_gr\">",
// 	"RB=</dt>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//�ؿ���
// 	web_reg_save_param("haolyy.hkje",
// 	"LB=huikuanxiq_jie\"><span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//=======================================================================================================================
	//����������
	web_reg_save_param("haolyy.sy05",
	"LB=\r\n2015��05�� 	",
	"RB=%\r\n2015��06",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy06",
	"LB=\r\n2015��06�� 	",
	"RB=%\r\n2015��07",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy07",
	"LB=\r\n2015��07�� 	",
	"RB=%\r\n2015��08",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy08",
	"LB=\r\n2015��08�� 	",
	"RB=%\r\n2015��09",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy09",
	"LB=\r\n2015��09�� 	",
	"RB=%\r\n2015��10",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
    web_reg_save_param("haolyy.sy10",
	"LB=\r\n2015��10�� 	",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	web_custom_request("ListThemes",
	"URL=http://upload.haolyy.com/?user&q=code/account/my",
	"Method=GET",
	"Resource=0",
	"RecContentType=application/json",
	"Referer=",
	"TargetFrame=",
	LAST);

//=============================��ʼ��ȡVIP��������================================================
	web_submit_data("login_2",
	"Action=http://a.haolyy.com/auth/login",
	"Method=POST",
	"TargetFrame=",
	"RecContentType=application/json",
	"Referer=http://a.haolyy.com/login",
	"Snapshot=t47.inf",
	"Mode=HTML",
	ITEMDATA,
	"Name=loginType", "Value=3", ENDITEM,
	"Name=username", "Value={v_user1}", ENDITEM,
	"Name=password", "Value=abcd1234", ENDITEM,
	//"Name=_token", "Value=5kJrYluEBO0QkaiakWvcQHJ4EhhygSL0eRTGMfNU", ENDITEM,
	LAST);

	//��׬����
	web_reg_save_param("vip.yzsy",
	"LB=<li class=\"z1\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�ѻ���
	web_reg_save_param("vip.yhjl",
	"LB=<li class=\"z2\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�ۻ�Ͷ��
	web_reg_save_param("vip.ljtz",
	"LB=<li class=\"z3\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//���ձ�Ϣ
	web_reg_save_param("vip.dsbx",
	"LB=<li class=\"z4 last\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�������
	web_reg_save_param("vip.kyye",
	"LB=\t<p>可用余额<span>",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�����ʽ�
	web_reg_save_param("vip.djzj",
	"LB=<p>冻结金额<span>",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�ʲ��ܶ�
	web_reg_save_param("vip.zcze",
	"LB=<p>资产总额<span>",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//���
	web_reg_save_param("vip.hb",
	"LB=<p class=\"hb ht\">红包<span>",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//�����
	web_reg_save_param("vip.tyj",
	"LB=<p class=\"tyj ht\">体验�\x91<span>",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//���
	web_reg_save_param("vip.hdj",
	"LB=<p class=\"tyj ht\">活动�\x91<span>",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

// 	//����ؿ���
// 	web_reg_save_param("vip.zjhkr",
// 	"LB=class=\"fr\">",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//��ʣ
// 	web_reg_save_param("vip.hs",
// 	"LB=<div class=\"memb_alarm\">还剩<span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//�ؿ���
// 	web_reg_save_param("vip.hkje",
// 	"LB=<p class=\"memb_money\"><span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//=======================================================================================================================
	//����������
	web_reg_save_param("vip.sy05",
	"LB=2015�\xB405�\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy06",
	"LB=2015�\xB406�\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy07",
	"LB=2015�\xB407�\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy08",
	"LB=2015�\xB408�\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy09",
	"LB=2015�\xB409�\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
    web_reg_save_param("vip.sy10",
	"LB=2015�\xB410�\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

 	web_custom_request("vipaccount",
	"URL=http://a.haolyy.com/user",
	"Method=GET",
	"Resource=0",
	"RecContentType=application/json",
	"Referer=",
	"TargetFrame=",
	LAST);

	//��¼���===============haolyy====================
// 	fprintf(filename,"%s ",lr_eval_string("{haolyy.username}"));
// 	fprintf(filename,"��׬����:%s �ѻ���:%s �ۻ�Ͷ��:%s ���ձ�Ϣ:%s ",lr_eval_string("{haolyy.yzsy}"),lr_eval_string("{haolyy.yhjl}"),lr_eval_string("{haolyy.ljtz}"),lr_eval_string("{haolyy.dsbx}"));
// 	fprintf(filename,"�������:%s �����ʽ�:%s �ʲ��ܶ�:%s ",lr_eval_string("{haolyy.kyye}"),lr_eval_string("{haolyy.djzj}"),lr_eval_string("{haolyy.zcze}"));
// 	fprintf(filename,"���:%s �����:%s ���:%s ",lr_eval_string("{haolyy.hb}"),lr_eval_string("{haolyy.tyj}"),lr_eval_string("{haolyy.hdj}"));
// 	fprintf(filename,"����ؿ���:%s ��ʣ:%s �ؿ���:%s \n",lr_eval_string("{haolyy.zjhkr}"),lr_eval_string("{haolyy.hs}"),lr_eval_string("{haolyy.hkje}"));

	fprintf(filename,"%s ",lr_eval_string("{w_name2}"));
	fprintf(filename,"%s %s %s %s ",lr_eval_string("{haolyy.yzsy}"),lr_eval_string("{haolyy.yhjl}"),lr_eval_string("{haolyy.ljtz}"),lr_eval_string("{haolyy.dsbx}"));
	fprintf(filename,"%s %s %s ",lr_eval_string("{haolyy.kyye}"),lr_eval_string("{haolyy.djzj}"),lr_eval_string("{haolyy.zcze}"));
	fprintf(filename,"%s %s %s ",lr_eval_string("{haolyy.hb}"),lr_eval_string("{haolyy.tyj}"),lr_eval_string("{haolyy.hdj}"));
	//fprintf(filename,"%s %s %s ",lr_eval_string("{haolyy.zjhkr}"),lr_eval_string("{haolyy.hs}"),lr_eval_string("{haolyy.hkje}"));
	fprintf(filename,"%s %s %s %s %s %s \n",lr_eval_string("{haolyy.sy05}"),lr_eval_string("{haolyy.sy06}"),lr_eval_string("{haolyy.sy07}"),lr_eval_string("{haolyy.sy08}"),lr_eval_string("{haolyy.sy09}"),lr_eval_string("{haolyy.sy10}"));

// 	fprintf(filename,"%s\n",lr_eval_string("{w_name2}"));
// 	fprintf(filename,"��������%s\n"
// 					 "�ѻ���%s\n"
// 					 "�ۻ�Ͷ��%s\n"
// 					 "���ձ�Ϣ%s\n",
// 			lr_eval_string("{haolyy.yzsy}"),
// 			lr_eval_string("{haolyy.yhjl}"),
// 			lr_eval_string("{haolyy.ljtz}"),
// 			lr_eval_string("{haolyy.dsbx}"));
//
// 	fprintf(filename,"�������%s\n"
// 					 "�����ʽ�%s\n"
// 					 "�ʲ��ܶ�%s\n",
// 			lr_eval_string("{haolyy.kyye}"),
// 			lr_eval_string("{haolyy.djzj}"),
// 			lr_eval_string("{haolyy.zcze}"));
//
// 	fprintf(filename,"���%s\n"
// 					 "�����%s\n"
// 					 "���%s\n",
// 			lr_eval_string("{haolyy.hb}"),
// 			lr_eval_string("{haolyy.tyj}"),
// 			lr_eval_string("{haolyy.hdj}"));
//
// 	fprintf(filename,"����ؿ���%s\n"
// 					 "��ʣ%s\n"
// 					 "�ؿ���%s\n",
// 			lr_eval_string("{haolyy.zjhkr}"),
// 			lr_eval_string("{haolyy.hs}"),
// 			lr_eval_string("{haolyy.hkje}"));
//
// 	fprintf(filename,"5��%s\n"
// 					 "6��%s\n"
// 					 "7��%s\n"
// 					 "8��%s\n"
// 					 "9��%s\n"
// 					 "10��%s\n",
// 			lr_eval_string("{haolyy.sy05}"),
// 			lr_eval_string("{haolyy.sy06}"),
// 			lr_eval_string("{haolyy.sy07}"),
// 			lr_eval_string("{haolyy.sy08}"),
// 			lr_eval_string("{haolyy.sy09}"),
// 			lr_eval_string("{haolyy.sy10}"));
//
 	fclose(filename);//�ر��ļ�


	//��¼���===============vip====================
// 	fprintf(filename1,"%s ",lr_eval_string("{vip.username}"));
// 	fprintf(filename1,"��׬����:%s �ѻ���:%s �ۻ�Ͷ��:%s ���ձ�Ϣ:%s ",lr_eval_string("{vip.yzsy}"),lr_eval_string("{vip.yhjl}"),lr_eval_string("{vip.ljtz}"),lr_eval_string("{vip.dsbx}"));
// 	fprintf(filename1,"�������:%s �����ʽ�:%s �ʲ��ܶ�:%s ",lr_eval_string("{vip.kyye}"),lr_eval_string("{vip.djzj}"),lr_eval_string("{vip.zcze}"));
// 	fprintf(filename1,"���:%s �����:%s ���:%s ",lr_eval_string("{vip.hb}"),lr_eval_string("{vip.tyj}"),lr_eval_string("{vip.hdj}"));
// 	fprintf(filename1,"����ؿ���:%s ��ʣ:%s �ؿ���:%s \n",lr_eval_string("{vip.zjhkr}"),lr_eval_string("{vip.hs}"),lr_eval_string("{vip.hkje}"));

	fprintf(filename1,"%s ",lr_eval_string("{v_user2}"));
	fprintf(filename1,"%s %s %s %s ",lr_eval_string("{vip.yzsy}"),lr_eval_string("{vip.yhjl}"),lr_eval_string("{vip.ljtz}"),lr_eval_string("{vip.dsbx}"));
	fprintf(filename1,"%s %s %s ",lr_eval_string("{vip.kyye}"),lr_eval_string("{vip.djzj}"),lr_eval_string("{vip.zcze}"));
	fprintf(filename1,"%s %s %s ",lr_eval_string("{vip.hb}"),lr_eval_string("{vip.tyj}"),lr_eval_string("{vip.hdj}"));
	//fprintf(filename1,"%s %s %s ",lr_eval_string("{vip.zjhkr}"),lr_eval_string("{vip.hs}"),lr_eval_string("{vip.hkje}"));
	fprintf(filename1,"%s %s %s %s %s %s \n",lr_eval_string("{vip.sy05}"),lr_eval_string("{vip.sy06}"),lr_eval_string("{vip.sy07}"),lr_eval_string("{vip.sy08}"),lr_eval_string("{vip.sy09}"),lr_eval_string("{vip.sy10}"));

// 	fprintf(filename1,"%s\n",lr_eval_string("{v_user2}"));
// 	fprintf(filename1,"��������%s\n"
// 					 "�ѻ���%s\n"
// 					 "�ۻ�Ͷ��%s\n"
// 					 "���ձ�Ϣ%s\n",
// 			lr_eval_string("{vip.yzsy}"),
// 			lr_eval_string("{vip.yhjl}"),
// 			lr_eval_string("{vip.ljtz}"),
// 			lr_eval_string("{vip.dsbx}"));
//
// 	fprintf(filename1,"�������%s\n"
// 					 "�����ʽ�%s\n"
// 					 "�ʲ��ܶ�%s\n",
// 			lr_eval_string("{vip.kyye}"),
// 			lr_eval_string("{vip.djzj}"),
// 			lr_eval_string("{vip.zcze}"));
//
// 	fprintf(filename1,"���%s\n"
// 					 "�����%s\n"
// 					 "���%s\n",
// 			lr_eval_string("{vip.hb}"),
// 			lr_eval_string("{vip.tyj}"),
// 			lr_eval_string("{vip.hdj}"));
//
// 	fprintf(filename1,"����ؿ���%s\n"
// 					 "��ʣ%s\n"
// 					 "�ؿ���%s\n",
// 			lr_eval_string("{vip.zjhkr}"),
// 			lr_eval_string("{vip.hs}"),
// 			lr_eval_string("{vip.hkje}"));
//
// 	fprintf(filename1,"5��%s\n"
// 					 "6��%s\n"
// 					 "7��%s\n"
// 					 "8��%s\n"
// 					 "9��%s\n"
// 					 "10��%s\n",
// 			lr_eval_string("{vip.sy05}"),
// 			lr_eval_string("{vip.sy06}"),
// 			lr_eval_string("{vip.sy07}"),
// 			lr_eval_string("{vip.sy08}"),
// 			lr_eval_string("{vip.sy09}"),
// 			lr_eval_string("{vip.sy10}"));

 	fclose(filename1);//�ر��ļ�

	return 0;
}

