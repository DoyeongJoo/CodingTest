#include <stdio.h>

// 가장 많이 사용된 자릿 수
// 1. 문자/숫자 중 입력방법
// 2. for문 돌며 나온 수 카운트
// 3. 최대값 찾기 및 해당하는 수 출력

int main()
{
    char a[101];
    int cnt[10];
    int num;
    int max = -2147000000;
    int digit;
    
    scanf("%s", &a);
    
    for(int i=0; i<10; i++){
        cnt[i] = 0;
    }
    
    for(int i=0; a[i]!='\0'; i++){
        digit = a[i]-48;
        cnt[digit]++;
    }

    for(int i=0; i<=9; i++){
        if(max < cnt[i]){
            max = cnt[i];
            num = i;
        }
    }
    
    printf("%d \n", num);
    
    
    return 0;
}
