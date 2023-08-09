CC = gcc
CFLAGS = -c -g
PROFILE_FLAGS = -fprofile-arcs -ftest-coverage
TST_LIBS = -lcheck -lm -lpthread
COV_LIBS = -lgcov -coverage
SRC_DIR= src
TST_DIR= tests
SRC_FILES = s21_string.c
TST_FILES = tests.c
GCOV = gcovr 
GCONV_FLAGS = -r . --html --html-details 

all: clean s21_string.a

s21_string.o: s21_string.c 
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) s21_string.c

tests.o: tests.c
	$(CC) $(CFLAGS) tests.c 

check_s21_string_tests: s21_string.o tests.o
	$(CC) s21_string.o tests.o $(TST_LIBS) $(COV_LIBS) -o check_s21_string_tests -lrt -lsubunit

test: check_s21_string_tests
	./check_s21_string_tests

check:
	python3 cpplint.py *.c s21_string.h
	cppcheck *.h s21_string.c

gcov_report: test
	$(GCOV) $(GCONV_FLAGS) -o coverage_report.html
	google-chrome coverage_report.html

s21_string.a: 
	$(CC) $(CFLAGS) s21_string.c
	ar -rcs s21_string.a s21_string.o
	ranlib s21_string.a
	rm *.o

clean:
	rm -f *.o *.html *.gcda *.gcno *.a check_s21_string_tests