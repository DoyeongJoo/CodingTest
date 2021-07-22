#include <stdio.h>

// 선생님 퀴즈
// sum을 계속 초기화 해주는 것이 관건

void solution(int num, int answer)
{
    int i;
    int sum=0;
    
    for(i=1; i<=num; i++){
        sum = sum+i;
    }
    
    if(sum == answer)   printf("YES \n");
    else printf("NO \n");
}

int main()
{
    int n;
    int num, answer=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d %d", &num, &answer);
        
        solution(num, answer);
    }
    return 0;
}
