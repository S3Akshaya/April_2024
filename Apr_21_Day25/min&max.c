// Program to find the Maximum and minimum of two numbers without using any loop or condition.


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int max=((a+b) + abs(a-b))/2;
    int min =((a+b) - abs(a-b))/2;
    printf("Max: %d\n",max);
    printf("Mini: %d\n",min);
}


