//non repeated caharcter in string

input : akshaya
output : k s h y

#include<stdio.h>
#include <string.h>
int main()
{
    char c[150];
    int i,j=0,n,t=0;
    printf("enter string ");
    scanf("%s",c);
    for(i=0;c[i];i++ )
    {
    	t=0;
     	for(j=0;c[j];j++)
        {
        	if(c[i]==c[j])
        	      t++;
        	if(t>1)  
			break;    
        }
        if(t==1)
        {
          printf("%c ",c[i]);
        }
    }
}
