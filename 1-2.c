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

    for (int i = 0; i < input_size / 2; i++)
    {
        int opposite = (i + input_size / 2) % input_size;
        if (input[i] == input[opposite])
        {
            total += 2 * (input[i] - '0');
        }
    }

    printf("The total is %d\n", total);

    return 0;
}
