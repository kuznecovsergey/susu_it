#include <stdio.h>

// Алгоритм расчета
int main() {
    int aa = 0;
    int b = 0;
    int c = 0;
    int max = 0;

    printf("Введите первое a: ");
    scanf("%d", &aa);
    printf("Введите второе b: ");
    scanf("%d", &b);
    printf("Введите третье с: ");
    scanf("%d", &c);
    
    max = (aa > b)  ? aa  : b;
    max = (max > c) ? max : c;
    
    printf("Максимальное найденное число: %d", max);

    return 0;
}