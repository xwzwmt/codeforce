#include<stdio.h>/*atoi
原型：
int atoi(const char *nptr);
形式参数：char
返回值：检测到非数字(包括结束符 \0) 字符时停止转换，返回整型数。否则，返回零。
*/
#include<string.h>
#include <stdlib.h>
int main()
{
	char a[80];
	int s;
	gets(a);
	s=atoi(a);
	printf("%d",s);
	
	

	return 0;
}
