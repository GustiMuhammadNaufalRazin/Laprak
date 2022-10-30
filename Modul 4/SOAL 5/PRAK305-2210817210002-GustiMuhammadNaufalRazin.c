#include <stdio.h>
int main()
{
    for (int i=0; i<=5; i++){
        int s, dtk, mnt, jam, h;
        scanf("%d", &s);
        dtk = s%60;
        mnt = (s/60)%60;
        jam = (s/3600)%24;
        h  = s/84600;
        if(s<=3600 || s>3600 && s<=86400){
            printf("%.2d:%.2d:%.2d\n\n", jam, mnt, dtk);}
        else{
            printf("%d hari %.2d:%.2d:%.2d\n\n", h, jam, mnt, dtk);}
    }
}
