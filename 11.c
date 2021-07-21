#include <stdio.h>

// 숫자의 총 개수
// i를 tmp로 치환 해야함. -> i 값 꼬임.

int main()
{
    int n;
    int cnt=0;
    int tmp;
    
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        tmp = i;
        while(tmp>0){
            cnt++;
            tmp = tmp/10;
        }
    }
    
    printf("%d \n", cnt);
    return 0;
}
