#include<stdio.h>
/*����ԭ��int puts(char *string);
   puts����ִ�гɹ����طǸ�����ִ��ʧ�ܷ���EOF��
   �������ΪNULL��������errnoΪEINVAL��������EOF��*/
int main()
{
	char a[80];
	gets(a);
	puts(a);
	return 0;
}
