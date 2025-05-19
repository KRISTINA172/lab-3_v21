#include <stdio.h>

int main() {
    int x, z;
    double y;

    // Введення x і z
    printf("Введіть x: ");
    scanf("%d", &x);
    printf("Введіть z: ");
    scanf("%d", &z);

    // Обчислення y 
    if (x < 3)
        y = 3 * x + z;

    if (x >= 3 && x <= 10)
        y = 2.0 * x * z / (7 - z);  // 2.0 щоб результат був дробовий

    if (x > 10)
        y = x;

    // Виведення результату
    printf("Результат: y = %.1f\n", y);

    return 0;
}
