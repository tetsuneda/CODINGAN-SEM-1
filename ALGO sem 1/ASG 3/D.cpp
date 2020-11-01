#include <stdio.h>

int main(){

long long days, blackout, blackoutdays;

scanf("%lld %lld", &days, &blackout);

blackoutdays = days / blackout;

printf("%lld\n", blackoutdays);

    return 0;
}