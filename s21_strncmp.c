#include "s21_string.h"

int s21_strncmp(const char* str1, const char* str2, s21_size_t n) {
  s21_size_t i = 0;
  while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0' && i < n) {
    str1++;
    str2++;
    i++;
  }

  return *(const unsigned char*) str1 - *(const unsigned char*) str2;
}