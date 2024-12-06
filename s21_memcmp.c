#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  char* new_str1 = (char*) str1;
  char* new_str2 = (char*) str2;
  int compare = 0;

  for (s21_size_t i = 0; i < n && compare == 0; i++) {
    compare = new_str1[i] - new_str2[i];
  }

  return compare;
}