for i in range(3):
    x, y = input().split()
    x = int(x)
    y = int(y)
    if(x>y):
        print("%d %d"%(y,x))
    elif(y>x):
        print("%d %d"%(x,y))
