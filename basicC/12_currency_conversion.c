#include <stdio.h>

int main() {
  float x = 35.7;
  int inp1;
  double inp2;

  printf("[1]TRY to USD\n");
  printf("[2]USD to TRY\n");
  printf("[1-2]: ");
  scanf("%i", &inp1);
  switch (inp1) {
    case 1:
      printf("TRY: ");
      scanf("%lf", &inp2);
      printf("%0.2lf TRY = ", inp2);
      printf("%0.2lf USD\n", inp2 / x);
      break;
    case 2:
      printf("USD: ");
      scanf("%lf", &inp2);
      printf("%0.2lf USD = ", inp2);
      printf("%0.2lf TRY\n", inp2 * x);
      break;
    default:
      break;
  }

  return 0;
}
