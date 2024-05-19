#include<stdio.h>

void number(){
    int sum=1;
for(int i=1; i<=5;i++){
 sum*=i;
 printf("%d\n",i);
}
 printf("Factorials of numbers:=%d",sum);

}
int main(){
number();
}