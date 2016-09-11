//int strlen(const char *s)
//形式参数：字符串s。
//作用：计算字符串s长度（不包括\0）。
//返回：字符串长度
#include<string.h> 
#include<stdio.h> 
int main(void)
 {     char*s="GoldenGlobalView";  
    printf("%s has %d chars",s,strlen(s));  
       getchar();    
        return 0; } 

