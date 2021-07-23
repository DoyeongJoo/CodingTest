#include <stdio.h>

// 가위바위보 게임
// 조건문 만들어서 해결

int main()
{
    // 내가 짠 것
//    int n;
//    int arr1[101];
//    int arr2[101];
//
//    scanf("%d", &n);
//
//    for(int i=0; i<n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//
//    for(int i=0; i<n; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//
//    for(int i=0; i<n; i++)
//    {
//        // A가 이기는 경우
//        if((arr1[i] == 1 && arr2[i] == 3) || (arr1[i] == 2 && arr2[i] == 1) || (arr1[i] == 3 && arr2[i] == 2))
//            printf("A \n");
//
//        // B가 이기는 경우
//        if((arr1[i] == 3 && arr2[i] == 1) || (arr1[i] == 1 && arr2[i] == 2) || (arr1[i] == 2 && arr2[i] == 3))
//            printf("B \n");
//
//        // 비기는 경우
//        if((arr1[i] == 1 && arr2[i] == 1) || (arr1[i] == 2 && arr2[i] == 2) || (arr1[i] == 3 && arr2[i] == 3))
//            printf("D \n");
//    }
    
    // 강사가 짠 것
    
    int n;
    int i;
    int arr1[100];
    int arr2[100];
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    for(i=0; i<n; i++){
        if(arr1[i] == arr2[i]) printf("D \n");
        else if(arr1[i] == 1 && arr2[i] == 3) printf("A \n");
        else if(arr1[i] == 2 && arr2[i] == 1) printf("A \n");
        else if(arr1[i] == 3 && arr2[i] == 2) printf("A \n");
        else printf("B \n");
    }
  
    
    return 0;
}
