// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Example 1:
Input: nums = [2,2,1]
Output: 1
  
#include<stdio.h>
int main() 
{
    int num[100];
    int size,i;
    printf("size of array: ");
    scanf("%d", &size);
    printf("elements of array:\n");
    for(i=0;i<size;i++) 
    {
        scanf("%d",&num[i]);
    }
    int result=0;
    for(i=0;i<size;i++) {
        result ^= num[i];
    }
    printf("single number is: %d\n", result);
}
