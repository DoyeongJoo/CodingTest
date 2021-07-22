#include <stdio.h>
#include <stdbool.h>

// 소수 뒤집기
// 1. 숫자를 어떻게 뒤집지 /10 %10 활용해야하나
// 2. 3700 에서 00은 날리고 73으로 만들어야 함 어떻게?

int reverse(int x)
{
    int tmp;
    int res=0;
    
    while(x>0){
        tmp = x%10;
        res = (res*10) + tmp;
        x = x/10;
    }
    return res;
}

bool isPrime(int x)
{
    bool flag = true;
    
    if(x == 1) return false;
    
    for(int i=2; i<x; i++){
        if(x%i==0){
            flag = false;
            break;
        }
    }
    
    return flag;
}

int main()
{
    int num;
    int i;
    int n;
    int tmp;
    
    scanf("%d", &num);
    
    for(i=0; i<num; i++){
        scanf("%d", &n);
        tmp = reverse(n);
        
        if(isPrime(tmp)) printf("%d ", tmp);
    }
    
    return 0;
}
