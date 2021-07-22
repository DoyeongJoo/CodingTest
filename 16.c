#include <stdio.h>
#include <stdlib.h>

// Anagram 구글 인터뷰 문제
// 해결방법. : 아스키 넘버에 해당하는 알파벳 카운트하기
int main()
{
    char arr[100];
    int i;
    int a[60];
    int b[60];
    
    scanf("%s", &arr);
    
    for(i=0; i<60; i++){
        a[i] = 0;
        b[i] = 0;
    }
    
    for(i=0; arr[i]!='\0'; i++){
        if(arr[i] >=65 && arr[i] <= 90){
            a[arr[i]-64]++;
        }
        else{
            a[arr[i]-70]++;
        }
    }
    
    scanf("%s", &arr);
    
    for(i=0; arr[i]!='\0'; i++){
        if(arr[i] >=65 && arr[i] <= 90){
            b[arr[i]-64]++;
        }
        else{
            b[arr[i]-70]++;
        }
    }
    
    for(i=1; i<=52; i++){
        printf("a[%d] : %d \n", i, a[i]);
        printf("b[%d] : %d \n", i, b[i]);
        if(a[i]!=b[i]){
            printf("NO\n");
            exit(0);
        }
    }
    
    printf("YES\n");
    return 0;
}
