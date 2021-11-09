```.py

#returns missing number in list
def missingNumber(lst):
    missing = 0
    for ele in range(lst[0], lst[-1]+1):
        if ele not in lst:
            missing = ele
    return missing

arr = [1,2,3,5,6,7,8,9]

print(missingNumber(arr))
