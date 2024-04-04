//divide two integers without using multiplication division and mod operator

input :
dividnd : 10
divisor : 3
output : 3
  
#include<stdio.h>
#include<stdlib.h>
int main(){
    int dd,dr;
    int qt=0;
    scanf("%d",&dd);
    scanf("%d",&dr);
    int sign = 1;
    if((dd >0&&dr< 0)|| (dd<0&& dr>0))
        sign = -1;
    dd=abs(dd);
    dr=abs(dr);
    while(dd>=dr) {
        dd-= dr;
        qt++;
    }
    printf("Result %d\n",sign*qt);
}


