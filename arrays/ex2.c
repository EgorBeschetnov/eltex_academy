#include <stdio.h>

int main(){
	int N;
	printf("Введите количество элементов массива: ");
	scanf("%d", &N);
	int arr[N];
	for(int i = 0; i < N; i++){
		arr[i] = i + 1;
	}
	printf("Изначальный массив: ");
    	for (int i = 0; i < N; i++){
        	printf("%d ", arr[i]);
    	}
    	printf("\n");	
	printf("Обратный массив: ");
    	for (int i = N - 1; i >= 0; i--){
        	printf("%d ", arr[i]);
    	}
    	printf("\n");

    return 0;
}
