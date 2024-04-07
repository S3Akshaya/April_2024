//linear search

#include<stdio.h>
int main(){
    int n,i;
    printf("size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i< n;i++) {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("element to search: ");
    scanf("%d",&key);
    int found = 0;
    int ind = -1;
    for(i=0;i<n;i++) {
        if(arr[i]==key){
            found=1;
            ind=i;
            break;
        }
    }
    if(found) {
        printf("element at index %d\n",ind);
    }
    else{
        printf("element not found\n");
    }
}
