// replace all 0's with 1's in a number 

input: 702310
output: 712311
#include<stdio.h>
int main()
{
    int n,a,ans=0;
    int p=1;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        int d=n%10; 
        if(d==0)
        {
           ans+=1 *p;
        } else
        {
            ans+=d*p;
        }
        n/=10; 
        p*= 10;
    }
    printf("after replacing :  %d\n",ans);
}
