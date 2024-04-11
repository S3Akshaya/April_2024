//octal to bianry

#include<stdio.h>
#include<math.h>
int main()
{
    int i,o,deci= 0;
    long b=0;
    i=0;
    printf("Enter octal num= ");
    scanf("%d",&o);
    while(o!=0)
    {
        deci=deci+(o% 10)*pow(8,i);
        i++;
        o=o/10;
    }
    i=1;
    while(deci!= 0)
    {
        b+=((deci%2)*i);
        deci=deci/2;
        i=i*10;
    }
    printf("Binary is= %ld\n",b); 
}

