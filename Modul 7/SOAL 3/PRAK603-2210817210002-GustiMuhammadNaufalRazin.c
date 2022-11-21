#include <stdio.h>
int main(){
    int baris1, baris2, i, isi, hh;
    for(int x=0; x<3; x++){
    scanf("%d %d",&baris1,&baris2);
    int angka1[baris1], angka2[baris2];
    if(baris1 == baris2){
        for(i=0; i<baris1; i++){
            scanf("%d",&isi);
            angka1[i] = isi;}
        for(i=0; i<baris2; i++){
            scanf("%d",&isi);
            angka2[i] = isi;}
        for(i=0; i<baris2; i++){
            hh = angka1[i]*angka2[i];
            printf("%d ",hh);}
    }
    else{
        printf("Jumlah Tidak Sama");}}
}

