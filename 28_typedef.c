#include <stdio.h>

typedef char str[10];
int main() {
  str str1 = "mam";
  str str2 = "mem";
  str str3 = "mom";

  printf("%s, ", str1);
  printf("%s, ", str2);
  printf("%s\n", str3);

  return 0;
}
