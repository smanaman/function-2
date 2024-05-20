#include <stdio.h>

int count(int a) {
    if (a % 2 == 0) {
      printf(" your number is even");
    } else {
      printf(" your number is odd");
    }
    return a;
}

int main() {
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("%s\n", count(a));
    
    return 0;
}
