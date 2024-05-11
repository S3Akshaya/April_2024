input:
  no of rows: 5
    
output:
  
* * * * * 
 * * * *
  * * *
   * *
    *
    *
   * * 
  * * *
 * * * * 
* * * * *

    
#include<stdio.h>
int main()
{
  int i,j,k, rows;
 
  printf("no. of rows: ");
  scanf("%d", &rows);
  printf("Output: \n\n");
  for (i = 1; i <= rows; i++)
  {
    for (k = 1; k < i; k++)
      printf(" ");
 
    for (j = i; j <= rows; j++)
      printf("* ");
 
    printf("\n");
  }
  for (i = rows - 1; i >= 1; i--)
  {
    for (k = 1; k < i; k++)
      printf(" ");
 
    for (j = i; j <= rows; j++)
      printf("* ");
 
    printf("\n");
  }
}
