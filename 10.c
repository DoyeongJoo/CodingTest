// 자릿 수의 합

#include <stdio.h>

// 자릿 수의 합
//
int digit_sum(int x)
{
    int sum=0;
    
    while(x>0){
        sum = sum + x%10;
        x = x/10;
    }
    
    return sum;
}

int main()
{
    int n;
    int sum=0;
    int res;
    int num;
    int max = -123123123;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        sum = digit_sum(num);
        
        if(max < sum)
        {
            max = sum;
            res = num;
        }
        
        else if(max == sum)
        {
            if(num > res){
                res = num;
            }
        }
    }
    
    printf("%d ", res);
    
    return 0;
}
