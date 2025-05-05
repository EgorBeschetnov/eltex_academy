#include <stdio.h>

int main(){
    int num;
    unsigned char new_byte;
    printf("Введите целое положительное число: ");
    scanf("%d", &num);
    printf("Введите новое значение для третьего байта (0-255): ");
    scanf("%hhu", &new_byte);
    printf("Исходное число: %d (в hex: 0x%08X)\n", num, num);
    num = (num & 0xFF00FFFF) | (new_byte << 16);
    printf("Изменённое число: %d (в hex: 0x%08X)\n", num, num);

    return 0;
}
