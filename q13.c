#include <stdio.h>

int count(int a) {
    if (a % 2 == 0) {
        return "The number is even.";
    } else {
        return "The number is odd.";
    }
}

int main() {
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("%s\n", count(a));
    
    return 0;
}
