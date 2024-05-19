#include<stdio.h>

void hello(){
int sum=1;
int max=0;

for(int x=1; x<=10;x++){
sum=x*x;
max +=sum;
   
}
  printf("%d\n",max);
}
int main(){

hello();

}