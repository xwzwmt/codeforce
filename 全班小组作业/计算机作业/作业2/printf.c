#include<stdio.h>
/*函数原型extern void printf(const char *format,...);
   printf函数“格式控制”和“输出列表”是其参数。
   可以表示为：printf(参数1，参数2，参数3，....，参数n); 
   其中“参数1”表示“格式控制”；其余参数表示“输出列表。
   printf函数类型为整型，返回值是整型值。*/
int main()
{
	int s,b;
	scanf("%d %d",&s,&b);
	printf("%d\n",s+b);
	return 0;
}
