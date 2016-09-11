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
//比较两个字符串设这两个字符串为str1，str2，若str1==str2，则返回零;若str1>str2，则返回正数;若str1<str2，则返回负数。
