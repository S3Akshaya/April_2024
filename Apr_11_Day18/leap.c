#include<stdio.h>
int main()
{
    int ak;
    scanf("%d",&ak);
    if((ak%400==0) || (ak%4==0 && ak%100!=0))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}
