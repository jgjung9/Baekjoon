#include <stdio.h>

int main(){
    int t;
    int person[14][14]={0};

    person[0][0]=1;

    //1층 호별 사람수 초기화
    //층별로 1호 사람 모두 1로 초기화
    for(int i=1; i<14; i++){
        person[i][0]=1;
        person[0][i]=person[0][i-1]+i+1;

    }

    // k층 n호 = k층 n-1호 + k-1층 n호
    for(int i=1; i<14; i++){
        for(int j=1; j<14; j++){
            person[i][j]=person[i-1][j]+person[i][j-1];
        }
    }

    scanf("%d",&t);

    //t 만큼 loop k,t 입력 받고 사람 수 출력
    for (int i=0; i<t; i++){
        int k,n;

        scanf("%d",&k);
        scanf("%d",&n);

        printf("%d\n",person[k-1][n-1]);
    }

    return 0;
}