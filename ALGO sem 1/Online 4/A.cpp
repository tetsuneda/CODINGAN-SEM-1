#include <stdio.h>

int main(){

long long a, b, c, d, sum1, sum2;

scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

sum1 = a * b;
sum2 = c + d;

if (sum1 > sum2){
    printf("True\n");
}

else{
    printf("False\n");
}
    return 0;
}