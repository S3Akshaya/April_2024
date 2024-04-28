//Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
Example 1:
Input: s = "egg", t = "add"
Output: true
Example 2:
Input: s = "foo", t = "bar"
Output: false
Example 3:
Input: s = "paper", t = "title"
Output: true


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int i;
    char s[100], t[100];
    printf("first string: ");
    scanf("%s",s);
    printf("second string: ");
    scanf("%s",t);
    int s_to_t[256]={0}; 
    int t_to_s[256]={0};
    int len=strlen(s);
    bool isIsomorphic = true;
    for(i=0;i<len;i++)
    {
        char cs=s[i];
        char ct=t[i];
        if(s_to_t[cs] == 0 && t_to_s[ct] == 0) 
        {
            s_to_t[cs] = ct;
            t_to_s[ct] = cs;
        }
        else 
        {
            if (s_to_t[cs] != ct || t_to_s[ct] != cs) {
                isIsomorphic = false;
                break;
            }
        }
    }
    printf("Isomorphic: %s\n", isIsomorphic ? "true" : "false");
}
