#include <math.h>
#include <stdio.h>

int main() {
  double A = sqrt(121);
  double B = pow(3, 2);
  printf("A: %lf\n", A);
  printf("B: %lf\n", B);

  int C = round(3.533);
  int D = ceil(3.22);
  int E = floor(3.99);
  printf("C: %d\n", C);
  printf("D: %d\n", D);
  printf("E: %d\n", E);

  double F = fabs(-100);
  double G = log(3);
  double H = sin(90);
  double I = cos(90);
  double J = tan(90);
  printf("F: %lf\n", F);
  printf("G: %lf\n", G);
  printf("H: %lf\n", H);
  printf("I: %lf\n", I);
  printf("J: %lf\n", J);

  return 0;
}