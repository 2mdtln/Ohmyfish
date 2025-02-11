#include <stdio.h>

int main() {
  int num = 0;
  int sum = 0;
  // while loop is a loop that runs until the condition is false.
  // do while loop is a loop that runs at least once and THEN checks the
  // condition.

  while (1) {
    printf("give num to sum: ");
    scanf("%d", &num);
    sum += num;
    printf("%d\n", sum);
  }

  return 0;
}
