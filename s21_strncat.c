#include "s21_string.h"

char* s21_strncat(char* dest, const char* str, s21_size_t n) {
  char* result = s21_NULL;

  for (s21_size_t i = s21_strlen(dest); i < n; i++) {
    dest[i] = str[i];
  }
  result = dest;

  return result;
}