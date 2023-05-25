#include <stdio.h>
#include <stdlib.h>


char* concat(char* str1, char* str2);

int main(void) {
    char str1[] = "Hallo";
    char str2[] = "Klasse!";
    char* str3 = concat(str1, str2);
    
    printf("%s\n", str3);
    
    free(str3);
    
    return 0;
}

char* concat(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2 + 1;  // +1 for the space character and null terminator
    char* result = (char*)malloc(totalLen * sizeof(char));
    
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    
    int i, j;
    for (i = 0; i < len1; i++) {
        result[i] = str1[i];
    }
    
    result[i] = ' ';  // Add the space character
    
    for (j = 0; j < len2; j++) {
        result[i + 1 + j] = str2[j];
    }
    
    result[totalLen - 1] = '\0';  // Add the null terminator
    
    return result;
}
