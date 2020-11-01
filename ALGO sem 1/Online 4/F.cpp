#include <stdio.h>
#include <math.h>

int main(){

int T ,N, x = 0;
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++){
        scanf("%d", &N);
        printf("Case #%d: ", i);
        
        for (int i = 2; i <= sqrt(N); i++){
            if(N % i == 0){
                printf("%d ^ ", i);
                
                while (N % i == 0){
                N = N / i;
                x++;
                }

                printf("%d", x);
                x = 0;
                if(N > 1){
                    printf(" * ");
                }
            }
        }
        if (N > 1){
            printf("%d ^ 1", N);
        }
        printf("\n");
    }
    return 0;
}