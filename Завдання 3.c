#include <stdio.h>

int main() {
    int episode;

    printf("Введіть номер серії (1-8): ");
    scanf("%d", &episode);

    switch (episode) {
        case 1:
            printf("Серія 1: \"The Long Bright Dark\" - 12 січня 2014\n");
            break;
        case 2:
            printf("Серія 2: \"Seeing Things\" - 19 січня 2014\n");
            break;
        case 3:
            printf("Серія 3: \"The Locked Room\" - 26 січня 2014\n");
            break;
        case 4:
            printf("Серія 4: \"Who Goes There\" - 9 лютого 2014\n");
            break;
        case 5:
            printf("Серія 5: \"The Secret Fate of All Life\" - 16 лютого 2014\n");
            break;
        case 6:
            printf("Серія 6: \"Haunted Houses\" - 23 лютого 2014\n");
            break;
        case 7:
            printf("Серія 7: \"After You've Gone\" - 2 березня 2014\n");
            break;
        case 8:
            printf("Серія 8: \"Form and Void\" - 9 березня 2014\n");
            break;
        default:
            printf("Невірний номер серії. Введіть число від 1 до 8.\n");
    }

    return 0;
}

