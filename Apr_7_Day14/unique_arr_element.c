// array contains number repeated twice , find the unique element

input : [1,2,3,4,3,2,1]
output: 4

#include<stdio.h>
int main(){
    int n,i;
    printf("size ofarray: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int unique=0;
    for(i= 0;i<n;i++) {
        unique ^=arr[i];
    }
    printf("unique elementis: %d\n", unique);
}
