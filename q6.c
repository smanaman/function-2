
// Question: Write a function to print the sum of two given numbers.

// Input Format: Enter two numbers.
// Output Format: The sum of the two numbers.


   #include<stdio.h>
void hello(int a,int b){
printf("The sum of the two numbers:=%d",a+b);
}
int main(){
int a;
int b;
printf("Enter first numbers:=");
scanf("%d",&a);
printf("Enter second numbers:=");
scanf("%d",&b);
hello(a,b);
   } 