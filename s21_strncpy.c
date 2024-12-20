#include "s21_string.h"

char* s21_strncpy(char *dest, const char *src, s21_size_t n) {
  s21_size_t dest_size = sizeof(dest);

  if (dest_size >= n) {
    for (s21_size_t i = 0; i < n; i++) {
      dest[i] = src[i];
    }
  }

  return dest;
}