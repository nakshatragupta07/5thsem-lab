#include <stdio.h>
#include <stdlib.h>
void main()
{
    int count = 0;
    FILE *fp = fopen("ch.txt", "r");
    if (fp == NULL)
    {
        printf("File not found....\n");
        exit(0);
    }
    while (1)
    {
        char c = fgetc(fp);
        if (c == EOF)
        {
            break;
        }

        if (c == ' ' || c == '\n')
        {
            continue;
        }
        count++;
        printf("%c", c);
    }
    printf("\ntotal number of character is %d ", count);
    fclose(fp);
}