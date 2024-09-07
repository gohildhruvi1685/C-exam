#include <stdio.h>

int divisibleby3and5(int num) {
    return (num % 3 == 0) && (num % 5 == 0);
}

main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (divisibleby3and5(number)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }
    
}
