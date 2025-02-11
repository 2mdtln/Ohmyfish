#include <math.h>
#include <stdio.h>

int main() {
  double A;
  double B;
  double C;
  printf("A= ");
  scanf("%lf", &A);

  printf("B= ");
  scanf("%lf", &B);

  C = sqrt(A * A + B * B);
  printf("C= %lf\n", C);

  return 0;
}
