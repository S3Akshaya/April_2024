// a  Program to check if two numbers are equal without using the bitwise operator.

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    if (n1-n2 == 0)
    {
        printf("two numbers are equal.\n");
    } 
    else 
    {
        printf("two numbers are not equal.\n");
    }
}
