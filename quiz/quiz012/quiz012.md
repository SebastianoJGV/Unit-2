```.py
def wordLength(lst):
    num=len(lst)
    sum=0
    for i in range(num-1):
        sum = sum+len(lst[i])
    average = sum/num
    return average

print(wordLength(['hi', 'how', 'are', 'you']))
