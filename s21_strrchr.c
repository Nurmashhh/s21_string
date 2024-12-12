#include "s21_string.h"

char* s21_strrchr(const char *str, int c) {
  char* result = s21_NULL;
  if (str != 0) {
    s21_size_t str_len = s21_strlen(str);

    for (s21_size_t i = str_len - 1; i > 0; i--) {
      if (str[i] == c) {
        result = (char*) &str[i];
        break;
      }
    }
  }

  return result;
}