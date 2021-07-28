// 10 2
// 3 -2 -4 -9 0 3 7 13 8 -3

#include<stdio.h>
#include<vector>

// 온도의 최대값

int main()
{
    int i, max=-214000000;
    int sum=0;
    int n, k;
    
    scanf("%d %d", &n, &k);
    std::vector<int> a(n);
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<k; i++){
        sum+=a[i];
    }
    
    max = sum;
    
    for(i=k; i<n; i++){
        sum=sum+a[i]-a[i-k];
        if(max < sum) max = sum;
    }
    
    printf("%d \n", max);
    
    return 0;
}

