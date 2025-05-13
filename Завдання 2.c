#include <stdio.h>

int main() {
    float r, a, b;

    printf("Радіус кола: ");
    scanf("%f", &r);

    printf("Сторони прямокутника (a b): ");
    scanf("%f %f", &a, &b);

    if (r <= 0 || a <= 0 || b <= 0) {
        printf("Помилка: всі значення повинні бути додатними!\n");
    } else {
        if (a * b <= 3.14159 * r * r)
            printf("Прямокутник поміститься у коло.\n");
        else
            printf("Прямокутник НЕ поміститься у коло.\n");
    }

    return 0;
}

