for i in range(5):
    a = int(input())
    if a>=20 and a<=99 or a==10:
        print("Puluhan")
    elif a>99 or a<0:
        print("Anda Menginput Melebihi Limit Bilangan")
    elif a>=11 and a<=19:
        print("Belasan")
    elif a>=1 and a<=9:
        print("Satuan")
    else:
        print("Nol")