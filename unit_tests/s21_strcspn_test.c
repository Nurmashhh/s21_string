#include <check.h>

#include "../s21_string.h"

START_TEST(test_add) {
  char str_test[20] = "123456789";
  char str_test2[20] = "6789";

  ck_assert_int_eq(s21_strcspn(str_test, str_test2), strcspn(str_test, str_test2));
}
END_TEST

Suite* string_suite(void) {
  Suite* suite;
  TCase *tcase_core;
  
  suite = suite_create("s21_strcspn");
  tcase_core = tcase_create("Core");

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