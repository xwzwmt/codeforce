#include<stdio.h>
int strcmp(char const *s1, char const *s2)  
{  
    int i = 0;  
    while(1) {  
        if(s1[i] == '\0' && s2[i] == '\0')  
            return 0;  
        else if(s1[i] > s2[i])  
            return 1;  
        else if(s1[i] < s2[i])  
            return -1;  
          
        i++;  
    }  
}   
int main()
{
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	strcmp(str1,str2);
	printf("%d",strcmp(str1,str2));
	return 0;
}
