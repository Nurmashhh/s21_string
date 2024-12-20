#include "s21_string.h"

char* s21_strchr(const char *str, int c) {
  s21_size_t str_len = s21_strlen(str);
  char* result = s21_NULL;

  for (s21_size_t i = 0; i < str_len; i++) {
    if (str[i] == c) {
      result = (char*) &str[i];
      break;
    }
  }

  return result;
}