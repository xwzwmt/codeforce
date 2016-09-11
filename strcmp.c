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
//转换s中出现的大写字母，不改变其它字符