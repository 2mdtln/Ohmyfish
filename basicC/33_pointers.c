#include <stdio.h>

int main() {
  int num = 2;
  int *pNum = &num;

  printf("%d bytes\n", sizeof(num));
  printf("%p\n", &num);
  printf("%d\n", *pNum);

  return 0;
}
