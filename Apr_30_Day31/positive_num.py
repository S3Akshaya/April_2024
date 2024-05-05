//Nikita loves playing with numbers. For a given number 'n', she wants to know the total number of positive integers up to n that are relatively prime to n. Help her!

For eg. For n = 5, answer is 4.

Input Format

First line will be the number of test cases(T). Each test case will have one line each, containing only a single integer n.

Constraints

T <= 1000000, 1 <= n <= 10000000

Output Format

For each test case, a single line containing answer to the problem.


n= int(input())
ans= n  
ak= 2
while ak * ak <= n:
    if n % ak == 0:
        while n %ak == 0:
            n //= ak
        ans-= ans //ak
    ak+= 1
if n > 1:
    ans -= ans // n
print(ans)
