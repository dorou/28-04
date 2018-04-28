#include <stdio.h>

int bite(int san, int bit);
int main(void)
{
    int san, bit;
    printf("Введите число: ");
    scanf("%i", &san);
    printf("введите позицию: ");
    scanf("%i", &bit);
    printf("Значение ненулевого бита : %d\r\n", bite(san, bit));
    return 0;
}
int bite(int san, int bit)
{
    int mask = 1;
    mask <<= bit;
    return san & mask;
}