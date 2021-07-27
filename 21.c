#include <stdio.h>

int main()
{
    int arr1[100];
    int arr2[100];
    int as=0, bs=0;
    int lw=0;
    int i;
    
    for(i=0; i<10; i++){
        scanf("%d", &arr1[i]);
    }
    
    for(i=0; i<10; i++){
        scanf("%d", &arr2[i]);
    }
    
    for(i=0; i<10; i++){
        if(arr1[i]>arr2[i]){
            as=as+3;
            lw=1;
        }
        else if(arr1[i]<arr2[i]){
            bs=bs+3;
            lw=2;
        }
        else if(arr1[i]==arr2[i]){
            as++;
            bs++;
        }
    }
    
    printf("%d %d \n", as, bs);
    
    if(as==bs){
        if(lw==0){
            printf("D \n");
        }
    }
    else if(lw==1){
        printf("A \n");
    }
    
    else{
        printf("B \n");
    }
    return 0;
}
