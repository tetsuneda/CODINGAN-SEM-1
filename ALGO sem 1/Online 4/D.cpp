#include <stdio.h>

int main(){

long long n, x, y, sum = 0;

scanf("%lld %lld %lld", &n, &x, &y);

long long arr[n];

for (int i = 0; i < n; i++){
    scanf("%lld", &arr[i]);
}

for (int i = 0; i < n; i++){
    if (arr[i] % 2 == 0){
        sum += arr[i] * y;
    }

    else{
        sum += arr[i] * x;
    }
}

printf("%lld\n", sum);
    return 0;
}