// Given an array arr[] and an integer k where k is smaller than the size of the array,
the task is to find the kth smallest element in the given array. 
  It is given that all array elements are distinct.

Note:-  l and r denotes the starting and ending index of the array.
Example 1:
Input:
n = 6
arr[] = 7 10 4 3 20 15
k = 3
  
Output : 
7
  
Explanation :
3rd smallest element in the given 
array is 7


#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[100], n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
        if (i == k - 1) {
            printf("The %dth smallest element is: %d\n", k, arr[i]);
            return 0;
        }
    }

    printf("Invalid input.\n");
}
