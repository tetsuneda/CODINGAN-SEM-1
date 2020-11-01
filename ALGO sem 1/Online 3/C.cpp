#include <stdio.h>

int main(){

double T1, T2, T3, a, b ,c, d, e, f;
T1 = 3;
T1 = a;
T1 = b;
T2 = 3;
T2 = c;
T2 = d;
T3 = 3;
T3 = e;
T3 = f;

scanf("%lf", &T1);
scanf("%lf %lf", &a, &b);
scanf("%lf %lf", &c, &d);
scanf("%lf %lf", &e, &f);

T1 = a * b / 360;
T2 = c * d / 360;
T3 = e * f / 360;

printf("%.2lf\n%.2lf\n%.2lf\n", T1, T2, T3);
    return 0;

}