//.Write a program that allows users to either convert integers to roman numerals, or convert roman numerals to integers.


input : "MCMXCIV"
 output : 1994.


s=input().strip()
d = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
k = 0
ak= 0
for i in s[::-1]:
    p=d[i]
    if p<k:
        ak-=p
    else:
        ak+=p
    k = p
print(ak)
