#include <string.h>

char* mergeAlternately(char* word1, char* word2){

    char* mergedStr = (char *) malloc((strlen(word1) + strlen(word2) + 1) * sizeof(char));
    char *p1 = word1;
    char *p2 = word2;

    int i = 0;
    while(*p1 != '\0' || *p2 != '\0'){
        if(*p1 != '\0'){
            mergedStr[i++] = *p1;
            p1++;
        }
        if(*p2 != '\0'){
            mergedStr[i++] = *p2;
            p2++;
        }
    }

    mergedStr[i] = '\0';
    return mergedStr;
}
