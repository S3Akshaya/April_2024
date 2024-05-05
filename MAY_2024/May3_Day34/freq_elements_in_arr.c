//find frequency of each element in array

input: arr = 3,6,3
output: 3 occured 2 times
        6 occured 1 times


#include<stdio.h>
int main() 
{ 
    int size,i;
    printf("size of the array: ");
    scanf("%d",&size);
    int arr[size]; 
    for(int i = 0; i < size; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int visited[size];
    for(i = 0; i < size; i++) 
    {
        visited[i] = 0; 
    }
    for(i = 0; i < size; i++) 
    {
        if(visited[i] == 0) 
        {
            int count = 1;
            for(int j = i + 1; j < size; j++) 
            {
                if(arr[i] == arr[j]) 
                {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

