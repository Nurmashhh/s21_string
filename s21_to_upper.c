#include "s21_string.h"

void* s21_to_upper(const char *str) {
  char* str_copy = s21_NULL;

  if (str != s21_NULL) {
    str_copy = (char*) malloc((s21_strlen(str) + 1) * sizeof(char));
    s21_strncpy(str_copy, str, s21_strlen(str) + 1);
    
    if (str_copy) {
      for (s21_size_t i = 0; i < s21_strlen(str); i++) {
        str_copy[i] = str[i] >= 'a' && str[i] <= 'z' ? str[i] - ('a' - 'A') : str[i];
      }
    }
  }

  return str_copy;
}