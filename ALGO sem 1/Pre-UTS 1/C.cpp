#include <stdio.h>

int main(){
    long long a, b, c, d;
    long long max = 0;
    scanf("%lld %lld", &a, &b);

    long long arr[a];
    for (int c = 0; c < a; c++){
            scanf("%lld", &arr[c]);
        }
            for(int c = 0; c <= a - b; c++){

    long long sum = 0;
    
    for(int d = 0; d < b; d++){
            sum += arr[c + d];
        }
            if(sum > max){
                max = sum;
            }
                }
  printf("%lld\n", max);

  return 0;
}