#include <stdio.h>

int main() {
  // & - AND
  // | - OR
  // ^ - XOR
  // ~ - NOT
  // << - left shift
  // >> - right shift

  int x = 6;
  int y = 12;
  int z = 0;

  z = x & y;
  printf("x & y = %d\n", z);

  z = x | y;
  printf("x | y = %d\n", z);

  z = x ^ y;
  printf("x ^ y = %d\n", z);

  z = ~x;
  printf("~x = %d\n", z);

  z = x << 1;
  printf("x << 1 = %d\n", z);

  z = x >> 1;
  printf("x >> 1 = %d\n", z);
  return 0;
}
