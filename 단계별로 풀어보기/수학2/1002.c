#include <stdio.h>

int main(){
    int t;

    scanf("%d",&t);

    for (int i=0; i<t; i++){
        int x1,y1,r1,x2,y2,r2;
        int cnt;
        
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);

        int d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);

        int r_minus=(r1-r2)*(r1-r2);
        int r_plus=(r1+r2)*(r1+r2);

        if(x1==x2 && y1==y2 && r1==r2)
            cnt=-1;
        else if (d>r_plus || d<r_minus)
            cnt=0;
        else if (d==r_plus || d==r_minus)
            cnt=1;
        else 
            cnt=2;
        
        printf("%d\n",cnt);
    }

    return 0;
}