#include <stdio.h>
#include <string.h>

int main() {
  char ans[25];

  printf("How much money you got? ");
  fgets(ans, 25, stdin);
  ans[strlen(ans) - 1] = '\0';
  if (strcmp(ans, "a lot") != 0) return 0;

  printf("How many problems you got? ");
  fgets(ans, 25, stdin);
  ans[strlen(ans) - 1] = '\0';
  if (strcmp(ans, "a lot") != 0) return 0;

  printf("How many people done doubted you? ");
  fgets(ans, 25, stdin);
  ans[strlen(ans) - 1] = '\0';
  if (strcmp(ans, "a lot") != 0) return 0;

  printf("Left you out to rot? ");
  fgets(ans, 25, stdin);
  ans[strlen(ans) - 1] = '\0';
  if (strcmp(ans, "a lot") != 0) return 0;

  return 0;
}
