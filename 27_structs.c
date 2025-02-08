#include <stdio.h>
#include <string.h>

struct userdata {
  char user[10];
  char pass[10];
};

int main() {
  struct userdata user1;
  struct userdata user2;

  strcpy(user1.user, "userone");
  strcpy(user1.pass, "onepass");

  strcpy(user2.user, "usertwo");
  strcpy(user2.pass, "twopass");

  printf("%s\n", user1.user);
  printf("%s\n", user1.pass);
  printf("------------------\n");
  printf("%s\n", user2.user);
  printf("%s\n", user2.pass);
}