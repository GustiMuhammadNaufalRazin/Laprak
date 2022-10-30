#include <stdio.h>
int main()
{
    for(int i=0; i<=2; i++){
    int x, y;
    scanf("%d %d", &x,&y);
        if(x > y){
        printf("%d %d",y,x);}
        else{
        printf("%d %d",x,y);}
    }
}
