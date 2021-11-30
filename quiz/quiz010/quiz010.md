```.py
#given an array of sorted ints, find the largest difference between two adjacent numbers
def bigNeighbour(inp):
    max=0;
    for i in range(len(inp)-1):
        if (inp[i+1]-inp[i])>max:
            max = inp[i+1]-inp[i]
    return max
