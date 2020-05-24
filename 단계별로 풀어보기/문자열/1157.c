/*
문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/

#include <stdio.h>

int main() {
    int cnt[26]={0};
    char Word[1000000]={0};
    
    scanf("%s",&Word);

    for(int i=0; Word[i]!=0 ;i++){
        for(int j=0; j<sizeof(cnt)/sizeof(int);j++){
            if(Word[i]=='a'+j || Word[i]=='A'+j){
                cnt[j]++;
            }
        }
    }
    
    int n=0;
    int max=0;
    
    for (int i=0; i<26;i++){    
        if(max<=cnt[i]){
            max=cnt[i];
            n=i;
        }
    }

    int max_2=0;

    for (int i=0; i<n;i++){
        
        if(max_2<=cnt[i]){
            max_2=cnt[i];
        }
    }

    if (max_2==max){
        printf("?");
    }
    else{
        printf("%c",'A'+n);
    }

    return 0;
}