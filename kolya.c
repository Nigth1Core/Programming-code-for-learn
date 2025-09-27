#include <stdio.h>
#include <math.h>

int main() {
    double a, F;
    
    printf("Введите значение a: ");
    scanf("%lf", &a);
    
    if (a <= 0) {
        printf("Ошибка: a должно быть > 0\n");
        return 1;
    }
    
    // Вычисление функции F
    double numerator = a*a + sqrt(a);
    double sin2_term = pow(sin(a), 2) / (2 * a);  // Явно: 2 * a
    double denominator = 1 + sin2_term;
    double cos_arg = numerator / denominator;
    
    if (cos(cos_arg) < 0) {
        printf("Ошибка: отрицательное значение под корнем (cos(%.6lf) = %.6lf)\n", cos_arg, cos(cos_arg));
        return 1;
    }
    
    // Проверка деления на ноль в логарифме
    if (log(a) == 0) {
        printf("Ошибка: деление на ноль (ln(a) = 0)\n");
        return 1;
    }
    
    F = sqrt(cos(cos_arg)) + 2.5 / (2 * log(a));
    
    printf("F(%.2lf) = %.6lf\n", a, F);
    
    return 0;
}
