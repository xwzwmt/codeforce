#include<stdio.h>
/*函数原型int puts(char *string);
   puts函数执行成功返回非负数。执行失败返回EOF。
   如果参数为NULL，则设置errno为EINVAL，并返回EOF。*/
int main()
{
	char a[80];
	gets(a);
	puts(a);
	return 0;
}
