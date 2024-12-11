#include <stdio.h>
#include <string.h>
#include <check.h>

#include "s21_string.h"

int main(void)
{
  char str[20] = "Hello ";
  char str2[20] = "World!";
  printf("%s\n",s21_strncat(str, str2, 5));
  strncat(str, str2, 5);
  printf("%s\n", str);
}