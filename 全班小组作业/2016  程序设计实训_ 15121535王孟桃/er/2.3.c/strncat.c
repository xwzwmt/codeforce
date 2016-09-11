
#include<stdio.h> 
#include<string.h> 
int main(void)  
{  
	char dest[10] = "Hello";
	char src[20] = "World"; 
	strncat(dest, src, 50);
	printf("%s\n", dest);
	return  0; 
}
\\函数原型：char * strncat(char *dest, const char *src, size_t n);
\\形式参数、返回类型的含义: dest指向目标字符串，src为指向源字符串。
\\功能: 把src所指字符串的前n个字符添加到dest所指字符串的结尾处，并覆盖dest所指字符串结尾的'\0'，从而实现字符串的连接。
\\返回值: 返回指向dest的指针。*/