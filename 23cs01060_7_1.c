#include<stdio.h>
#include<string.h>
int main()
{
    char array[100],ch;
    int num=0;
    printf("enter the string\n");
    gets(array);
    printf("enter the character whose frequency is to be known\n");
    scanf("%c",&ch);
    for(int i=0;i<strlen(array);i++)
    {
        if(array[i]==ch)
        num++;
    }
    printf("frequency of %c is %d",ch,num);

}