#include <stdlib.h>/*atol
ԭ�ͣ�
long int atol ( const char * str );
��ʽ������char
����ֵ������ת����ĳ������������������ַ���Ϊ�գ������ַ������������ݷǰ������������У���������Ĭ��ֵ0��
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

