#include <stdio.h>

int main() {
  int point;
  printf("point(0-100)= ");
  scanf("%d", &point);

  switch (point) {
    case 100:
      printf("OWHAA\n");
      break;
    case 0:
      printf("OWHAAH\n");
      break;
    default:
      if (point > 90) {
        printf("Great\n");
      } else if (point > 75) {
        printf("nice\n");
      } else if (point > 49) {
        printf("eeeh\n");
      } else if (point > 20) {
        printf("naaaa\n");
      } else {
        printf("LOL\n");
      }

      break;
  }

  return 0;
}