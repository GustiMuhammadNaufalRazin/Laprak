def reverse(n) : 
    rev = n[::-1]
    return rev

def main():
    for i in range(3):
        a, b = input("").split()
        A = reverse(a)
        B = reverse(b)
        C = str(int(A)+int(B))
        print(int(reverse(C)))
main()