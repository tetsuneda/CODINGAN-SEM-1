#include <stdio.h>
#include <math.h>

int main(){

double A, B, C, X, diagonal, luas;

scanf("%lf %lf %lf", &A, &B, &C);

X = pow(A, 2) + pow(B, 2) + pow(C, 2);
diagonal = sqrt(X);
luas = 4 * 3.14159265359 * diagonal / 2 * diagonal / 2;

printf("%.2lf\n", luas);
    
    return 0;
}