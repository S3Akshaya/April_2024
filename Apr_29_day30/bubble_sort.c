//bubble sort
input:
size of arr : 4
  elements : 3, 7, 2, 6

output: 2, 3, 6, 7



#include <stdio.h>
void bubble_sort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() 
{
    int n;
    printf("size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);
    printf("Sorted array: ");
    for (int i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
