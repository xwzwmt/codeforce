#include<stdio.h>/*ԭ�ͣ�
int sscanf( const char *, const char *, ...);
��ʽ������char
����ֵ���ɹ��򷵻ز�����Ŀ��ʧ���򷵻�-1������ԭ�����errno�С�

*/
int main()
{
	char buf[512];
	sscanf("123456","%s",buf);//�˴�buf����������������˼�ǽ�123456��%s����ʽ����buf�У� 
	printf("%s\n",buf); 
	sscanf("123456","%4s",buf);
	printf("%s\n",buf); 
	sscanf("123456abcdedf","%[^a-z]",buf);
	printf("%s\n",buf); 



	return 0;
}
//��һ���ַ����ж�����ָ����ʽ���������


