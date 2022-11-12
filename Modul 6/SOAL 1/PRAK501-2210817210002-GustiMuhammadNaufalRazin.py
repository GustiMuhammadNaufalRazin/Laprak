def MaxBilangan(a, b, c, d):
    return max(a,b,c,d)

def main():
    for i in range(3):
     a, b, c, d = [int(a) for a in input("").split()]
     hasil = MaxBilangan(a, b, c, d)
     print(hasil)
main()