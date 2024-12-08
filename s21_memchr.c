#include "s21_string.h"

void* s21_memchr(const void *str, int c, s21_size_t n) {
  char* copy_str = (char*) str;
  char* result = s21_NULL;

  for (s21_size_t i = 0; i < n; i++) {
    if (copy_str[i] == c) {
      result = (char*) &copy_str[i];
      break;
    }
  }

  return result;
}