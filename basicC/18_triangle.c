// first time no ai no vid :)

/* 10min
#include <stdio.h>

int main() {
  int b = 5;
  char st[] = "*";
  for (int f = b; f > 0; f--) {
    for (int i = 0; i < f; i++) {
      printf("%s", st);
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}

*****
****
***
**
*

*/

// 30 min :)
#include <stdio.h>

int main() {
  int b;
  char st[10];
  while (1) {
    printf("base: ");
    scanf("%i", &b);
    printf("star: ");
    scanf("%s", &st);

    for (int f = -1; f <= b; f += 2) {
      for (int n = b; n > f + 1; n -= 2) {
        printf(" ");
      }
      for (int i = 0; i < f; i++) {
        printf("%s", st);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
