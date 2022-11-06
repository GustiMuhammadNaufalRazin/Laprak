#include <stdio.h>
int main()
{
    for(int i=0; i<=5; i++){
    int a;
    scanf("%d",&a);

    for(int j=1; j<=a; j++){
        if(j%2!=0)
            printf("%d ",j);}
    printf("\n");
    for(int j=a; j>0; j--){
        if(j%2==0)
            printf("%d ",j);}
    }
}
