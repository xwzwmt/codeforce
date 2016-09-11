char * Strupr(char *str)
{
   char *p = str;
   while (*p != '\0')
   {
      if(*p >= 'a' && *p <= 'z')
      *p -= 0x20;
      p++;
    }
   return str;
}
#include<stdio.h>
int main()
{char str[100];
scanf("%s",str);
puts(Strupr(str
));   
system("pause");
   return 0;
}