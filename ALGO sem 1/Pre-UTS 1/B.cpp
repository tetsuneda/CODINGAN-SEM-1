#include <stdio.h>

int main(){
    int A;
    scanf("%d", &A);

    int arr[A];
    for(int B = 1; B <= A; B++)
        scanf("%d", &arr[B]);

    for (int B = 1; B <= A; B++){
        for (int C = 1; C <= 9; C++){
            if(C == arr[B])
                printf("#");
                     else {
                        printf(".");
                     }
        }
        printf("\n");
        
    }
    return 0;
}