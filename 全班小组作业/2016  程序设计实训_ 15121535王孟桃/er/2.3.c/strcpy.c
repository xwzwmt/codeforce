
#include<stdio.h>
#include<string.h>
void main()
{   char str1[20]={"abc "}; 
char str2[20]={"def"}; 
printf("%s\n",strcpy(str1,str2));}
\\char *strcpy(char *s, const char *t)
\\形式参数：字符串s，t。
\\作用：把字符串t复制到字符串s。
\\返回：字符串s。
