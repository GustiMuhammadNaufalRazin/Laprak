#include <stdio.h>
int main()
{
    for(int i=0; i<=3; i++){
    int a;
    char c[10];
    scanf("%d %s",&a,&c);
    for(int j=1; j<51; j++){
        if(j%a==0)
            printf("%s ",c);
        else
            printf("%d ",j);}
    }
}
