```.py
def reverseMode(str):
    a=int(str[0:2], base=2)
    b=int(str[0:2], base=2)
    c=int(str[0:2], base=2)
    result=(a*100)+(b*10)+c
    return result
