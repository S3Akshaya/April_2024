//binary to octal

#include<stdio.h>
int main()
{   
    long int b,o=0;
    int i,rem;
    i =1;
    scanf("%ld",&b);
    while(b!=0)
    {
        rem=b%10;
        o= o+rem*i;
        i=i* 2;
        b= b/10;
    }
    printf("Octal = %lo\n",o);
}
