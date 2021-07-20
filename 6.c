#include <stdio.h>

int main()
{
    // input : eioww0wwiw2oww3
    // 이해못한부분 : 1. 문자열의 끝을 어떻게 처리할지 2. 합계 누적 방법

    char a[100];
    int res=0;
    int cnt=0;
    int i=0;
    
    scanf("%s", &a);
    
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            printf("a[%d] : %d \n", i, a[i]-48);
            res = res * 10 + (a[i]-48);
            printf("res : %d \n", res);
        }
    }
    
    printf("%d \n", res);
    
    for(i=1; i<=res; i++)
    {
        if(res%i == 0) cnt++;
    }
    
    printf("%d \n", cnt);
}
