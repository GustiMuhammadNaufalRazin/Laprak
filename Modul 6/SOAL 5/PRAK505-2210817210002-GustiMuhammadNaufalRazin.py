def biodata(tahun_lahir, Namaku, Asal):
    tahun_sekarang = 2020
    usia = tahun_sekarang - tahun_lahir
    print("\nPerkenalan Nama Saya : ", Namaku)
    print("Umur Saya : ", usia)
    print("Saya adalah angkatan : ", tahun_sekarang)
    print("Asal saya dari : ", Asal)
    print("\n")

def main():
    for i in range(2):
     tahunLahir = int(input())
     A = str(input())
     B = str(input())
     biodata(tahunLahir, A, B)
main()