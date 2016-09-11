
#include <stdio.h>
#include<string.h>

int main(void){                                             
	char str1[100]="Hello"; 
	strupr(str1);
	puts(str1);
	return 0;
}
\\char *strupr(char *s);
\\*s为目的字符串，将字符串中的小写字母改为大写。返回为这个字符串的首地址
\\main用来测试