//字符串s转换为大写形式
#include<stdio.h>
int main()
{
	int i;
	char s[100];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]+'A'-'a';
		}
		puts(s);
		return 0;
	}
