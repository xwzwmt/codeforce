#include<stdio.h>
/*����ԭ��extern void printf(const char *format,...);
   printf��������ʽ���ơ��͡�����б����������
   ���Ա�ʾΪ��printf(����1������2������3��....������n); 
   ���С�����1����ʾ����ʽ���ơ������������ʾ������б�
   printf��������Ϊ���ͣ�����ֵ������ֵ��*/
#include<stdio.h>
int main(void)
{
	char str[80];
	int choice;
	printf("Input 1-scanf,2-gets:\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		scanf("%s",str);
		printf("%s",str);
		printf("%s","enter?");//�����Ƿ���
	}
	if(choice==2)
	{
		gets(str);
		puts(str);
		puts("enter?");//���ڼ����Ƿ��л���
	}
	return 0;
}

