#include<stdio.h>
int main(){
	int i=0;
char ch[100];
while((ch[i]=getchar())!='\n')
i++;
ch[i]='\0';
for(i=0;ch[i]!='\0';i++){
if(ch[i]>='a'&&ch[i]<='z')
printf("%c",ch[i]+'A'-'a');
else if(ch[i]>='A'&&ch[i]<='Z')
printf("%c",ch[i]+'a'-'A');
else
putchar(ch[i]);
}
return 0;
}