#include <stdio.h>

void sort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int n = 0; n < size - i - 1; n++) {
      if (array[n] > array[n + 1])

      {
        int temp = array[n];
        array[n] = array[n + 1];
        array[n + 1] = temp;
      }
    }
  }
}
void printa(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
int main() {
  int array[] = {1, 5, 3, 2, 7, 6, 8, 4, 2};
  int size = sizeof(array) / sizeof(array[0]);

  printa(array, size);
  sort(array, size);
  printa(array, size);
}