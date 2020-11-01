#include <stdio.h>

int main(){

long long stairs;

scanf("%lld", &stairs);
getchar();

long long steps[stairs];

for (int i = 0; i < stairs; i++){
    scanf("%lld", &steps[i]);
    getchar();
}

for (int j = 0; j < stairs; j++){
    if (steps[j + 1] == 1){
        printf("%lld ", steps[j]);
    }    
else if (j == stairs - 1){
    printf("%lld\n", steps[j]);
    }
}
    return 0;

}