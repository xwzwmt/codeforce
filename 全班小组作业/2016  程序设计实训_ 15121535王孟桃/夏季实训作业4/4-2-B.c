//按字符串的长度(从短到长)排序，若长度相等则按内容排序（选择法排序）
#include <stdio.h>
#include <string.h>
int main()
{
	char t[12];
	char str[12][8]={"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
	int i,j,k;
	for(i=0; i<11; i++)
	{
		k=i;
		for(j=i+1; j<12; j++)
			if(strlen(str[j])<strlen(str[k]))
				k=j;
			if(strlen(str[j])==strlen(str[k])&&strcmp(str[j],str[k])<0) 
				k=j;
			strcpy(t,str[i]);
			strcpy(str[i],str[k]);
			strcpy(str[k],t);
	}
	for(i=0; i<12; i++)
		printf("%s\n",str[i]);
	return 0;
}
