#include <stdio.h>
#include <math.h>

int main() {
    double x, y, A;
    
    printf("Введите x и y: ");
    scanf("%lf %lf", &x, &y);
    
    // Проверка области определения
    if (x <= 0 || y <= 0) {
        printf("Ошибка: x и y должны быть положительными\n");
        return 1;
    }
    if (x/y <= 0) {
        printf("Ошибка: x/y должно быть положительным\n");
        return 1;
    }
    if (fabs(4*y) <= 1e-10) {
        printf("Ошибка: 4y не может быть равно 0\n");
        return 1;
    }
    
    A = (sin(x) * cos(y) - log10(x/y)) / pow(log(fabs(4*y)), 3) * exp(-x);
    printf("A = %.6lf\n", A);
    return 0;
}
