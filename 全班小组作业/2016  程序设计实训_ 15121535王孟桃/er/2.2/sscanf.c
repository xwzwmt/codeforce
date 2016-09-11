#include<stdio.h>/*原型：
int sscanf( const char *, const char *, ...);
形式参数：char
返回值：成功则返回参数数目，失败则返回-1，错误原因存于errno中。

*/
int main()
{
	char buf[512];
	sscanf("123456","%s",buf);//此处buf是数组名，它的意思是将123456以%s的形式存入buf中！ 
	printf("%s\n",buf); 
	sscanf("123456","%4s",buf);
	printf("%s\n",buf); 
	sscanf("123456abcdedf","%[^a-z]",buf);
	printf("%s\n",buf); 



	return 0;
}
//从一个字符串中读进与指定格式相符的数据


