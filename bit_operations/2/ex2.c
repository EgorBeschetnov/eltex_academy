#include <stdio.h>
#include <stdint.h>

void print_result(int8_t num){
    int bits = 8;
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);   
    }
    printf("\n");
}

int main(){
    int number;
    printf("Введите целое отрицательное число (-128 до -1): ");
    scanf("%d", &number);
    if (number >= 0){
        printf("Ошибка: число должно быть отрицательным!\n");
        return 1;
    }
    int8_t num_8bit = (int8_t)number;
    printf("Десятичное число: %d\n", num_8bit);
    printf("Двоичное представление (доп. код): ");
    print_result(num_8bit);
    
    return 0;
}
