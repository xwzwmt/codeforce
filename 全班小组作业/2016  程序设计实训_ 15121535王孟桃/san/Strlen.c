//统计长度
#include<stdio.h>
int main()
{
	int i,m=0;
	char a[100];
	printf("Input a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
		m++;
		printf("%d\n",m);
}
