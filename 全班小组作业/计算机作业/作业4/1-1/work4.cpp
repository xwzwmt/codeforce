#include<stdio.h>
#include<string.h>
int main()
{
	char str[12][8]={"enter", "number", "size", "begin", "of", "cat",
		                       "case", "program", "centain", "a", "cake", "side"};
	char s[8];
	int i,j;
	for(i=1;i<12;i++)
	{
		for(j=0;j<12-i;j++)
			if(str[j][0]>str[j+1][0])
			{
				strcpy(s,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],s);
			}
	}
	for(i=0;i<12;i++)
		printf("%s ",str[i]);
	printf("\n");
	return 0;
}
