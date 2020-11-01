#include <stdio.h>

int main(){

char A, B, C;
scanf("%c %c %c",&A, &B, &C);
    
    if (A > B && A > C && C > B){
        printf("2 3 1\n");
    }
    if (A > B && A > C && B > C){
        printf("3 2 1\n");
    }
    if (B > A && B > C && A > C){
        printf("3 1 2\n");
    }
    if (B > A && B > C && C > A){
        printf("1 3 2\n");
    }
    if (C > A && C > B && A > B){
        printf("2 1 3\n");
    }
    if (C > A && C > B && B > A){
        printf("1 2 3\n");
    }  
    return 0;
}