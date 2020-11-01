#include <stdio.h>

int main(){

char name[100];
scanf("%[^\n]", name);
getchar();
printf("Congratulation \"%s\" for entering the computer science department at Bina Nusantara University.\n", name);

    return 0;
}