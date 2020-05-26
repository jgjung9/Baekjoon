/* 문제
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 

예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, 

aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 

단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

출력
첫째 줄에 그룹 단어의 개수를 출력한다. */

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // 그룹 단어의 개수
    int cnt=0;
    
    //단어 입력 loop and cnt 카운트
    for (int i=0; i<n; i++){
        char Word[100];

        scanf("%s", Word);

        // 각각 연속된 알파벳이 등장한 횟수 ex)aaba -> alphabet[0]=2, alphabet[1]=1.
        int alphabet[26]={0};
        for (int j=0; Word[j]!=0; j++){
            if (j==0)
                alphabet[Word[j]-'a']++;
            else{
                if (Word[j-1]!=Word[j]){
                    alphabet[Word[j]-'a']++;
                }
            }
        } 

        // 같은 알파벳이 연속되지 않는 횟수
        int x=0;
        //
        for (int j=0; j<26; j++){
            if (alphabet[j]>1){
                x++;
            }
        }
        
        if(x==0){
            cnt++;
        }
    }

    printf("%d",cnt);

    return 0;
}