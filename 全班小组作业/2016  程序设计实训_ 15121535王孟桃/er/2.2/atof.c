#include<stdlib.h>/*ԭ��:
double atof(const char *nptr);
��ʽ������char
����ֵ��������
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
//���ַ���ת���ɸ�����


