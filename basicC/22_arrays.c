#include <stdio.h>

int main() {
  int nums[] = {10, 33, 42, 19, 10};
  nums[3] = 44;
  printf("%d\n", nums[3]);

  printf("---------\n");

  for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    printf("%d\n", nums[i]);
  }
  return 0;
}
