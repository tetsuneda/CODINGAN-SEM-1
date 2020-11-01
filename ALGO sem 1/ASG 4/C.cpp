#include <stdio.h>

int main(){

int N, K, total = 0;

scanf("%d %d", &N, &K);

int num[N];
for (int i = 0; i < N; i++){
    scanf("%d", &num[i]);

    if (num[i] % K == 0){
        total++;
    }
}
printf("%d\n", total);
    return 0;
}