#include "s21_string.h"
#include <stdio.h>

void* s21_trim(const char *src, const char *trim_chars) {
  s21_size_t start_index = 0;
  s21_size_t end_index = s21_strlen(src) - 1;

  char* result = s21_NULL;

  while (s21_strchr(trim_chars, src[start_index]) != s21_NULL) {
    start_index++;
  }

  while (s21_strchr(trim_chars, src[end_index]) != s21_NULL) {
    end_index--;
  }

  result = (char*) malloc(sizeof(src));

  s21_size_t j = 0;
  for (s21_size_t i = start_index; i < end_index + 1; i++) {
    result[j++] = src[i];
  }

  return (void*) result;
}