#include<stdio.h>
#include<string.h>

int mian(void){       
	int n;
 	char str1[100]="Ae";
	char str2[100]="ba";
	n=strcmp(str1,str2);
	printf("%d",n);
	return 0;
}

\\int strcmp (const char *str1,const char *str2);
\\�Ƚ������ַ����Ĵ�С��
\\�����ַ���"Ac"��"ba"�Ƚ�,�ַ�"A"(65)��'b'(98)�Ĳ�ֵ(��33),Ҳ���ǡ�AC��<��ba��������-1����������ȷ���0�� 
\\const�����������ַ�����Ϊ��������������
\\�������Ըı䣬ֻ�ǱȽ�����ASC�����ж�������С��*/
 \\main��������