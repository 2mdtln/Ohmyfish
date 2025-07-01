#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "2mdtln";
  char str2[20] = "mami";
  // https://stackoverflow.com/questions/71414183/encountering-compiling-issues-with-implicit-declaration-using-the-strlwr-functio
  // strlwr(str1);            // lowercase
  // strupr(str1);            //  uppercase
  strcat(str1, str2);      // append str2 to str1
  strncat(str1, str2, 2);  // append 2 characters of str2 to str1
  strcpy(str1, str2);      // copy str2 to str1
  strncpy(str1, str2, 2);  // copy 2 characters of str2 to str1

  // strset(str1, 'a');      // set all characters of str1 to 'a'
  // strnset(str1, 'a', 2);  // set 2 characters of str1 to 'a'
  // strrev(str1);           // reverse str1

  printf("%s\n", str1);  // print str1
  printf("%s\n", str2);  // print str2

  int res = strlen(str1);             // get the length of str1
  int res2 = strcmp(str1, str2);      // compare str1 and str2
  int res3 = strncmp(str1, str2, 2);  // compare 2 characters of str1 and str2
  // int res4 = strcmpi(str1, str2);     // compare str1 and str2 ignoring case
  // int res5 = strnicmp(str1, str2, 2);  // compare 2 characters of str1 and
  // str2 ignoring case

  printf("%d\n", res);
  printf("%d\n", res2);
  printf("%d\n", res3);
  // printf("%d\n", res4);
  // printf("%d\n", res5);

  return 0;
}