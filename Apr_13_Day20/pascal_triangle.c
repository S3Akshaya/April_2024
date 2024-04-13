input : 3
output:
               1
             1   1
           1   2   1


  
#include<stdio.h>
int main(){
    int num,c= 1,space,i,j;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        for (space=1; space<=num-i;space++)
            printf("  ");
        for (j=0;j<=i;j++) {
            if (j==0 || i==0)
                c=1;
            else
                c= c*(i-j+1)/j;
            printf("%4d",c);
        }
        printf("\n");
    }
}
