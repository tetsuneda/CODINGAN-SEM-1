#include <stdio.h>
int main(){
 
 long long int hasil[1024]={0},t;
 long long int n;
 
 scanf("%lld",&t);
 for(int i = 0 ; i< t ;i++){
  long long int res=0;
  scanf("%lld",&n);
  for(int j= 0; j< n; j++){
  long long int temp;
  scanf("%lld",&temp);
  hasil[temp]++;
    
  }
  for(int j= 0 ; j<=1000 ;j++){
   if(hasil[j]>= 3){
   long long int a,b,c;
   a= hasil[j];
   b= hasil[j]-1;
   c= hasil[j]-2;
   res+=a*b*c/6;
   }  
  }
  printf("Case #%lld: %lld",i+1,res);
  printf("\n");
  for(int j= 0 ; j<= 1000; j++){
   hasil[j]=0;
  } 
 }
 
 return 0;
}
