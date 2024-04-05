//binary to decimal

input : 110   
output : 6

reason : 1*2^2   +   1*2^1    +    0*2^0
      4 + 2 + 0 ====== 6

#include <stdio.h>   
int main()  
{  
    int n,b,d=0,base=1,rem;  
    printf ("Enter binary number ");  
    scanf ("%d", &n);
    b=n; 
    while(n>0)  
    {  
        rem=n%10;   
        d= d+rem* base;  
        n/=10; 
        base*=2;  
    }  
    printf ("decimal number is %d \t", d);
} 
