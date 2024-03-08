#include <stdio.h>
#include <string.h>
void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(char array[], int start, int end)
{
    if (start < end)
    {
        swap(&(array[start]), &(array[end]));
        reverse(array, start + 1, end - 1);
    }
    else
        return;
}
int main()
{
    char array[100];
    printf("enter the string\n");
    gets(array);
    reverse(array, 0, strlen(array) - 1);
    for (int i = 0; i < strlen(array); i++)
    {
        printf("%c", array[i]);
    }
}
// abcdef
// 012345