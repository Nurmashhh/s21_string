#include "s21_string.h"

void* s21_insert(const char *src, const char *str, s21_size_t start_index) {
  char* result = s21_NULL;
  s21_size_t src_len = s21_strlen(src);
  s21_size_t str_len = s21_strlen(str);
  s21_size_t result_len = src_len + str_len + 1;

  if (src != s21_NULL && str != s21_NULL) {
    if (start_index <= src_len) {
      result = malloc(result_len * sizeof(char));

      s21_strncpy(result, src, start_index);
      s21_strncpy(result + start_index, str, str_len);
      s21_strncpy(result + start_index + str_len, src + start_index, src_len - start_index);
      
      result[result_len - 1] = '\0';
    }
  }

  return (void*) result;
}