#include <stdio.h>

int main() {
    int aa = 0;
    int b = 0;
    int c = 0;
    int max = 0;

    printf("Введите число a: ");
    scanf("%d", &aa);
    printf("Введите число b: ");
    scanf("%d", &b);
    printf("Введите число с: ");
    scanf("%d", &c);
    
    max = (aa > b)  ? aa  : b;
    max = (max > c) ? max : c;
    
    printf("Максимальное найденное число: %d", max);

    return 0;
}