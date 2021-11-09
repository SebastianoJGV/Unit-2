```.py
def maxAbs(lst):
    maxValue=lst[0]
    for num in lst:
        if abs(num) > max:
            maxValue=abs(num)
    return max

i = [1, -2, 3, -7]
print(maxAbs(i))
