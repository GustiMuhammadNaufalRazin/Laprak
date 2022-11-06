x, y = input().split()
x = int(x) ; y = int(y)
i = x ; j = y
if x > y:
    while i >= y and j <= x:
     print("%d %d"%(i,j), end='')
     if i == y : break
     else : print(" - ",end='')
     i-=1 ; j+=1
else :
    while i <= y and j >= x:
        print("%d %d"%(i,j), end='')
        if i == y : break
        else : print(" - ",end='')
        i+=1 ; j-=1