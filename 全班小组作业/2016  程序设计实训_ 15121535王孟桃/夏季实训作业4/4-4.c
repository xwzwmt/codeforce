//按字符串的长度（从短到长）排序，若长度相等则按内容排序
#include<stdio.h>
#include<string.h> 
int main()
{
	int i,j,min;
	char *pt;
	char *str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
	for(i=0;i<11;i++)
	{
		min=i;
		for(j=i+1;j<12;j++)
			if(strcmp(str[min],str[j])>0) 
				min=j;
		if(min!=i)
		{
			pt=str[min];
			str[min]=str[i];
			str[i]=pt;
		}
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
		printf("%s\n",str[i]);
	return 0;
}
