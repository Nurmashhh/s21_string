#include <stdio.h>
#include <string.h>
#include <check.h>

#include "s21_string.h"

int main(void)
{
  char str[20] = "Hello";
  char str2[20] = "llo";

  printf("%s\n", s21_strstr(str, str2));
  return 0;
}