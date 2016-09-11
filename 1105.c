#include <stdio.h>
#include <string.h>
int main()
{
    char an[10000];
    while(gets(an))
    {
        printf("%s",an);
        for(int i=strlen(an)-1;i>=0;i--)
        {
            printf("%c",an[i]);
        }
        printf("\n");
    }
}
