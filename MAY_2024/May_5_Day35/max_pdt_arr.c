//Given an array of integers, write a function to return the maximum product of two numbers in the array.

input:
  size of arr: 5
  arr elements : 4 , 5, 2, 7,4

output : 35 --> (5*7)

  #include <stdio.h>
int maxProduct(int arr[], int size) {
    if (size<2) {
        printf("size should be at least 2.\n");
        return -1;
    }
    int maxProduct=arr[0] * arr[1];
    for(int i=0;i<size - 1; i++) {
        for (int j=i+1;j<size;j++) {
            int product=arr[i] * arr[j];
            if(product > maxProduct) {
                maxProduct = product;
            }
        }
    }
    return maxProduct;
}
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i=0;i<size;i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int result=maxProduct(arr, size);
    if (result != -1) {
        printf("Maximum product of two numbers in the array: %d\n", result);
    }
}
