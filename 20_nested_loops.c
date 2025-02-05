#include <stdio.h>

// Nested loops are loops inside loops

int main() {
  int colomns, rows;
  printf("colomns: ");
  scanf("%d", &colomns);
  printf("rows: ");
  scanf("%d", &rows);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < colomns; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
