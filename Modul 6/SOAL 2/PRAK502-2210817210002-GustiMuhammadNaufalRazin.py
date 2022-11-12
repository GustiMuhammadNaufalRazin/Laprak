def hitung(nilai1, nilai2):
    return nilai1 - nilai2

def mutlak(angka):
    return abs(angka)

def main():
    for i in range(3):
     a, b, c, d = [int(a) for a in input("").split()]
     hasil = hitung(a, c) + hitung(b, d)
     print(mutlak(hasil))
main()