
//You have write a function that accepts, a string which length is “len”,
the string has some “#”, in it you have to move all the hashes to the front of the string 
and return the whole string back and print it.

Input:
Move#Hash#to#Front

Output:
###MoveHashtoFront


#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^\n]",s);
    int i,a=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='#')
        {
            a++;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("#");
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!='#')
        {
            printf("%c",s[i]);
        }
    }
}
