#include <stdio.h>

int dec_to_bin(int number){
	if (number >= 2){
		dec_to_bin( number / 2 );
	}
	printf("%d", number % 2);
}

int counter(unsigned int num){
	int count = 0;
    	while (num > 0){
    		if (num & 1){  
            	count++;
        	}
        num >>= 1;      
    	}
    return count;
}

int main(){
    unsigned int number;
    printf("Введите положительное целое число: ");
    scanf("%u", &number);
    printf("Введите положительное целое число: ");
    dec_to_bin(number);
    int res = counter(number);
    printf("\nКоличество единиц в двоичном представлении: %d\n", res);
    
    return 0;
}
