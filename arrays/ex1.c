#include <stdio.h>

int main(){
	int N;
	printf("Введите размерность матрицы: ");
	scanf("%d", &N);
	int matrix[N][N];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			matrix[i][j] = i * N + j + 1;
		}
	}
	printf("Квадратная матрица %d x %d:\n", N, N);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
