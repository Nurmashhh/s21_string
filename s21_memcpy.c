#include "s21_string.h"
#include <stdlib.h>

void* s21_memcpy(void *dest, const void *src, s21_size_t n) {
  s21_size_t dest_size = sizeof(dest);
  char* new_dest = (char*) dest;
  char* new_src = (char*) src;

  if (dest_size >= n) {
    for (s21_size_t i = 0; i < n; i++) {
      new_dest[i] = new_src[i];
    }
  }

  return new_dest;
}