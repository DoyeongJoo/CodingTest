#include <stdio.h>

// 3의 개수는 (large)
// 5367
int main()
{
    int n;
    int lt, cur, rt;
    int res=0;
    int k = 1;
    
    scanf("%d", &n);
    
    while(1){
        lt=n/(k*10); // 536
        cur=(n/k)%10; // 7
        rt=n%k; // 0
        k=k*10;
        printf("lt:%d cur:%d rt:%d \n",lt,cur,rt);
        
        if(cur<3){
            res=res+(lt*k);
        }
        
        else if(cur>3){
            res=res+(lt+1)*k;
        }
        
        else{
            res=res+((lt+k)+rt);
        }
        
        if(lt==0) break;
    }
    
    printf("%d \n", res);
    return 0;
}
