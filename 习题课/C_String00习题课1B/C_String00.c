// C_String00.c	C-字符串错误程序实例(习题课使用)
#include <stdio.h>
#include <string.h>
#include <conio.h>

void GETS(char *p)
{
	printf("\nInput a string: ");
	scanf("%s", p);
}

int err01()
{
	char *p1, *p2="Hello world!";
	GETS(p1);
	printf("%s\n", p1);
	GETS(p2);
	printf("%s\n", p2);
	return 1;
}

int err02()
{
	unsigned long x=1234567890;
	char p[5];
	unsigned long y=4210356789;
	printf("\nx = %lu, y = %lu\n", x, y);
	printf("\n&x = %X, p = %X, &y = %X\n&x-p = %d, p-&y=%d\n",
			(int)&x, (int)p, (int)&y, (int)&x-(int)p, (int)p-(int)&y);
	printf("请输入字符串（请尝试串长①<5;②<%d;③%d;④>%d等情形，并观察x及字符串的变化）:\n",
					(int)&x-(int)p, (int)&x-(int)p, (int)&x-(int)p);
	gets(p);
	printf("str = \"%s\"", p);
	printf("\nx = %lu, y = %lu\n", x, y);
	
	x = 1234567890;
	printf("\nstr = \"%s\"", p);
	printf("\nx = %lu, y = %lu\n", x, y);
	
	return 2;
}

int err03()
{
	char str1[1024]="hello", str2[1024]="world";
	char *p1="hello", *p2="world", *temp;

	printf("%s\t%s\n", str1, str2);

	printf("%s\n", str1>str2 ? str1 : str2);
	printf("%s\n", p1>p2 ? p1 : p2);
	printf("%s\n", *p1>*p2 ? p1 : p2);
	
	strcpy(temp, p1);
	strcpy(p1, p2);
	strcpy(p2, temp);
	printf("%s\t%s\n", p1, p2);

	return 3;
}

int main()
{
	int (*f[])() = {err01, err02, err03};
	int n = sizeof(f)/sizeof(*f), choice;
	
	while(1)
	{
		printf("Input 1...%d (0--exit): ", n);
		choice = getch() - '0';
		if(choice<=0) break;
		if(choice<=n) f[choice-1]();
	}
	return 0;
}
