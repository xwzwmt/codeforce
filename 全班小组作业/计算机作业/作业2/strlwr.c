/*strlwr
//函数原型：extern char *strlwr(char *s);
//功能: 将字符串s转换为小写形式.只转换s中出现的大写字母，不改变其它字符。返回指向s的指针。
*/
#include <stdio.h>
#include <string.h>
int main() 
{
	char s[]="Copywrite 1999-2000 GGV Technologies";
	printf("%s",strlwr(s));
	getchar();
	return 0;
}
