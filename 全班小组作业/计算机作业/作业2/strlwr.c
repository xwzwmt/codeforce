/*strlwr
//����ԭ�ͣ�extern char *strlwr(char *s);
//����: ���ַ���sת��ΪСд��ʽ.ֻת��s�г��ֵĴ�д��ĸ�����ı������ַ�������ָ��s��ָ�롣
*/
#include <stdio.h>
#include <string.h>
int main() 
{
	char s[]="Copywrite 1999-2000 GGV Technologies";
	printf("%s",strlwr(s));
	getchar();
	return 0;
}
