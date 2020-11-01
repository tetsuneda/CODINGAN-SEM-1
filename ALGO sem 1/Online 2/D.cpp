#include <stdio.h>

int main(){

char num[10];
scanf("%[^\n]", num);

printf("-");
printf("%c", num[3]);
printf("%c", num[2]);
printf("%c", num[1]);
printf("-\n");

    return 0;
}