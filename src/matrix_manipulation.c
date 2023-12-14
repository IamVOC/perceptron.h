#include <stdlib.h>


float** matrix_dot(float** first_matrix, float** second_matrix)
{
	size_t X1 = *(&first_matrix + 1) - first_matrix;
	size_t X2 = *(&second_matrix + 1) - second_matrix;
	size_t Y2 = *(&second_matrix[0] + 1) - second_matrix[0];

	float** res = (float**)malloc(X1 * sizeof(float*));
	for(int i = 0; i < X1; i++)
	{
		res[i] = (float*)calloc(Y2, sizeof(float));
		for(int j = 0; j < Y2; j++)
		{
			for(int k = 0; k < X1; k++)
			{
				res[i][j] += first_matrix[i][k] * second_matrix[k][j];
			}
		}
	}

	return res;
}

float** matrix_transposition(float** matrix)
{
	size_t X = *(&matrix + 1) - matrix;
	size_t Y = *(&matrix[0] + 1) - matrix[0];

	float** res = (float**)malloc(X * sizeof(float*));
	for(int i = 0; i < X; i++)
	{
		res[i] = (float*)calloc(Y, sizeof(float));
		for(int j = 0; j < Y; j++)
		{
			res[i][j] = matrix[j][i];
		}
	}

	return res;
}
