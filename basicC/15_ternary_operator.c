#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  bool boo;
  int input;
  while (true) {
    printf("boo(0-1): ");
    scanf("%d", &input);
    if (input == 0 || input == 1) {
      boo = (input != 0);
      printf("%s\n", (boo == true) ? "true" : "false");
    }
  }
  return 0;
}