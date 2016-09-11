/*strcmp：
//函数原型：extern int strcmp(const char *s1,const char *s2); 
//形式参数、返回类型的含义: 输入两个字符串，返回整数型。
//功能: 比较两个字符串
//返回值：设这两个字符串为str1，str2，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数。*/
#include <stdio.h> 
#include <string.h> 
int main() { 
    char string[20];
	char str[3][20];
	int i;
	for(i=0;i<3;i++)
		gets(str[i]);
	if(strcmp(str[0],str[1])>0)
		strcpy(string,str[0]);
	else
        strcpy(string,str[1]); 
    if(strcmp(str[2],string)>0) 
        strcpy(string,str[2]);
	printf("\nThe largest string is%s\n",string);
	return 0; 
} 
