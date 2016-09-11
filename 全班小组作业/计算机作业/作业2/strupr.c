/*strupr
//函数原型：extern char *strupr(char *s);  
//功能: 只转换s中出现的小写字母，不改变其它字符。返回指向s的指针。*/
#include <stdio.h>
#include <string.h>
int main()
{
char s[]="Copywrite 1999-2000 GGV Technologies";
char* s2=strupr(s);
printf("%s",s2);
printf("%s",s); 
getchar();
return 0;
}
