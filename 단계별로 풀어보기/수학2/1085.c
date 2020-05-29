#include <stdio.h>

int main(){
    int x,y,w,h;

    scanf("%d %d %d %d",&x,&y,&w,&h);

    int x_min;
    int y_min;

    if((w-x)>x)
        x_min=x;
    else
        x_min=w-x;

    if((h-y)>y)
        y_min=y;
    else
        y_min=h-y;

    if(x_min>y_min)
        printf("%d",y_min);
    else
        printf("%d",x_min);
    
    return 0;
}