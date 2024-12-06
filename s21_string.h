#ifndef S21_STRING_H
#define S21_STRING_H

#define s21_NULL (void*) 0

typedef unsigned long long s21_size_t;

s21_size_t s21_strlen(const char* str);
char* s21_strncat(char* dest, const char* str, s21_size_t n);
int s21_strncmp(const char* str1, const char* str2, s21_size_t n);
void* s21_memset(void *str, int c, s21_size_t n);
void* s21_memcpy(void *dest, const void *src, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
char* s21_strchr(const char *str, int c);

#endif