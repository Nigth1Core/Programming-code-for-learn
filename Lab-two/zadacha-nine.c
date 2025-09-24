#include <stdio.h>

int main() {
    int a;
    
    printf("Введите a: ");
    scanf("%d", &a);
    
    int numerator = a*a*a*a + 12*a*a - 5;
    int denominator = a*a*a + 11*a;
    
    printf("Простые делители дроби (%d/%d):\n", numerator, denominator);
    
    // Цикл в цикле
    for (int p = 2; p <= numerator && p <= denominator; p++) {
        int isPrime = 1;
        
        // Вложенный цикл для проверки простоты
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime && numerator % p == 0 && denominator % p == 0) {
            printf("%d ", p);
        }
    }
    printf("\n");
    
    return 0;
}
