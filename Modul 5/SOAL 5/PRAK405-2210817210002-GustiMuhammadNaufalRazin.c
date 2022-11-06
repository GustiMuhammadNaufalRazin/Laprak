#include <stdio.h>
int main()
{
    for(int i=0; i<=3;i++){
    int a,b,c,x,y,o,p,q,hh;
    scanf("%d %d",&a,&b);
    for (x=1; x<=a; x++){
        for (y=x; y>1; y--){
            printf("(%d * %d) + ",y ,b);}
        for (c=1, hh=c*b; c<x; c++, hh+=(c*b)){}
            printf("(%d * %d) =  %d\n",y,b,hh);}
    for (o=1, p=1, q=0; o<=a; p += o + 1, o++){
        q += p * b;}
    printf("%d",q);
    printf("\n\n");
    }
}
