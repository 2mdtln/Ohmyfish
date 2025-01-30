#include <stdio.h>

int main() {
  int num;
  printf("num= ");
  scanf("%d", &num);
  if (num == 0) {
    printf("got 0\n");
  } else if (num % 2 == 0) {
    printf("num is even\n");
  } else {
    printf("num is odd\n");
  }

  return 0;
}
