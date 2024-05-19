// Question: Write a function to print all the vowels in a given string.

// Input Format: Enter a string.
// Output Format: The vowels in the string.
 #include<stdio.h>
 #include<string.h>
 void hello(char str[]){
int length=strlen(str);
for(int i=0;i<length;i++){
char ch=str[i];

     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c ", ch);
        }
}

 }
 int main(){
    char str[50];
    printf("Enter a string:=");
    gets(str);
    hello(str);
 }
 