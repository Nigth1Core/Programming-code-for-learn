#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    printf("Введите координаты 3 точек (x1 y1 x2 y2 x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    // Вложенные условные операторы
    if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)) {
        double A = y2 - y1;
        double B = x1 - x2;
        double C = x2 * y1 - x1 * y2;
        
        if (A < 0) {
            A = -A; B = -B; C = -C;
        }
        printf("Точки лежат на прямой: %.2fx + %.2fy + %.2f = 0\n", A, B, C);
    } else {
        printf("Точки не лежат на одной прямой.\n");
        if (x1 == 0 && y1 == 0) {
            printf("Первая точка - начало координат.\n");
        } else if (x2 == 0 && y2 == 0) {
            printf("Вторая точка - начало координат.\n");
        } else if (x3 == 0 && y3 == 0) {
            printf("Третья точка - начало координат.\n");
        } else {
            printf("Ни одна точка не является началом координат.\n");
        }
    }
    return 0;
}
