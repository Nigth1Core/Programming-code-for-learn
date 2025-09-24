#include <stdio.h>

int main() {
    int m, n;
    double result;
    
    printf("Введите m и n: ");
    scanf("%d %d", &m, &n);
    
    result = (m >= 0) ? (double)(n - 4) / (m + n) :
             (m < 0 && n < 0) ? (double)(m + n) / (m * n) :
             m + 5;
    
    printf("f(%d, %d) = %.2lf\n", m, n, result);
    return 0;
}
