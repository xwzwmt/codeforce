//char *strcat(char *s, const char *t)
//形式参数：字符串s，t。
//作用：把后面的字符串连接到前面的字符串
//返回：前面的字符串。
#include <string.h>  
main()  
{   
char d[20]="Golden Global";  
char *s=" View";   
strcat(d,s);   
printf("%s",d);  
getchar();  
return 0;  
} 

