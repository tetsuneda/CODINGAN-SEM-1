#include <stdio.h>
#include <math.h>

int main(){

double awal, bunga, bulan, hasil;
scanf("%lf %lf", &awal, &bunga);

bunga = bunga / 100;
hasil = awal * pow(1 + bunga, 3);

printf("%.2lf\n", hasil);

    return 0;
}