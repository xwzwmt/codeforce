#include<stdio.h>
int main(void)
{
char s[100];
int i;
i=0;
while((s[i]=getchar())!='\n')
i++;
s[i]='\0';
printf("%d\n",i);
return 0;
}
