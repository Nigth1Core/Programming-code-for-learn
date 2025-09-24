#include <stdio.h>
#include <math.h>

int main() {
    double x, epsilon = 1e-6, sum = 0, term;
    int n = 1;
    
    printf("Введите x (0.1 ≤ x ≤ 0.8): ");
    scanf("%lf", &x);
    
    if (x < 0.1 || x > 0.8) {
        printf("x должен быть в диапазоне [0.1, 0.8]\n");
        return 1;
    }
    
    // Рекуррентные зависимости
    do {
        term = pow(x, n) * cos(n * M_PI / 3) / n;
        sum += term;
        n++;
    } while (fabs(term) >= epsilon);
    
    double y = -0.5 * log(1 - 2*x*cos(M_PI/3) + x*x);
    printf("Сумма ряда: %.6lf\n", sum);
    printf("Проверка:   %.6lf\n", y);
    printf("Разность:   %.6lf\n", fabs(sum - y));
    
    return 0;
}
