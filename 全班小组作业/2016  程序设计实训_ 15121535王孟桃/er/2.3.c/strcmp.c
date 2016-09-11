#include<stdio.h>
#include<string.h>

int mian(void){       
	int n;
 	char str1[100]="Ae";
	char str2[100]="ba";
	n=strcmp(str1,str2);
	printf("%d",n);
	return 0;
}

\\int strcmp (const char *str1,const char *str2);
\\比较两个字符串的大小，
\\例如字符串"Ac"和"ba"比较,字符"A"(65)和'b'(98)的差值(－33),也就是“AC”<”ba“，返回-1。若两个相等返回0； 
\\const代表着两个字符串均为常量，起定义作用
\\都不可以改变，只是比较两者ASC码来判断两个大小。*/
 \\main用来测试