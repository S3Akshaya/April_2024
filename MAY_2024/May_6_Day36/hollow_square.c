input:
no.of rows: 5
  
output:
  
*****
*   *
*   *
*   *
*****


#include<stdio.h>
int main()
{
    int i, j, N;
    printf("number of rows To Print Hollow Square : ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
