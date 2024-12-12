#include "s21_string.h"

char* s21_strncat(char* dest, const char* str, s21_size_t n) {
  if (dest == s21_NULL || str == s21_NULL) {
    return s21_NULL;
  } 

  s21_size_t dest_len = s21_strlen(dest); 

  for (s21_size_t i = 0; str[i] != '\0' && i < n; i++) {
    dest[dest_len + i] = str[i];  
  }

  dest[dest_len + s21_strlen(str) + 1] = '\0';  

  return dest;
}