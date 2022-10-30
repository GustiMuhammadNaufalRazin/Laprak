#include <stdio.h>
int main()
{
    for(int i=0; i<=4; i++){
    int x;
    scanf("%d", &x);

    if(x>=80 && x<=100){
        printf("A\n");}
    else if(x>= 70 && x<=79){
        printf("B\n");}
    else if(x>=60 && x<=69){
        printf("C\n");}
    else if(x>=50 && x<=59){
        printf("D\n");}
    else if(x<50){
        printf("E");
    }
}
}
