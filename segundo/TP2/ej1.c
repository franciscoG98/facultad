#include <stdio.h>
#include <stdlib.h>

void generateMatrix(int matrix[3][3]) {
  for (int i = 0; i < 3; i++) {
    printf("Enter the elements for row %d \n", i + 1);

    for (int j = 0; j < 3; j++) {
      printf("Enter element %d: ", j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
}

void sumMatrix(int matrix1[3][3], int matrix2[3][3], int matrixResult[3][3]) {

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrixResult[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

}

int main() {
  int matrix1[3][3];
  int matrix2[3][3];
  int matrixResult[3][3];

  printf("Enter 1° Matrix:\n");
  generateMatrix(matrix1);
  printf("\n\n Enter 2° Matrix:\n");
  generateMatrix(matrix2);

  sumMatrix(matrix1, matrix2, matrixResult);

  printf("\nMatrix 1:\n\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("\nMatrix 2:\n\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix2[i][j]);
    }
    printf("\n");
  }

  printf("\nResult\nMatrix 1 + Matrix 2 =\n\n");
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%d ", matrixResult[i][j]);
      }
    printf("\n");
  }

  return 0;

}
