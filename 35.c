#include <stdio.h>

// 버블정렬 응용

int main()
{
    int i, j;
    int tmp;
    int a[10];
    int n;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>0 && a[j+1]<0){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
