#include <stdio.h>

int main() {
  int nums[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  nums[1][2] = 8;
  printf("%d\n", nums[1][2]);
  printf("------------------\n");

  for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    for (int n = 0; n < sizeof(nums[0]) / sizeof(nums[0][0]); n++) {
      printf("%d\t", nums[i][n]);
    }
    printf("\n");
  }

  return 0;
}
