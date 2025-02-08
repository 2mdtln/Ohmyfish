#include <stdio.h>

struct usr {
  char first[10];
  char last[10];
};

int main() {
  struct usr usr1 = {"mam", "thr"};
  struct usr usr2 = {"mom", "thrr"};
  struct usr usrs[] = {usr1, usr2};

  printf("%s ", usrs[0].first);
  printf("%s\n", usrs[0].last);
  printf("------------------\n");
  printf("%s ", usrs[1].first);
  printf("%s\n", usrs[1].last);
  return 0;
}
