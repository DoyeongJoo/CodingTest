#include <stdio.h>

// 삽입정렬

int main()
{
    int n, i, j;
    int a[10];
    int tmp;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=1; i<n; i++){
        tmp=a[i];
        for(j=i-1; j>=0; j--){
            if(a[j] > tmp) a[j+1]=a[j];
            else break;
        }
        a[j+1]=tmp;
    }
    
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
