#include <stdio.h>

int main(){

int t;

scanf("%d", &t);

int num[t];
for (int i = 0; i < t; i++){
    scanf("%d", &num[i]);
    getchar();
}

for(int i = 0; i < t; i++){
    printf("Case #%d: ", i + 1);

    if (num[i] % 11 == 0 && num[i] % 7 != 0){
        printf("Eleven\n");
    }

    if (num[i] % 7 == 0 && num[i] % 11 != 0){
        printf("Seven\n");    
    }

    if (num[i] % 7 == 0 && num[i] % 11 == 0){
        printf("ElevenSeven\n");    
    }

    if (num[i] % 7 != 0 && num[i] % 11 != 0){
        printf("%d\n", num[i]);  
    }
}


    return 0;
}