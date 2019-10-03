#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];

int main() {
	int dimension;
	scanf("%d", &dimension); // get matrix size
	

	for (int i = 0; i < dimension; i++) { // input values for A
		for (int j = 0; j < dimension; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < dimension; i++) { // input values for B
		for (int j = 0; j < dimension; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < dimension; i++) { // computing values for C
		for (int j = 0; j < dimension; j++) {
			for (int k = 0; k < dimension; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	for (int i = 0; i < dimension; i++) { // print final matrix with formatting
		for (int j = 0; j < dimension; j++) {
			printf("%6d", C[i][j]);
		}
		printf("\n");
	}
}