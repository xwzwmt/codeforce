/*strcmp��
//����ԭ�ͣ�extern int strcmp(const char *s1,const char *s2); 
//��ʽ�������������͵ĺ���: ���������ַ��������������͡�
//����: �Ƚ������ַ���
//����ֵ�����������ַ���Ϊstr1��str2����str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�������*/
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
