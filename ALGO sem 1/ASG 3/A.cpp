#include <stdio.h>

int main(){

double awal1, awal2, awal3, awal4, diskon1, diskon2, diskon3, diskon4, akhir1, akhir2, akhir3, akhir4;

scanf("%lf %lf", &diskon1, &akhir1);
scanf("%lf %lf", &diskon2, &akhir2);
scanf("%lf %lf", &diskon3, &akhir3);
scanf("%lf %lf", &diskon4, &akhir4);

awal1 = akhir1 * 100 / (100 - diskon1);
awal2 = akhir2 * 100 / (100 - diskon2);
awal3 = akhir3 * 100 / (100 - diskon3);
awal4 = akhir4 * 100 / (100 - diskon4);

printf("$%.2lf\n", awal1);
printf("$%.2lf\n", awal2);
printf("$%.2lf\n", awal3);
printf("$%.2lf\n", awal4);

    return 0;
}

