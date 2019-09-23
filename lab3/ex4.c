/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int A[3][3];    // matrix A
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum

  // add your code below
  int r;
  printf("Please enter 9 values for matrix A:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &r);
      A[i][j] = r;
    }
  }

  printf("Please enter 9 values for matrix B:\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &r);
      B[i][j] = r;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
  printf("C = B + A =\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%*d", 10, C[i][j]);
    }
    printf("\n");
  }
}
