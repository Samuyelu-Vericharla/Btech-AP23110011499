#include<stdio.h>
int main()
{
//Write a C program to find the sum of elements in an array using pointers.

    int arr[100],*ptr,n,sum=0;
    ptr=arr;
    printf("size of an array:");
    scanf("%d",&n);
    printf("enter the values in an array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=(*ptr);
        ptr++;
    }
    printf("sum of numbers in an array: %d",sum);
}