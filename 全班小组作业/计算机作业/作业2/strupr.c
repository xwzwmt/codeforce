/*strupr
//����ԭ�ͣ�extern char *strupr(char *s);  
//����: ֻת��s�г��ֵ�Сд��ĸ�����ı������ַ�������ָ��s��ָ�롣*/
#include <stdio.h>
#include <string.h>
int main()
{
char s[]="Copywrite 1999-2000 GGV Technologies";
char* s2=strupr(s);
printf("%s",s2);
printf("%s",s); 
getchar();
return 0;
}
