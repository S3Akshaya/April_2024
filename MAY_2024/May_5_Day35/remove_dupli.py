//Implement a function in any programming language to remove duplicates from an unsorted array using a hash set or dictionary for efficient lookup.

input:
  arr = 4  5  6  4
output: 4  5  6

def remove_duplicates(arr):
    seen = {}
    unique_elements = []

    for num in arr:
        if num not in seen:
            seen[num] = True
            unique_elements.append(num)

    return unique_elements
arr = list(map(int, input("Enter elements of the array separated by space: ").split()))
result = remove_duplicates(arr)
print("Array with duplicates:", arr)
print("Array after removing duplicates:", result)
