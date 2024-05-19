#include<stdio.h>

void number(){

 int count,i,a;

for(i=1;i<=50;i++){
    if(50 % i ==0){
        count++;

}
if(count==2){
    printf("%d",count);
}
}


}
int main(){
number();

}