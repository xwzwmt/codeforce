// C_String01.c		���ļ�����Ҫ����4�������Ķ��壨������ʵ�֣�
#include <stdlib.h>
#include <string.h>

// ���� SWAP1��SWAP2��SWAP3��STRCAT�Ķ���

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
