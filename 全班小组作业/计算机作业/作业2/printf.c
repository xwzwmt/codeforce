#include<stdio.h>
/*����ԭ��extern void printf(const char *format,...);
   printf��������ʽ���ơ��͡�����б����������
   ���Ա�ʾΪ��printf(����1������2������3��....������n); 
   ���С�����1����ʾ����ʽ���ơ������������ʾ������б�
   printf��������Ϊ���ͣ�����ֵ������ֵ��*/
int main()
{
	int s,b;
	scanf("%d %d",&s,&b);
	printf("%d\n",s+b);
	return 0;
}
