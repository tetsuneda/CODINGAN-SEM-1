#include <stdio.h>

int main(){

int a, b, c, d, e, f, g, h, i, z;

scanf("%d %d %d %d", &a, &b, &c, &d);

z = a + b + c;
e = z - (a + d);
h = z - (b + d);
f = z - (a + h);
g = z - (c + d);
i = z - (b + e);

printf("%d %d %d\n", a, e, d);
printf("%d %d %d\n", f, b, g);
printf("%d %d %d\n", h, i, c);

    return 0;
}

/* a e d
   f b g
   h i c */
