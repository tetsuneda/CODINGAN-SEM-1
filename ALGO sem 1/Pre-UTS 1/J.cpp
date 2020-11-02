#include <stdio.h>

int main() { 
    int tc;
    scanf("%d", &tc);
    
    for (int q = 1; q <= tc; q++){
        int a, b, c, max, limitA, limitB; 
        scanf("%d %d %d %d %d", &a, &b, &c, &limitA, &limitB); 
        
        if (a > b && a > c){ 
            max = a;
        }
        else if (b > c) {max = b;
        }
        else {max = c;
        }

        while (!(max % a == 0 && max % b == 0 && max % c == 0)) max++;
  
        long total=0;
        int temp = max;

        while(temp < limitA) {
            temp += max;
        }

        while(temp <= limitB){
            total += temp;
            temp += max;
        }
        printf("Case #%d: %ld\n", q, total);
    }
    return 0;
} 