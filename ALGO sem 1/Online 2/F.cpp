#include <stdio.h>

int main(){

char input[10];
int i;
for(i = 0; i < 9; i++){
    scanf("%c", &input[i]);
    getchar();
}

printf("  %c\n", input[0]);
printf(" %c %c\n", input[3], input[1]);
printf("%c %c %c\n", input[6], input[4], input[2]);
printf(" %c %c\n", input[7], input[5]);
printf("  %c\n", input[8]);

    return 0;
}

