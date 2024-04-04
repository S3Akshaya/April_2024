//distance bw 2 points 

input:
  x1=3
  x2=7
  y1=4
  y2=7
output:
  5

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,dis;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%d",dis);
}

