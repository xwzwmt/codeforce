    
#include<stdio.h>
#include<string.h>


int main(void){                                            
	char str1[100]="Hello";
	strlwr(str1);
	puts(str1);
	return 0;
}
\\char *strlwr(char *s),*s为目的字符串，将字符串中的大写字母改为小写。返回为这个字符串的首地址
 \\main用来测试