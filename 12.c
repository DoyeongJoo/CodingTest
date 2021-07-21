#include <stdio.h>

// 숫자의 총 개수
// 다시 풀어보자 

int main()
{
    int n;
    int i;
    int sum=0;
    int res=0;
    int c=1;
    int d=9;
    
    scanf("%d", &n);
    
    while(sum+d<n){
        res=res+(c*d);
        sum=sum+d;
        c++;
        d=d*10;
    }
    
    res=res+(n-sum)*c;
    
    printf("%d ", res);
    
    return 0;
}
