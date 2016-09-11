// C_String01.c		此文件中需要补充4个函数的定义（即函数实现）
#include <stdlib.h>
#include <string.h>

// 函数 SWAP1，SWAP2，SWAP3，STRCAT的定义

void SWAP1(char *x,char *y)
{
	int L,i;
    char c;
	L = strlen(y);
    for (i=0;i<L;i++){
		c=x[i];
		x[i]=y[i];
		y[i]=c;}; 



}
void SWAP2(char *a,char *b)
{
	char c[10];
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
}
void SWAP3(char **str1,char **str2)
{
	char *t;
	t=*str1;
	*str1=*str2;
	*str2=t;
}

void STRCAT(char *str1,char *str2)
{
char *str3;
	str3 = (char*)calloc(4, sizeof(char));
	strcpy(str3, " & ");
	str1=strcat(str1,str3);
	str1=strcat(str1,str2);
}
