//Given an array form a triangle such that the last row of the triangle 
contains all the elements of the array and 
the row above it will contain the sum of two elements below it.

Sample Input

size of arrray: 4
elemsnts of array : 1,3,4,2 


Sample Output
24
11 13 
4 7 6
1 3 4 2


#include<stdio.h>
int main()
{
    int n,i,j;
    printf("size ofarray: ");
    scanf("%d", &n);
    int arr[n];
    printf("elements of the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int triangle[n][n];
    //last row of tringle
    for(i=0;i<n;i++) {
        triangle[n -1][i]=arr[i];
    }
    for(i=n-2;i>=0; i--) 
    {
        for(j=0;j<= i;j++) 
        {
            triangle[i][j] =triangle[i+1][j]+triangle[i+ 1][j+1];
        }
    }
    for(i=0;i<n;i++) 
    {
        for(j=0;j<=i;j++) 
        {
            printf("%d ",triangle[i][j]);
        }
        printf("\n");
    }
}
