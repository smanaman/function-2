#include<stdio.h>
 int count(){
     int sum = 0;
     int a;
     printf("Enter your number:=");
     scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        sum += i;
    }
    return sum;
}

  
  int main(){
   int cjb=count();
  printf("%d",cjb);
  }