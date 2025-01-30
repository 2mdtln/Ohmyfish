#include <stdio.h>
#include <string.h>

int main() {
  char inpuser[20];
  char inppass[20];
  char *admin[] = {"admin", "admin"};
  char *_2mdtln[] = {"2mdtln", "DXNODdhew9idhwe9idenEIN"};
  char *user[] = {"user", "123456789*"};
  printf("Login: ");
  scanf("%s", inpuser);
  printf("password for %s: ", &inpuser);
  scanf("%s", inppass);

  // and = &&, or = ||, not = !

  if (strcmp(inpuser, admin[0]) == 0 && strcmp(inppass, admin[1]) == 0) {
    printf("logged as admin\n");
  } else if (strcmp(inpuser, _2mdtln[0]) == 0 &&
             strcmp(inppass, _2mdtln[1]) == 0) {
    printf("hi 2mdtln\n");
  } else if (strcmp(inpuser, user[0]) == 0 && strcmp(inppass, user[1]) == 0) {
    printf("welecome user\n");
  } else {
    printf("invalid login\n");
  }
  return 0;
}
