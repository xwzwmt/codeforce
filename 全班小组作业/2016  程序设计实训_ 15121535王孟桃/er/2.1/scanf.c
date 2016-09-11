#include<stdio.h>
/*函数原型int scanf(const char * restrict format,...);
   scanf函数的第一个参数是格式字符串它指定了输入的格式，
   并按照格式说明符解析输入对应位置的信息并存储于可变参
   数列表中对应的指针所指位置。每一个指针要求非空，并且
   与字符串中的格式符一一顺次对应。
   scanf函数返回成功读入的数据项数，读到文件末尾出错时则返回EOF。*/
int main()
{
	int s,b;
	scanf("%d %d",&s,&b);
	printf("%d\n",s+b);
	return 0;
}
