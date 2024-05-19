// Write a function to print the characters of a given string.

// Input Format: Enter a string.
// Output Format: The characters of the string.
#include<stdio.h>
#include<string.h>
void name(char str[]){
for(char i=0;str[i]!='\0';i++){
    printf("%c\n",str[i]);
}
}
int main(){
    char str[50];
    printf("Enter a string:=");
    gets(str);

name(str);
}