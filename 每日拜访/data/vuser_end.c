vuser_end()
{

	lr_think_time(6);

	web_url("default.aspx_3", 
		"URL=http://180.153.154.42/default.aspx?method=LogOut", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/Module/VisitingData/Data/TaskData.aspx?mid=2306a333-36f0-4b32-a207-daa5fc3b01bd", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.aspx_3", 
		"URL=http://180.153.154.42/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/default.aspx?method=LogOut", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}