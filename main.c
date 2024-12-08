#include <stdio.h>
#include <string.h>

#include "s21_string.h"

int main() {
  char str[30] = "|||helloworld|||";

  printf("%s\n", (char*) s21_trim(str, "|"));

  return 0;
}