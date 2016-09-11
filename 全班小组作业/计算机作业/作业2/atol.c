#include <stdlib.h>/*atol
原型：
long int atol ( const char * str );
形式参数：char
返回值：返回转换后的长整型数。如果传入的字符串为空，或者字符串包含的内容非阿拉伯数字序列，则函数返回默认值0。
*/
#include <stdio.h>
int main(void)
{
	long l; 
    char str[80];
	gets(str);
	l = atol(str); 
	printf("string = %s integer = %ld\n", str, l);
	return(0);
} 

