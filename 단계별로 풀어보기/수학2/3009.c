#include <stdio.h>

int main(){
    int rectangle_x[4];
    int rectangle_y[4];

    for(int i=0; i<3; i++){
        scanf("%d %d",&rectangle_x[i],&rectangle_y[i]);        
    }

    if(rectangle_x[0]==rectangle_x[1])
        rectangle_x[3]=rectangle_x[2];
    else if (rectangle_x[0]==rectangle_x[2])
        rectangle_x[3]=rectangle_x[1];
    else
        rectangle_x[3]=rectangle_x[0];
    
    if(rectangle_y[0]==rectangle_y[1])
        rectangle_y[3]=rectangle_y[2];
    else if (rectangle_y[0]==rectangle_y[2])
        rectangle_y[3]=rectangle_y[1];
    else
        rectangle_y[3]=rectangle_y[0];

    printf("%d %d",rectangle_x[3],rectangle_y[3]);

    return 0;
}