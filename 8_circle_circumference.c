#include <stdio.h>

int main() {
  const double PI = 3.14159;
  double r;

  printf("r= ");
  scanf("%lf", &r);

  double cir = 2 * PI * r;
  double air = PI * r * r;
  printf("\ncir: %lf\n", cir);
  printf("air: %lf\n", air);

  return 0;
}
