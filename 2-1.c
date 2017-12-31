#include<stdio.h>
#include<string.h>
#include "read-file.h"

int main(int argc, char *argv[])
{
    int total = 0;
    int count = 0;
    char **array = NULL;
    char *pch;
    char *input = readfile("2-input");

    pch = strtok (input, "\t\n");

    while (pch != NULL)
    {
        array = (char**)realloc(array, (count+1)*sizeof(*array));
        array[count] = (char*)malloc(sizeof(pch));
        strcpy(array[count], pch);

        pch = strtok (NULL, "\t\n");
        count++;
    }

    printf("The total is %d\n", total);

    return 0;
}
