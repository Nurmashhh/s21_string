CC = gcc 
FLAGS = -Wall -Werror -Wextra --std=c11 

s21_string.a:
	$(CC) $(FLAGS) -c *.c
	ar rcs s21_string.a *.o
	rm *.o

test:
	@gcc unit_tests/s21_strlen_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strlen_test
	@gcc unit_tests/s21_strncat_test.c -L. s21_string.a -lcheck -lpthread -lsubunit -lm -o unit_tests/s21_strncat_test
	@unit_tests/s21_strlen_test
	@unit_tests/s21_strncat_test

clean:
	rm -f *.o
	rm -f ./unit_tests/s21_*_test