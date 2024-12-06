#include "s21_string.h"

char* s21_strchr(const char *str, int c) {
  char* str2 = (char*) str;
  
  while (*str2 != c) {
    str2++;
  }

  return str2;
}