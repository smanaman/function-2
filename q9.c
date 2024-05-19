// Question: Write a function to print the reverse of a given string.

// Input Format: Enter a string.
// Output Format: The reverse of the given string.
#include<stdio.h>
#include<string.h>

void hello(char str[]){
    printf("The reverse of the given string:=\n");
 int length=strlen(str);
 for(char i=length-1;i>=0;i--){
    printf("%c",str[i]);
 }

}
int main(){
    char str[50];
    printf("Enter a string:=");
    gets(str);
hello(str);
}