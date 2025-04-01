#include <stdio.h>

int main() {
    int d, reversed = 0;
    
    printf("Введіть п’ятизначне число: ");
    scanf("%d", &d);
    
    while (d > 0) {
        reversed = reversed * 10 + d % 10;
        d /= 10;
    }
    
    printf("d1 = %d\n", reversed);
    
    return 0;
}
