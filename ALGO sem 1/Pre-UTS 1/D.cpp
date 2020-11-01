#include <stdio.h>

int main(){

int t;
scanf("%d", &t);

for(int i = 0; i < t; i++){
  int n;
  char k[120];
  
  scanf("%d %s", &n, k);
  printf("Case #%d: ", i + 1);
  
  if(k[n - 1] == '1'){

    if(k[n - 2] == '1'){
        printf("%sth\n", k);
    }
    else {
        printf("%sst\n", k);
  }
  }

  else if(k[n-1]=='2') {

    if(k[n - 2] == '1') {
        printf("%sth\n", k);
    }
    else printf("%snd\n", k);
  }

  else if(k[n - 1] == '3'){

    if(k[n - 2] == '1') {
        printf("%sth\n", k);
    }

      else printf("%srd\n", k);

  }

  else {
    printf("%sth\n", k);   
}
}

    return 0;
}