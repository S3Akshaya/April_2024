//accept a number and all the EVEN digit in that number
input: 65746
output: 16 (6+4+6)

#include<stdio.h>
int main() 
{
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 == 0) { 
            sum += digit; 
        }
        num /= 10; 
    }
    printf("Sum of even digits in the number: %d\n", sum);
}

