#include <stdio.h>

int main(){

int t, n;
long long x, y;

scanf("%d", &t);

for (int i = 0; i < t; i++){
    scanf("%d", &n);
    long long arr[n];
    x = -1000001;
    y = -1000001;

    for(int j = 0; j < n; j++ ){
            scanf("%lld", &arr[j]);
            if(arr[j] == x)
            y = x;
            if(arr[j] > x)
            x = arr[j]; 
    }

    for (int j = 0; j < n; j++){
        if(arr[j] >= y && arr[j] < x)
        y = arr[j];
    }

    printf("Case #%d: %lld\n",i + 1, x + y);

}
    return 0;
}
