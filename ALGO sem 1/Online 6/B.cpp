#include<stdio.h>

int main(){
    long long N, total = 1;
    scanf("%lld", &N);
    for (int i = 1; i <= N; i++){
        total = total * 2;
    }
    total = total - 1;
    printf("%lld\n", total);
    return 0;
}