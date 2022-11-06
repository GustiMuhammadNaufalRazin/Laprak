a,b = input().split()
a = int(a) ; b = int(b)
for i in range (1,a+1):
    jar=i
    while jar >1:
        print("(%d * %d) + "%(jar,b), end='');jar-=1
    o = 1 ; hasil=(i * b)
    while o<i:
        hasil += ( o * b) ; o+=1
    print("(%d * %d) = %d"%(jar,b,hasil))
o=1 ; p=1 ; q=0
while o<=a:
    q += p * b ; p += o + 1 ; o +=1
print("%d"%(q))