#include "s21_string.h"
#include <stdlib.h>

void* s21_memset(void *str, int c, s21_size_t n) {
  s21_size_t size = sizeof(str) + (sizeof(c) * n);
  char* new_dest = (char*) str;
  char ch = (char) c;
  char* buffer = malloc(size);

  for (s21_size_t i = 0; i < n; i++) {
    buffer[i] = ch;
  }
  for (s21_size_t i = n; i < size; i++) {
    buffer[i] = new_dest[i];
  }
  for (s21_size_t i = 0; i < size; i++) {
    new_dest[i] = buffer[i];
  }
  return new_dest;
}