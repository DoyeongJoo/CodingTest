#include <stdio.h>

// 층간소음
// 연속으로 경보울린 시간 어떻게 계산할지? => 변수를 만들어 저장
int main()
{
    int n, m;
    int value;
    int cnt=0;
    int max=-2147000000;
    
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++){
        scanf("%d", &value);
        
        if(value > m){
            cnt++;
        }
        else cnt=0;
        
        if(cnt>max) max = cnt;
    }
    
    if(max==0) printf("-1 \n");
    
    printf("%d \n", max);
    
    
    
    return 0;
}
