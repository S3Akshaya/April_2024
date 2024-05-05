//Rotate string n times in clockwise direction

input:  
   string: akshaya
   no. of rotation: 3

output:
  yaaksha

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int n,i,j;
    printf("Enter string: ");
    scanf("%s", str);
    printf("number of rotations: ");
    scanf("%d",&n);
    int length=strlen(str);
    n %= length;
    for(i=0;i<n;i++) {
        char temp=str[length - 1];
        for(j=length - 1;j>0; j--) {
            str[j]=str[j - 1];
        }
        str[0] = temp;
    }
    printf("Rotated string: %s\n", str);
}
