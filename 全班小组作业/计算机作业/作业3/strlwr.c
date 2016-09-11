#include<stdio.h>
int main() 
 { 
char s[100];
int i,n;
i=0;
while((s[i]=getchar())!='\n')
i++;
s[i]='\0';
for(n=0;n<=i;n++)
	 if(s[n]>='A'&&s[n]<='Z')
		 s[n]=s[n]+32;
		for(n=0;n<=i;n++)
	putchar(s[n]);
	return 0;
	} 
