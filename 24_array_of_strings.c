#include <stdio.h>
#include <string.h>

int main() {
  char dists[][10] = {"Arch", "Debian", "Mint", "kali", "Parrot", "Ubuntu"};
  strcpy(dists[3], "Kali");
  for (int i = 0; i < sizeof(dists) / sizeof(dists[0]); i++) {
    printf("%s Linux\n", dists[i]);
  }

  return 0;
}
