#include "s21_string.h"
#include <string.h>

char* s21_strstr(const char *haystack, const char *needle) {
  char* result = s21_NULL;

  s21_size_t haystack_len = s21_strlen(haystack);
  s21_size_t needle_len = s21_strlen(needle);

  for (s21_size_t i = 0; i < haystack_len - needle_len; i++) { 
    if (strncmp(&haystack[i], needle, needle_len) == 0) {
      result = (char*) &haystack[i];
      break;
    }
  } 

  return result;
}