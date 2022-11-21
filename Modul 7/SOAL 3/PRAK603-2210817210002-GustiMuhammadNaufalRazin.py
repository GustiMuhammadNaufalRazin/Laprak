x, y = map(int, input().split())
if(x!=y):
    print("Jumlah tidak sama")
else:
    baris1=list(map(int, input().split()))
    baris2=list(map(int, input().split()))
    for i in range (x):
        print(baris1[i]*baris2[i], end=' ')