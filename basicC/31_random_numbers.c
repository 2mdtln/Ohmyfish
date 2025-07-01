#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));

  int randnum = (rand() % 6) + 1;
  printf("%i\n", randnum);
  return 0;
}
