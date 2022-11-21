x, y = map(int, input().split())
angka = []
z = 0
isi = list(map(int, input().split()))
for i in range (x):
    angka.append(isi[z : z + y])
    z = z + y
for x in angka:
    for isi in x:
        print(isi, end=' ')
    print()