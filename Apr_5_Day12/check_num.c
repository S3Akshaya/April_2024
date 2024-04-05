// check num is positive, negative or zero

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n==0)
  {
      printf("%d is zero",n);
  }
  else if(n>=0)
  {
      printf("%d positive",n);
  }
  else{
      printf("%d negative",n);
  }
}
