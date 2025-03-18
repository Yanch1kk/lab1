#include <stdio.h>
#include <math.h>

int main() {
    // Оголошення змінних для координат вершин трикутника
    double x1, y1, x2, y2, x3, y3;

    // Ввід координат від користувача
    printf("Введіть координати першої вершини (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Введіть координати другої вершини (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Введіть координати третьої вершини (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    // Обчислення довжин сторін трикутника
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    // Обчислення периметра трикутника
    double P = a + b + c;
    
    // Обчислення площі трикутника за формулою Герона
    double s = P / 2;
    double S = sqrt(s * (s - a) * (s - b) * (s - c));

    // Виведення результатів на екран
    printf("Периметр: %.2f\n", P);
    printf("Площа: %.2f\n", S);

    return 0;
}