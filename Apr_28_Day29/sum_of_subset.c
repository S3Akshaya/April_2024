//Program to print sums of all subsets in an array.

Input : arr[] = {2, 4, 5}
Output : 0 2 4 5 6 7 9 11


#include<stdio.h>
int main()
{
    int n,i,j;
    printf("size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(j=0;j<n;j++) 
        {
            if(i&(1<<j))
            {
                sum+=arr[j];
            }
        }
        printf("%d ",sum);
    }
}
