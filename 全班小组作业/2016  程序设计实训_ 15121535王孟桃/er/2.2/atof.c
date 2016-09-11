#include<stdlib.h>/*原型:
double atof(const char *nptr);
形式参数：char
返回值：浮点型
*/
#include<stdio.h>
int main()
{
	double d;
	char *str="12345.67";
	d=atof(str);
	printf("string=%s double=%lf\n",str,d);
	return 0;
} 
//把字符串转换成浮点数


