#include<stdio.h>
#include<limits.h>
int large=INT_MIN;
int length;
int intmax(int array[],int index)
{
    if(array[index]>large)
    large=array[index];
    index=index+1;
    if(index<length)
    intmax(array,index);
    else
    return large;
}
int main()
{
    int array[100];
    
    printf("enter the length of the array");
    scanf("%d",&length);
    printf("enter the elements of the array");
    for(int i=0;i<length;i++)
    {
      scanf("%d",&array[i]);
    }
    printf("%d",intmax(array,0));
}