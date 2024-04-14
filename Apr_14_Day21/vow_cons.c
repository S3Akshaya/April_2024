//check the alphabet is vowel or consonant

input : 
a

output : 
vowel

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("%c is consonant",ch);
    }
}
