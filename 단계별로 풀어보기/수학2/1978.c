#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    int Num[100]={0};
    int primeCnt=0;

    for(int i=0; i<n; i++){
        scanf("%d",&Num[i]);
        
        //판별 값
        int D=0;
        if(Num[i]==1){
            D++;
        }
        else{
            for(int j=2; j<Num[i]; j++){
                if(Num[i]%j==0){
                    D++;
                    break;
                }
            }
        }
        

        //D==0이면 소수
        if (D==0)
            primeCnt++;
    }
    printf("%d",primeCnt);

    return 0;
}