#include <stdio.h>
#include <vector>
using namespace std;


// 마라톤
// 이중 for문을 이용한 비교 활용
int main()
{
    int i,j;
    int n;
    int cnt=0;
    
    scanf("%d", &n);
    
    vector<int> a(n+1);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    printf("1 ");
    
    for(i=1; i<n; i++){
        cnt = 0;
        for(j=i-1; j>=0; j--){
            if(a[i]<=a[j]) cnt++;
            
        }
        printf("%d ", cnt+1);
    }
    
    return 0;
}
