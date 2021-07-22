#include <stdio.h>

// 소수 개수 구하기
// 시간 제한 1초
// 제곱근을 활용해 시간 줄이기

int main()
{
    int i, j, n;
    int flag;
    int cnt=0;
    
    scanf("%d", &n);
    
    for(i=2; i<n; i++){
        flag = 1;
        
        for(j=2; j*j<=i; j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        
        if(flag == 1) cnt++;
    }
    
    printf("%d ", cnt);
    
    return 0;
}
