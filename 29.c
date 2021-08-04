#include <stdio.h>
#include <vector>
using namespace std;

// 3의 개수는? (small : 구글인터뷰)
int main()
{
    int i, j;
    int tmp;
    int digit;
    int cnt=0;
    int n;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        tmp=i;
        
        while(tmp>0){
            digit=tmp%10;
            if(digit == 3) cnt++;
            tmp=tmp/10;
        }
    }
    printf("%d \n", cnt);
    return 0;
}
