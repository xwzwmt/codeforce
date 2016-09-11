//按字符串的长度(从短到长)排序，若长度相等则按内容排序（冒泡排序法）
#include <stdio.h>
#include <string.h>
int main()
{
	char t[12];
	char str[12][8]={"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
	int i,j;
	for(i=0; i<12; i++)
	{
		for(j=0; j<12-i; j++)
			if(strlen(str[j+1])<strlen(str[j]))
			{
				strcpy(t,str[j]);
			    strcpy(str[j],str[j+1]);
			    strcpy(str[j+1],t);
			}
			if(strlen(str[j+1])==strlen(str[j])&&strcmp(str[j+1],str[j])<0) 
			{
				strcpy(t,str[j]);
			    strcpy(str[j],str[j+1]);
			    strcpy(str[j+1],t);
			}
	}
	for(i=0; i<12; i++)
		printf("%s\n",str[i]);
	return 0;
}
