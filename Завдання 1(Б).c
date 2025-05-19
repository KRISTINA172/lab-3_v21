#include <stdio.h>

int main() {
    int x, z;
    float y;

    printf("Введіть x: ");
    scanf("%d", &x);
    printf("Введіть z: ");
    scanf("%d", &z);

    if (x < 3)
        y = 3 * x + z;
    else if (x <= 10) {
        if (z == 7)
            printf("Помилка: ділення на нуль\n");
        else
            y = (2.0 * x * z) / (7 - z);
    }
    else
        y = x;

    if (!(x >= 3 && x <= 10 && z == 7))
        printf("y = %.1f\n", y);

    return 0;
}
