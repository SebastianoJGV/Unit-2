```.py
def sum67(inp):
    current=0
    indexi=0
    indexn=0
    sub = 0
    for ele in inp:
        current+=1
        if ele == 6:
            indexi=current
        elif ele == 7:
            indexn=current
    for i in inp[indexi-1:indexn]:
        sub += i
    sub = sum(inp)-sub
    return sub
