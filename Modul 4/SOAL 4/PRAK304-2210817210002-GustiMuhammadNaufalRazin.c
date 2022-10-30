#include <stdio.h>
int main()
{
    for(int i=0; i<=4; i++){
    int a;
    scanf("%d",&a);

    if(a>=1 && a<=9){
       printf("Satuan");}
    else if(a==10 || a>=20 && a<=99){
        printf("Puluhan");}
    else if(a>=11 && a<20){
        printf("Belasan");}
    else if(a>=100){
        printf("Anda Menginput Melebihi Limit Bilangan");}
    else if(a==0){
        printf("Nol");}

}
}
