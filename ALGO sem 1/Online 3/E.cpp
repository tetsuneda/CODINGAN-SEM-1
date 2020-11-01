#include <stdio.h>

int main(){

long long N, S, A, B, C, total;
double TK, TB;

scanf("%lld %lld %lld %lld %lld", &N, &S, &A, &B, &C);

TK = N * S * S * S;
TB = (A - A % S) * (B - B % S) * (C - C % S);
total = (TK + (TB - 1)) / TB;

printf("%lld\n", total);

    return 0;
}