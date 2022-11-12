#include <stdio.h>

void Biodata(int tahun_lahir,int A,int B){
	int tahun_sekarang = 2020;
    int usia = tahun_sekarang - tahun_lahir;
    printf("\nPerkenalkan Nama Saya : %s\n",A);
    printf("Umur Saya : %d\n",usia);
    printf("Saya Adalah Angkatan : %d\n",tahun_sekarang);
    printf("Asal Saya Dari : %s\n",B);
}
int main() {
    for(int i=0; i<=1; i++){
	int tahunLahir;
	    char A[20], B[15];
	    scanf(" %d",&tahunLahir);
	    scanf(" %[^\n]%*c",&A);
	    scanf(" %[^\n]%*c",&B);
	Biodata(tahunLahir, A, B);}
	return 0;
}
