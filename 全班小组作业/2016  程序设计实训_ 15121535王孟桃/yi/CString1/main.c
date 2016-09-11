#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c_string01.h"	

void test1() {
    char string1[10] = "Tom", string2[10] = "Jerry";
    printf("in test1()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", string1, string2);
    
    swapString1(string1, string2, 10);
    
    printf("str1: \"%s\",\tstr2: \"%s\"\n", string1, string2);
    printf("return from test1()\n");
}

void test2() {
    char string1[] = "Tom", string2[] = "Jerry";
    char *pointer1 = string1, *pointer2 = string2;
    printf("in test2()\n");
    printf("p1: \"%s\",\tp2: \"%s\"\n", pointer1, pointer2);
    
    swapString2(&pointer1, &pointer2);
        
    printf("p1: \"%s\",\tp2: \"%s\"\n", pointer1, pointer2);
    printf("return from test2()\n");
}

void test3() {
    char *string1 = "Tom", *string2 = "Jerry";
    printf("in test3()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", string1, string2);
    
    swapString3(&string1, &string2);
    
    printf("str1: \"%s\",\tstr2: \"%s\"\n", string1, string2);
    printf("return from test3()\n");
}

void test4() {
    char *string1, *string2;
    string1 = (char*)calloc(4, sizeof(char));
    string2 = (char*)calloc(6, sizeof(char));
    strcpy(string1, "Tom");
    strcpy(string2, "Jerry");
    printf("in test4()\n");
    printf("str1: \"%s\",\tstr2: \"%s\"\n", string1, string2);
    
    string1 = (char*)realloc(string1, 12 * sizeof(char));
    appendString(string1, string2);
    
    printf("str1: \"%s\"\n", string1);
    if(string1!=NULL) free(string1);
    if(string2!=NULL) free(string2);
    printf("return from test4()\n");
}

int main() {
    int choiceNumber = 1;
    void (*f[])() = {test1, test2, test3, test4};
    
    while(1)
    {
        printf("\nC-String test. Your choice(1--4, 0-quit): ");
        scanf("%d", &choiceNumber);
        printf("\n");
        
        if(choiceNumber <= 0) {
            break;
        }
        else if(choiceNumber > 4) {
            continue;
        }
        else {
            f[choiceNumber - 1]();
        }
    }
    return 0;
}

