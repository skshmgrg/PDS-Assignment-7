#include <stdio.h>
#include <string.h>
int main()
{
    char array1[100], array2[100];
    printf("enter string 1");
    gets(array1);
    printf("enter string 2");
    gets(array2);
    int j;
    for (int i = 0; i < strlen(array1); i++)
    {
        for (j = 0; j < strlen(array2); j++)
        {
            if (array1[i + j] == array2[j])
                continue;
            else
                break;
        }
        if (j == strlen(array2))
            break;
    }
    if (j == strlen(array2))
    {
        printf("string 2 is a substring of string 1");
    }
    else
    {
        printf("string 2 is not a substring of string 1");
    }
}