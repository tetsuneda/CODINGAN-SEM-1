#include <stdio.h>

int main(){

char input[101];
scanf("%[^\n]", input);
getchar();

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", input);
    printf("    return 0;\n}\n");

    return 0;
}