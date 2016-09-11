#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
main()
{int i,j,min;
 char *pt;
 char *str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
for(i=0;i<11;i++)
{min=i;
for(j=i+1;j<12;j++)
if(strcmp(str[min],str[j])>0) min=j;
if(min!=i)
{pt=str[min];
str[min]=str[i];
str[i]=pt;}
}
for(i=1;i<12;i++)
	{
		for(j=0;j<12-i;j++)
			if(strlen(str[j])>strlen(str[j+1]))
				{
				pt=str[j];
				str[j]=str[j+1];
				str[j+1]=pt;
				}
	}
for(i=0;i<12;i++)
printf("%s ",str[i]);
system("pause");}
