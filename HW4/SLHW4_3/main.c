#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "C programing language";
    char string2[20] = "";
    char string3[40] = "";
    printf("%d\n", strlen(string1));
    printf("%d\n", strnlen(string1, 4));
    strcpy(string2, string1);
    printf("%s\n", string2);
    strncpy(string3, string1, 9);
    printf("%s\n", string3);

    strcat(string3, " ");
    strcat(string3, string2);
    printf("%s\n", string3);
    strncat(string3, string1, 5);
    printf("%d\n", strcmp(string1, string2));
    printf("%d\n", strcmp(string1, string3));
    printf("%d\n", strncmp(string1, string3, 9));
    char *string4;
    string4 = strstr(string3, string1);
    printf("%s\n", string4);
    return 0;
}