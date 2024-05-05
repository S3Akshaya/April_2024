//accwpt a string and count number of vowels in it

input : akshaya
output : 3


#include <stdio.h>
#include<ctype.h>
int main()
{
    char s[50];
    scanf("%s",s);
    int i,count;
    for(i=0;s[i]!='\0';i++) 
    {
        s[i]=tolower(s[i]); 
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
        
    }
    printf("%d",count);
}

