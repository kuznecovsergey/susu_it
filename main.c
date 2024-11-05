#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int max = 0;

    printf("Введите число a: ");
    scanf("%d", &a);
    printf("Введите число b: ");
    scanf("%d", &b);

    max = (a > b) ? a : b;

    printf("%d", max);

    return 0;
}
