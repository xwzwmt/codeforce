int __cdecl strcmp(const char *src,const char *dst)
{     int ret=0;     
	while(!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst)   
		++src,++dst;     
		if(ret<0)     
			ret=-1;   
			else if(ret>0)     
				ret=1;   
				return(ret);
				} 
//�Ƚ������ַ������������ַ���Ϊstr1��str2����str1==str2���򷵻���;��str1>str2���򷵻�����;��str1<str2���򷵻ظ�����
