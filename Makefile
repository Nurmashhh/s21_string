CC = gcc 
FLAGS = -Wall -Werror -Wextra --std=c11 

s21_string.a:
	$(CC) $(FLAGS) -c *.c
	ar rcs s21_string.a *.o
	rm *.o

test:
	@gcc unit_tests/s21_strlen_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strlen_test
	@gcc unit_tests/s21_strncat_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strncat_test
	@gcc unit_tests/s21_strncmp_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strncmp_test
	@gcc unit_tests/s21_strchr_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strchr_test
	@gcc unit_tests/s21_strncpy_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strncpy_test
	@gcc unit_tests/s21_strcspn_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strcspn_test
	@gcc unit_tests/s21_strerror_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strerror_test
	@gcc unit_tests/s21_strpbrk_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strpbrk_test
	@gcc unit_tests/s21_strrchr_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strrchr_test
	@gcc unit_tests/s21_strstr_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strstr_test
	@unit_tests/s21_strlen_test
	@unit_tests/s21_strncat_test
	@unit_tests/s21_strncmp_test
	@unit_tests/s21_strchr_test
	@unit_tests/s21_strncpy_test
	@unit_tests/s21_strcspn_test
	@unit_tests/s21_strerror_test
	@unit_tests/s21_strpbrk_test
	@unit_tests/s21_strrchr_test
	@unit_tests/s21_strstr_test

clean:
	rm -f *.o
	rm -f ./unit_tests/s21_*_test
	rm -f s21_string.a