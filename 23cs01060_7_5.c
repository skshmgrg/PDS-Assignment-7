#include<stdio.h>
#include<string.h>
int main()
{
    char array[100];
    printf("enter the string\n");
    gets(array);
    int i;
    for( i=0;i<strlen(array)/2;i++)
    {
      if(array[i]==array[strlen(array)-1-i])
      continue;
      else 
      break;
    }
    
    if(i==(strlen(array)/2))
    {
       printf("the given string is a palindrome");
    }
    else
    {
       printf("the given string is not a palindrome");
    }
}