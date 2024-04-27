//Write a Program to print the Maximum and Minimum elements in an array.

input : 
enter no of elements in array: 4
enter elements of array: 5 32 8 2

output: 
  maxi element is 32
  mini element is 2
  

#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,mn,mx;
    printf("enter no of elements in array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mn=arr[0];
    mx=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
        }
    }
    printf("maxi element is %d\n",mx);
    printf("mini element is %d",mn);
}
