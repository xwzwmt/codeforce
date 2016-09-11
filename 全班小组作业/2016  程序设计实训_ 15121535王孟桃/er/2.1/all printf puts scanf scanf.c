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
		printf("%s","enter?");//检验是否换行
	}
	if(choice==2)
	{
		gets(str);
		puts(str);
		puts("enter?");//用于检验是否有换行
	}
	return 0;
}

