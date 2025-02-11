#include <stdio.h>

int main() {
  for (int i = 38; i < 100; i++) {
    if (i == 42) {
      continue;
    }
    if (i == 45) {
      break;
    }

    printf("%d\n", i);
  }
  return 0;
}
