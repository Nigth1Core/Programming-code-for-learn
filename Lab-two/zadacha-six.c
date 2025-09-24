#include <stdio.h>

int main() {
    int n, digit, isBinary = 1, temp;
    
    printf("Введите число N: ");
    scanf("%d", &n);
    
    temp = n;
    do {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            isBinary = 0;
            break;
        }
        temp /= 10;
    } while (temp > 0);
    
    if (isBinary) 
        printf("%d - двоичное число\n", n);
    else 
        printf("%d - не двоичное число\n", n);
    
    return 0;
}
