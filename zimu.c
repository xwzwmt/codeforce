#include<stdio.h>
int main()
{
	char str[65536];
	char c;
	int i,num=0,count=0;
	i=0;
	whlie((str[i]=getchar())!='\n')
	i++;
	str[i]='\0';
	for(i=0;c=str[i]!='\0';i++)
	{
	if(c==' ') word=0;
	else if(word==0)
	{word=1;num++;}
	}
	printf("Case %d: %d" ,count++,sum);
		return 0;
	}