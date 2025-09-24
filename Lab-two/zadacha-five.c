#include <stdio.h>

int main() {
    int X, Y, sum = 0, i;
    
    printf("Введите X и Y: ");
    scanf("%d %d", &X, &Y);
    
    i = X;
    while (i <= Y) {
        if (i % 2 == 0) {
            sum += i * i * i;
        }
        i++;
    }
    
    printf("Сумма кубов четных чисел в [%d, %d] = %d\n", X, Y, sum);
    return 0;
}
