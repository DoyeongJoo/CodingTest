#include <stdio.h>

// 석차구하기 (브루트포스)
// 배열 2개 만들어 등수가 작은만큼 값 증가

int main()
{
    int n;
    int i, j;
    int a[101];
    int b[101];
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        
        b[i] = 1;
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i] < a[j]){
                b[i]++;
            }
        }
    }
    
    for(i=0; i<n; i++){
        printf("%d ", b[i]);
    }
}
