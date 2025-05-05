#include <stdio.h>

void dec_to_bin(int a){
	if (a >= 2){
		dec_to_bin( a / 2 );
	}
	printf("%d", a % 2);
}
 
int main(){
	int a;
	a=0;
	printf("Введите целое положительное число: ");
	scanf("%d", &a);
	printf("Результат: ");
	dec_to_bin(a);
	printf("\n");
 
	return 0;
}
	
