#include<stdio.h>
/*����ԭ��char *gets( char *buffer );
   gets��������ɹ������������buffer��ͬ��ָ�룻
   �������������EOF(End-of-File)�������󣬷���NULLָ�롣*/
int main()
{
	char a[80];
	gets(a);
	puts(a);
	return 0;
}
