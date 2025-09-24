#include <stdio.h>

int main() {
    int start = 0, end = 100;
    
    printf("Цельсий\tФаренгейт\n");
    printf("-------------------\n");
    
    // Арифметический цикл for
    for (int tc = start; tc <= end; tc += 10) {
        double tf = (9.0 / 5) * tc + 32;
        printf("%d\t%.2f\n", tc, tf);
    }
    return 0;
}
