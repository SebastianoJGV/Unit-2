```.py
def bubbleSwap(inp):
    chars = list(inp)
    l =len(inp)
    for i in range(l-1):
        chars[i], chars[i+1]=chars[i+1], chars[i]
    return chars
