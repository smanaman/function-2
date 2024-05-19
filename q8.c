// Question: Write a function to print the length of a given string.

// Input Format: Enter a string.
// Output Format: The length of the string.

#include<stdio.h>
#include<string.h>
void name(char str[]){
int length=strlen(str);
printf("The length of the string:=%d",length);
}

int main(){
  char str[50];
  printf("Enter a string:=");
  gets(str);

  name(str);
}