def remove_dup(lst):
    unique=[]
    for i in lst:
        if i not in unique:
            unique.append(i)
    return unique
lis=input("Enter elements of list: ").split()
lis=[int(i) for i in lis]
unique=remove_dup(lis)
print("after removing duplicates:", unique)

input: 2, 4, 8 , 4, 2,1
output: [2,4,8,1]
