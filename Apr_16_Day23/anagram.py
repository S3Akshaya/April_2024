/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true
Example 2:
Input: s = "rat", t = "car"
Output: false
*/

s1=input().strip()
s2=input().strip()  
if(len(s1)!= len(s2)):  
    print ("false")
else:  
    s1=s1.lower()
    s2= s2.lower() 
    s1=''.join(sorted(s1))
    s2 =''.join(sorted(s2))
    if (s1==s2):  
        print("true")
    else:  
        print("false")
