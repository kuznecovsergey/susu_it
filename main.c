#include <stdio.h>

// Алгоритм расчета
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;

    printf("Введите число a: ");
    scanf("%d", &a);
    printf("Введите число b: ");
    scanf("%d", &b);
    printf("Введите число с: ");
    scanf("%d", &c);
    
    max = (a > b)   ? a   : b;
    max = (max > c) ? max : c;
    
    printf("Максимальное найденное число: %d", max);

    return 0;
}