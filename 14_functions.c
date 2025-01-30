#include <stdio.h>

// function prototypes
double average(int x, int y, int z);

int main() {
  printf("%0.2lf\n", average(10, 20, 42));
  return 0;
}

double average(int x, int y, int z) { return (x + y + z) / 3; }
