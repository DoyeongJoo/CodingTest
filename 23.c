#include <stdio.h>

// 연속 부분 증가수열

int main()
{
    int i, pre, now;
    int n;
    int max=1, cnt=1;
    
    scanf("%d", &n);
    
    scanf("%d", &pre);
    
    for(i=2;i<=n;i++){
        scanf("%d", &now);
        
        if(now >= pre){
            cnt++;
            if(cnt > max) max = cnt;
        }
        else cnt=1;
        pre = now;
    }
    
    printf("%d \n", max);
    
    
    return 0;
}
