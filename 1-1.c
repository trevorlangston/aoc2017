#include<stdio.h>
#include<string.h>
#include "read-file.h"

int main(int argc, char *argv[])
{
    char *input = readfile("1-input");

    // strip the newline
    char *pos;
    if ((pos = strchr(input, '\n')) != NULL)
    {
        *pos = '\0';
    }

    int input_size = strlen(input);
    int total = 0;

    for (int i = 1; i <= input_size; i++)
    {
        if (input[i] == input[i-1])
        {
            total += input[i] - '0';
        }
    }

    if (input[0] == input[input_size - 1])
    {
        total += input[0] - '0';
    }

    printf("The total is %d\n", total);

    return 0;
}
