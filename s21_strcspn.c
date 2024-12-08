#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t result_index = 0;
  s21_size_t str1_len = s21_strlen(str1);
  s21_size_t str2_len = s21_strlen(str2);

  for (s21_size_t i = 0; i < str1_len; i++) {
    int detected = 0;

    for (s21_size_t j = 0; j < str2_len; j++) {
      if (str1[i] == str2[j]) {
        detected = 1;
        break;
      }
    }

    if (detected == 0) {
      result_index++;
    } else {
      break;
    }
  }

  return result_index;
}