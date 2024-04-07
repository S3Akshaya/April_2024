// binary search

#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i =0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter element to search: ");
    scanf("%d",&key);
    int l=0;
    int r=n- 1;
    int found =0;
    int mid;
    while(l<=r){
        mid=l+(r -l)/2;
        if(arr[mid]==key){
            found=1;
            break;
        }
        else if(arr[mid]<key) {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(found){
        printf("Element at index %d\n", mid);
    } else {
        printf("element not found\n");
    }
}
