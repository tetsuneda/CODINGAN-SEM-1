#include <stdio.h>

int main(){

int a, b, c, d, sum1, sum2;

scanf ("%d %d %d %d", &a, &b, &c, &d);

sum1 = a * b;
sum2 = c - d;

if(sum1 == sum2){
    printf("True\n");
}
else{
    printf("False\n");
}
    return 0;
}