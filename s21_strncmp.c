#include "s21_string.h"

int s21_strncmp(const char* str1, const char* str2, s21_size_t n) {
  if (n == 0) return 0;

  for (s21_size_t i = 0; i < n; i++) {
    if (str1[i] == '\0' || str2[i] == '\0') {
      return *(const unsigned char*) str1 - *(const unsigned char*) str2;
    }

    if (str1[i] != str2[i]) {
      return *(const unsigned char*) str1 - *(const unsigned char*) str2;
    }
  }

  return 0;
}