// TSRS (Take Something, Return Something)
// Question: Write a function to return the square of a given number.

// Input Format: Enter a number.
// Output Format: The square of the given number.
#include<stdio.h>
  int count(int a){
return  a*a;
  }
  int main(){
    int a;
    printf("Enter your number:=");
    scanf("%d",&a);
 printf("The square of the given number:=%d",count(a));
  }