#include <stdio.h>

int main(){

long long n, t, x, y, blood, bloodmax[1000], bloodmin, obat[7000];

scanf("%lld", &t);

for (long long i = 1; i <= t; i++){
    bloodmin = 1;
    blood = 1;
    scanf("%lld", &n);

    for (long long j = 0; j < n; j++){
        scanf("%lld", &obat[j]);
        blood += obat[j];

        while (blood <= 0){
            blood += 1;
            bloodmin += 1;
        }
    }
    bloodmax[i - 1] = bloodmin;
}
for (long long i = 1; i <= t; i++){
    printf("Case #%lld: %lld\n", i, bloodmax[i - 1]);
}
    return 0;
}