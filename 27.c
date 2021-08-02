#include <stdio.h>
#include <vector>
using namespace std;

// N!의 표현법 (소인수분해 응용)
// 소수의 개수 카운트하기

int main()
{
    int i, j;
    int n;
    int tmp;
    
    scanf("%d", &n);
    
    vector<int> ch(n+1);
    
    for(i=2; i<=n; i++){
        tmp = i;
        j=2;
        
        while(1){
            if(tmp%j==0){
                tmp=tmp/j;
                ch[j]++;
            }
            else j++;
            
            if(tmp==1) break;
        }
    }
    
    printf("%d! = ", n);
    
    for(i=2; i<=n; i++){
        if(ch[i]!=0) printf("%d ", ch[i]);
    }
    
    printf("\n");
    
    return 0;
}
