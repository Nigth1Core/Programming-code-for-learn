#include <stdio.h>
#include <math.h>

int main() {
    double x, epsilon = 1e-6, sum = 0.5, term;
    int n = 1;
    
    printf("Введите x: ");
    scanf("%lf", &x);
    
    // Рекуррентные зависимости
    do {
        double factorial = 1;
        for (int i = 1; i <= 2*n; i++) factorial *= i;
        
        term = pow(-1, n) * pow(2, 2*n - 1) * pow(x, 2*n) / factorial;
        sum += term;
        n++;
    } while (fabs(term) >= epsilon);
    
    double y = pow(cos(x), 2);
    printf("Сумма ряда: %.6lf\n", sum);
    printf("cos²(x):    %.6lf\n", y);
    printf("Разность:   %.6lf\n", fabs(sum - y));
    
    return 0;
}
