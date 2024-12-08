#include "s21_string.h"

char* s21_strpbrk(const char *str1, const char *str2) {
  s21_size_t str1_size = s21_strlen(str1);
  s21_size_t str2_size = s21_strlen(str2);
  char* result = s21_NULL;

  if (str1 != s21_NULL && str2 != s21_NULL) {
    for (s21_size_t i = 0; i < str1_size; i++) {
      for (s21_size_t j = 0; j < str2_size; j++) {
        if (str1[i] == str2[j]) {
          result = (char*) &str1[i];
          return result;
        }
      }
    }
  }

  return result;
}