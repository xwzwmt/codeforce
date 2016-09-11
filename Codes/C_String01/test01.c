// test01.c		���ļ�����4����Ҫ���䣬���ಿ�������޸�
#include <stdio.h>			// for printf()
#include <stdlib.h>			// for calloc(), free()
#include <string.h>			// for strcpy() in test4()
#include <conio.h>			// for getche()
#include "c_string01.h"		// for �Զ���ĺ���

void test1()
{
	char str1[10]="Tom", str2[10]="Jerry",str3[10];
	char swapa1(char str1[10],char str2[10]);
	printf("in test1()\n");
	
	printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2); 
// (1) ���ú��� SWAP1
char swapa1(str1[10],str2[10]);
	printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2); 
	printf("return from test1()\n");
}
char swapa1(char str1[10],char str2[10])
char str[10];
str[10]=str1[10];
str1[10]=str2[10];
str2[10]=str[10];
void test2()
{
	char str1[]="Tom", str2[]="Jerry";
	char *p1=str1, *p2=str2;
	printf("in test2()\n");
	printf("p1: \"%s\",\tp2: \"%s\"\n", p1, p2); 
// (2) ���ú��� SWAP2

	printf("p1: \"%s\",\tp2: \"%s\"\n", p1, p2); 
	printf("return from test2()\n");
}

void test3()
{
	char *str1="Tom", *str2="Jerry";
	printf("in test3()\n");
	printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2); 
// (3) ���ú��� SWAP3
	
	printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2); 
	printf("return from test3()\n");
}

void test4()
{
	char *str1, *str2;
	str1 = (char*)calloc(4, sizeof(char));
	str2 = (char*)calloc(6, sizeof(char));
	strcpy(str1, "Tom");
	strcpy(str2, "Jerry");
	printf("in test4()\n");
	printf("str1: \"%s\",\tstr2: \"%s\"\n", str1, str2); 
// (4) ���ú��� STRCAT �� " & " ���������ַ���

	printf("str1: \"%s\"\n", str1); 
	if(str1!=NULL) free(str1);
	if(str2!=NULL) free(str2);
	printf("return from test4()\n");
}

int main()
{
	int choice = 1;
	void (*f[])() = {test1, test2, test3, test4};
	
	while(1)
	{
		printf("\nC-String test. Your choice(1--4, 0-quit): ");
		choice = getche() - '0';
		printf("\n");

		if(choice<=0)
			break;
		else if(choice>4)
			continue;
		else
			f[choice-1]();
	}
	return 0;
}
