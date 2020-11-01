#include <stdio.h>

int main(){

int N, K;
scanf("%d %d", &N, &K);

//PERSEGI 1
//baris
for(int i = 0; i < N; i++){
      //kolom
      for(int j = 0; j < N; j++){
              printf("#");
            }
          printf("\n");
        }
    
printf("\n");

//PERSEGI 2 
//baris
for(int i = 1; i < N; i++){
    if(i % K == 0){
      //kolom
      for(int j = 0; j < N; j++){
               printf("#");
            }
          }
    else {
          for(int j = 0; j < N; j++){
               printf(".");   
          } 
        }
      printf("\n");
     }


  printf("\n");

for(int i = 0; i < N; i++){
      //kolom
      for(int j = 1; j < N; j++){
            if(j % K == 0){ 
              printf("#");
              }
            else{
              printf(".");
            }
            }
        printf("\n");
        }

    return 0;
}