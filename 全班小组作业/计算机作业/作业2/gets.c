#include<stdio.h>
/*函数原型char *gets( char *buffer );
   gets函数读入成功，返回与参数buffer相同的指针；
   读入过程中遇到EOF(End-of-File)或发生错误，返回NULL指针。*/
int main()
{
	char a[80];
	gets(a);
	puts(a);
	return 0;
}
