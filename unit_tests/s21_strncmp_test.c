#include <check.h>

#include "../s21_string.h"

START_TEST(test_add) {
  char test_str[20] = "Hello World";
  char test_str2[20] = "Hello World";
  ck_assert_int_eq(s21_strncmp(test_str, test_str2, 5), strncmp(test_str, test_str2, 5));
}

END_TEST

Suite* string_suite(void) {
  Suite* suite;
  TCase* tcase_core;

  suite = suite_create("s21_strncmp");
  tcase_core = tcase_create("core");

  tcase_add_test(tcase_core, test_add);
  suite_add_tcase(suite, tcase_core);

  return suite;
}

int main() {
  int number_failed;
  Suite* suite;
  SRunner* suite_runner;

  suite = string_suite();
  suite_runner = srunner_create(suite);

  srunner_run_all(suite_runner, CK_NORMAL);
  number_failed = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  return (number_failed == 0 ? 0 : 1);
}

