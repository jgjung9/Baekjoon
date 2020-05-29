#include <stdio.h>

int main(){
    int t;

    scanf("%d",&t);

    for(int k=0; k<t; k++){
        int h,w,n;
        
        scanf("%d %d %d",&h,&w,&n);

        int m=0;

        for (int i=1;i<=w;i++){
            for(int j=1; j<=h; j++){
                m++;
                if(m==n){
                    if(i<10){
                        printf("%d0%d\n",j,i);
                        break;
                    }
                    else{
                        printf("%d%d\n",j,i);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}