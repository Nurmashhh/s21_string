#include "s21_string.h"
#include <stdio.h>

s21_size_t s21_strlen(const char* str) {
  s21_size_t result = 0;

  while (str[result] != '\0') {
    result++;
  }

  return result;
}
