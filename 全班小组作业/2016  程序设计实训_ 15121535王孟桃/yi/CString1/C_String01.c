#include <stdlib.h>
#include <string.h>

void swapString1(char *string1, char *string2, const int n) {
    char tempString[n];
    strcpy(tempStringa, string1);
    strcpy(string1, string2);
    strcpy(string2, tempString);
}

void swapString2(char **secondaryPointer1, char **secondaryPointer2) {
    char *tempSecondaryPointer = *secondaryPointer1;
    *secondaryPointer1 = *secondaryPointer2;
    *secondaryPointer2 = tempSecondaryPointer;
}

void swapString3(char **stringPointer1, char **stringPointer2) {
    char *tempString = *stringPointer1;
    *stringPointer1 = *stringPointer2;
    *stringPointer2 = tempString;
}

void appendString(char *string1, char *string2) {
    string1 = (char*)realloc(string1, sizeof(char) * (strlen(string1) + strlen(string2) + 4));
    strcat(string1, " & ");
    strcat(string1, string2);
}
