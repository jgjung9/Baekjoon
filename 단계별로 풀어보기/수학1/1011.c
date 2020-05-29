#include <stdio.h>

int main(){
    int t;

    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int x,y;
        int cnt;
        scanf("%d %d",&x,&y);

        int d=y-x;
        int k;

        // 한번에 가장 길게 간 걸이가 a라 하면 1~(a-1)은 최소한 2개씩 a는 한개씩 있어야 한다.
        for(int j=1; ; j++){
            k=d-j*j;
            
            // 남은 거리에 따라 두번 더 가야 하는지 한번더 가야 하는지 판별
            if(k>=2*j+1)
                continue;
            else if(k>j){
                cnt=2*j+1;
                break;
            }
            else if(k>0){
                cnt=2*j;
                break;
            }
            else{ //k==0
                cnt=2*j-1;
                break;
            }         
        }

        printf("%d\n",cnt);
    }

    return 0;
}