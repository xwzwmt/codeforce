#include<stdio.h>/*atoi
ԭ�ͣ�
int atoi(const char *nptr);
��ʽ������char
����ֵ����⵽������(���������� \0) �ַ�ʱֹͣת�������������������򣬷����㡣
*/
#include<string.h>
#include <stdlib.h>
int main()
{
	char a[80];
	int s;
	gets(a);
	s=atoi(a);
	printf("%d",s);
	
	

	return 0;
}
