#include <stdio.h>
#include <string.h>
int main()
{
    char array[100], array2[100];
    int j = 0;
    printf("enter the string\n");
    gets(array);
    for (int i = 0; i < strlen(array); i++)
    {
        if ((65 <= array[i] && array[i] <= 90) || (97 <= array[i] && array[i] <= 122))
        {
            array2[j] = array[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%c", array2[i]);
    }
}