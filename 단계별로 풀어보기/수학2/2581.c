#include <stdio.h>

int main(){
    int m,n;
    int min=-1,sum=0;

    scanf("%d",&m);
    scanf("%d",&n);

    // x=1 일때 최소       
    int x=0;

    for(int i=m; i<=n; i++){
        //판별 값 D=0이면 소수
        int D=0;
        if(i==1)
            D++;
        else{
            for(int j=2; j<i; j++){
                if(i%j==0){
                    D++;
                    break;
                }
            }
        }

        if(D==0){
            sum += i;
            x++;
            if(x==1){
                min=i;
            }
        }
    
    }

    if(min==-1)
        printf("%d",min);
    else
        printf("%d\n%d",sum,min);

    return 0;    
}