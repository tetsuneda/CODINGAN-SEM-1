#include <stdio.h>
#include <math.h>

int main(){

long long  a1, a2, a3, b1 , b2, b3, c1, c2, c3, d1, d2, d3, sum1, sum2, sum3;

scanf("(%lld+%lld)x(%lld-%lld)\n", &a1, &b1 , &c1, &d1);
scanf("(%lld+%lld)x(%lld-%lld)\n", &a2, &b2 , &c2, &d2);
scanf("(%lld+%lld)x(%lld-%lld)", &a3, &b3 , &c3, &d3);

sum1 = (a1 + b1) * (c1 - d1);
sum2 = (a2 + b2) * (c2 - d2);
sum3 = (a3 + b3) * (c3 - d3);

printf("%lld %lld %lld\n", sum1, sum2, sum3);

    return 0;
}