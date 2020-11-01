#include <stdio.h>

int main(){

double L, B, H, luas;

scanf("%lf %lf %lf", &L, &B, &H);

luas = 2 * (0.5 * H * B) + 3 * (L * B);

printf("%.3lf\n", luas);

    return 0;
}