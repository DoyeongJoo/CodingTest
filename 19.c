#include <stdio.h>

// 분노유발자
// 배열에 값을 저장하고 j=i 부터 뒷 자라가 큰 경우가 없음을 확인하면 됨.
int main()
{
//    // 내가 한 것
//    int i, j;
//    int num;
//    int arr[100];
//    int isTrue = 1;
//    int cnt=0;
//
//    scanf("%d", &num);
//
//    for(i=0; i<num; i++){
//        scanf("%d", &arr[i]);
//    }
//
//    for(i=0; i<num-1; i++){
//        for(j=i+1; j<num; j++){
//            if(arr[i]<arr[j]){
//                isTrue = -1;
//            }
//        }
//        if(isTrue == 1){
//            cnt++;
//            printf("arr[%d] : %d \n", i, arr[i]);
//            printf("cnt : %d \n", cnt);
//        }
//        isTrue = 1;
//    }
//
//    printf("%d \n", cnt);
//
    // 강사 알려준 방법
    int i;
    int max;
    int cnt=0;
    int n;
    int arr[101];
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    
    max = arr[n];
    
    for(i=n-1; i>=1; i--){
        if(max < arr[i]){
            max = arr[i];
            cnt++;
            printf("arr[%d] : %d \n", i, arr[i]);
        }
    }
    
    printf("%d \n", cnt);
    
    return 0;
}
