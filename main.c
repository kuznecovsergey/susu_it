#include <stdio.h>

// Алгоритм расчета
int main() {
    int aa = 0;
    int b = 0;
    int c = 0;
    int max = 0;

    printf("Введите ваше первое число a: ");
    scanf("%d", &aa);
    printf("Введите ваше второе число b: ");
    scanf("%d", &b);
    printf("Введите ваше третье число с: ");

    scanf("%d", &c);
    
    max = (aa > b)  ? aa  : b;
    max = (max > c) ? max : c;
    
    printf("Максимальное найденное число: %d", max);

    return 0;
}