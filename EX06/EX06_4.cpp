#include <stdio.h>

#define N 2

int main(void)
{
	int matrix[N][N], matrix2[N][N], max = 0; // *x, *y
	int row, clo, pos_x, pos_y;

	printf("Enter %d * %d matrix: ", N, N);

	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++)
			scanf("%d", &matrix[row][clo]);

	// convert matrix
	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++)
			matrix2[clo][row] = matrix[row][clo];
			
/*	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
			matrix2[clo][row] = matrix[row][clo];
			*x = matrix[row][clo];
			*y = matrix2[clo][row];
			*y = *x;
		} */

	// find MAX number
	for (row = 0; row < N; row++)
		for (clo = 0; clo < N; clo++) {
			if (matrix2[row][clo] > max) {
				max = matrix2[row][clo];
				pos_x = row;
				pos_y = clo;
			}
		}
	
	// print the converted matrix
	for (row = 0; row < N; row++) {
		for (clo = 0; clo < N; clo++)
			printf("%2d ", matrix2[row][clo]);
		printf("\n");
	}

	printf("Max nummber is: %d\n", max);
	printf("Position(row, clo): (%d, %d)\n", pos_x + 1, pos_y + 1);

	return 0;
}
