#include <stdio.h>

int main() {
  int a = 10;
  int b = 3;
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("\n");

  int addition = a + b, subtraction = a - b, multiplication = a * b,
      modulus = a % b;
  float division = a / (float)b;

  printf("addition: %d\n", addition);
  printf("subtraction: %d\n", subtraction);
  printf("multiplication: %d\n", multiplication);
  printf("division: %f\n", division);

  printf("modulus: %d\n", modulus);
  if (a % 2 == 0) {
    printf("a is even and ");
  } else {
    printf("a is odd and ");
  }
  if (b % 2 == 0) {
    printf("b is even\n");
  } else {
    printf("b is odd\n");
  }

  a++;
  printf("increment: %d\n", a);

  a--;
  a--;
  printf("decrement: %d\n", a);

  // a+=1;
  // a-=1;
  // a*=1;
  // a/=1;
  // a%=1;

  return 0;
}
