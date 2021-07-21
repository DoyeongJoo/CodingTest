#include <stdio.h>

// 모두의 약수
// time limit error
// 약수의 개수를 배열에 저장

int main()
{
    int i, j;
    int num;
    // int cnt;
    int arr[50000]={0,};
    
    scanf("%d", &num);
    
    for(i=1; i<=num; i++)
    {
        for(j=i; j<=num; j=j+i)
        {
            arr[j]++;
        }
    }
    
    for(i=1; i<=num; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}
