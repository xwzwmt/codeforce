#include<stdio.h>
/*函数原型extern void printf(const char *format,...);
   printf函数“格式控制”和“输出列表”是其参数。
   可以表示为：printf(参数1，参数2，参数3，....，参数n); 
   其中“参数1”表示“格式控制”；其余参数表示“输出列表。
   printf函数类型为整型，返回值是整型值。*/
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

