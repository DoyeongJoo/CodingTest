#include <stdio.h>

// 버블정렬
// 시간복잡도가 가장 안좋은 정렬
// 가장 큰 숫자를 제일 뒤에 배치 (선택정렬은 앞에서부터 채움)

int main()
{
    int n;
    int i,j;
    int temp;
    int a[10];
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                printf("a[j] : %d, a[j+1] : %d \n", a[j], a[j+1]);
            }
        }
    }
    
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
