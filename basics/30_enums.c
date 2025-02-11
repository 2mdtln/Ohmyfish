#include <stdio.h>

enum Day { Pzt = 1, Sal = 2, Car = 3, Per = 4, Cum = 5, Cmt = 6, Pzr = 7 };

int main() {
  enum Day today = Cmt;
  printf("%i\n", today);
  return 0;
}
