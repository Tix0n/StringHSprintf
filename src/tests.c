#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <check.h>
#include "s21_string.h"
#define BUFF_SIZE 1000

// memchr
START_TEST(memchr_1) {
    //  line 8
    char str1[] = "abc";
    int c = 'a';
    size_t n = 3;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_2) {
    //  line 14
    char str1[] = "abc";
    int c = 'b';
    size_t n = 3;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    }
    END_TEST

    START_TEST(memchr_3) {
    //  line 19
    char str1[] = "abc";
    int c = 'c';
    size_t n = 3;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_4) {
    //  line 25
    char str1[] = "abc";
    int c = 'd';
    size_t n = 2;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_5) {
    //  line 31
    char str1[] = "abc";
    int c = 'a';
    size_t n = 2;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_6) {
    //  line 37
    char str1[] = "abc";
    int c = 'b';
    size_t n = 2;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_7) {
    //  line 43
    char str1[] = "abc";
    int c = 'c';
    size_t n = 2;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_8) {
    //  line 49
    char str1[] = "abc";
    int c = 'a';
    size_t n = 1;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_9) {
    //  line 55
    char str1[] = "abc";
    int c = 'b';
    size_t n = 1;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    START_TEST(memchr_10) {
    //  line 61
    char str1[] = "abc";
    int c = 'c';
    size_t n = 1;
    ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    } END_TEST

    // START_TEST(memchr_11) {
    // //  line 67
    // char str1[] = "abc";
    // int c = 'a';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_12) {
    // //  line 73
    // char str1[] = "abc";
    // int c = 'a';
    // size_t n = 0;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_13) {
    // //  line 79
    // char str1[] = "abc";
    // int c = 'd';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_14) {
    // //  line 85
    // char str1[] = "abc";
    // int c = 'd';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_15) {
    // //  line 91
    // char str1[] = "abc";
    // int c = 'd';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_16) {
    // //  line 97
    // char str1[] = "abc";
    // int c = 'd';
    // size_t n = 1;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_17) {
    // //  line 103
    // char str1[] = "abc";
    // int c = 'd';
    // size_t n = 0;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_18) {
    // //  line 109
    // char str1[] = "abc";
    // int c = 'd';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_19) {
    // //  line 115
    // char str1[] = "";
    // int c = 'd';
    // size_t n = 0;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_20) {
    // //  line 121
    // char str1[] = "";
    // int c = '\0';
    // size_t n = 0;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_21) {
    // //  line 127
    // char str1[] = " ";
    // int c = 'd';
    // size_t n = 1;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_22) {
    // char str1[] = "abcabc";
    // int c = 'b';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_23) {
    // //  line 138
    // char str1[] = "abcabc";
    // int c = 'c';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_24) {
    // //  line 144
    // char str1[] = "abcabc";
    // int c = 'd';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_25) {
    // //  line 150
    // char str1[] = "abcabc";
    // int c = 'a';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_26) {
    // //  line 156
    // char str1[] = "abcabc";
    // int c = 'b';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_27) {
    // //  line 162
    // char str1[] = "abcabc";
    // int c = 'c';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_28) {
    // //  line 168
    // char str1[] = "abcabc";
    // int c = 'a';
    // size_t n = 1;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_29) {
    // //  line 174
    // char str1[] = "abcabc";
    // int c = 'b';
    // size_t n = 1;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_30) {
    // //  line 180
    // char str1[] = "abcabc";
    // int c = 'c';
    // size_t n = 1;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_31) {
    // //  line 186
    // char str1[] = "abcabc";
    // int c = 'a';
    // size_t n = 5;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_32) {
    // //  line 192
    // char str1[] = "abcabc";
    // int c = 'a';
    // size_t n = 0;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_33) {
    // //  line 198
    // char str1[] = "abcabc";
    // int c = 'd';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_34) {
    // //  line 204
    // char str1[] = "abcabc";
    // int c = 'd';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_35) {
    // //  line 210
    // char str1[] = "abcabc";
    // int c = 'd';
    // size_t n = 2;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_36) {
    // //  line 216
    // char str1[] = "abcabc";
    // int c = 'd';
    // size_t n = 1;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_37) {
    // //  line 222
    // char str1[] = "abcabc";
    // int c = 'd';
    // size_t n = 0;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_38) {
    // //  line 228
    // char str1[] = "abcabc";
    // int c = 'd';
    // size_t n = 0;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_39) {
    // //  line 234
    // char str1[] = "abcabc";
    // int c = 'a';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_40) {
    // //  line 240
    // char str1[] = "abc\nabc";
    // int c = 'a';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_41) {
    // //  line 246
    // char str1[] = "abc\0abc";
    // int c = 'a';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_42) {
    // //  line 252
    // char str1[] = "\0abcabc";
    // int c = 'a';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

    // START_TEST(memchr_43) {
    // //  line 258
    // char str1[] = "abcabc\0";
    // int c = 'a';
    // size_t n = 3;
    // ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
    // } END_TEST

//  memchr

//  memcmp

    START_TEST(memcmp_1) {
    //  line 264
    char str1[] = "abc";
    char str2[] = "abc";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_2) {
    //  line 270
    char str1[] = "Abc";
    char str2[] = "abc";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_3) {
    //  line 276
    char str1[] = "abc";
    char str2[] = "Abc";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_4) {
    //  line 282
    char str1[] = "abC";
    char str2[] = "abc";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_5) {
    //  line 288
    char str1[] = "abc";
    char str2[] = "abC";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_6) {
    //  line 294
    char str1[] = "ABC";
    char str2[] = "abc";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_7) {
    //  line 300
    char str1[] = "abc";
    char str2[] = "ABC";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_8) {
    //  line 306
    char str1[] = "a b c";
    char str2[] = "abc";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_9) {
    //  line 312
    char str1[] = "abc";
    char str2[] = "a b c";
    int n = 3;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    START_TEST(memcmp_10) {
    //  line 318
    char str1[] = "";
    char str2[] = "abc";
    int n = 0;
    ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
     (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
      (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    } END_TEST

    // START_TEST(memcmp_11) {
    // //  line 324
    // char str1[] = "abc";
    // char str2[] = "";
    // int n = 1;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_12) {
    // //  line 330
    // char str1[] = " ";
    // char str2[] = "abc";
    // int n = 1;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_13) {
    // //  line 336
    // char str1[] = "abc";
    // char str2[] = " ";
    // int n = 2;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_14) {
    // //  line 342
    // char str1[] = "9087";
    // char str2[] = "657";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_15) {
    // //  line 348
    // char str1[] = "";
    // char str2[] = "";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_16) {
    // //  line 354
    // char str1[] = " ";
    // char str2[] = " ";
    // int n = 2;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_17) {
    // //  line 360
    // char str1[] = "abc ";
    // char str2[] = "abc";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_18) {
    // //  line 366
    // char str1[] = "abc";
    // char str2[] = "abc ";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_19) {
    // //  line 372
    // char str1[] = " abc";
    // char str2[] = "abc";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_20) {
    // //  line 378
    // char str1[] = "abc";
    // char str2[] = " abc";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_21) {
    // //  line 384
    // char str1[] = "123";
    // char str2[] = "123";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_22) {
    // //  line 390
    // char str1[] = "123";
    // char str2[] = "321";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_23) {
    // //  line 396
    // char str1[] = "321";
    // char str2[] = "321";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_24) {
    // //  line 402
    // char str1[] = "321";
    // char str2[] = "123";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_25) {
    // //  line 408
    // char str1[] = "1234";
    // char str2[] = "123";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_26) {
    // //  line 414
    // char str1[] = "132";
    // char str2[] = "1234";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_27) {
    // //  line 420
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_28) {
    // //  line 426
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_29) {
    // //  line 432
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_30) {
    // //  line 438
    // char str1[] = "ab12";
    // char str2[] = "12ab";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_31) {
    // //  line 444
    // char str1[] = "abc";
    // char str2[] = "abc";
    // int n = 3;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_32) {
    // //  line 450
    // char str1[] = "Abc";
    // char str2[] = "abc";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_33) {
    // //  line 456
    // char str1[] = "abc";
    // char str2[] = "Abc";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_34) {
    // //  line 462
    // char str1[] = "abC";
    // char str2[] = "abc";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_35) {
    // //  line 468
    // char str1[] = "abc";
    // char str2[] = "abC";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_36) {
    // //  line 474
    // char str1[] = "ABC";
    // char str2[] = "abc";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_37) {
    // //  line 480
    // char str1[] = "abc";
    // char str2[] = "ABC";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_38) {
    // //  line 486
    // char str1[] = "a b c";
    // char str2[] = "abc";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_39) {
    // //  line 492
    // char str1[] = "abc";
    // char str2[] = "a b c";
    // int n = 4;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_40) {
    // //  line 498
    // char str1[] = "abc";
    // char str2[] = " abc";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_41) {
    // //  line 504
    // char str1[] = "123";
    // char str2[] = "123";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_42) {
    // //  line 510
    // char str1[] = "123";
    // char str2[] = "321";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_43) {
    // //  line 516
    // char str1[] = "321";
    // char str2[] = "321";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_44) {
    // //  line 522
    // char str1[] = "321";
    // char str2[] = "123";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_45) {
    // //  line 528
    // char str1[] = "1234";
    // char str2[] = "123";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_46) {
    // //  line 534
    // char str1[] = "132";
    // char str2[] = "1234";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_47) {
    // //  line 540
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_48) {
    // //  line 546
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_49) {
    // //  line 552
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

    // START_TEST(memcmp_50) {
    // //  line 558
    // char str1[] = "ab12";
    // char str2[] = "12ab";
    // int n = 0;
    // ck_assert((memcmp(str1, str2, n) > 0 && s21_memcmp(str1, str2, n) > 0) ||
    //  (memcmp(str1, str2, n) < 0 && s21_memcmp(str1, str2, n) < 0) ||
    //   (memcmp(str1, str2, n) == 0 && s21_memcmp(str1, str2, n) == 0));
    // } END_TEST

// memcmp

// memcpy

    START_TEST(memcpy_1) {
    //  line 564
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    s21_size_t n = 1;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_2) {
    //  line 571
    char str1[9] = "ab\nc";
    char str2[] = "def";
    char str3[9] = "ab\nc";
    int n = 1;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_3) {
    //  line 578
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 1;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_4) {
    //  line 585
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_5) {
    //  line 592
    char str1[9] = "abc";
    char str2[] = "de\nf";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_6) {
    //  line 599
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 4;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_7) {
    //  line 606
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 4;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_8) {
    //  line 613
    char str1[9] = "";
    char str2[] = "def";
    char str3[9] = "";
    int n = 3;
    memcpy(str1, str2, n);
    s21_memcpy(str3, str2, n);
    ck_assert_str_eq(str1, str3);
    } END_TEST

    START_TEST(memcpy_9) {
    //  line 622
    char str1[9] = "abc";
    char str2[] = "";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    START_TEST(memcpy_10) {
    //  line 629
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    } END_TEST

    // START_TEST(memcpy_11) {
    // //  line 636
    // char str1[9] = "abc";
    // char str2[] = "def";
    // char str3[9] = "abc";
    // int n = 1;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_12) {
    // //  line 643
    // char str1[9] = "ab\nc";
    // char str2[] = "def";
    // char str3[9] = "ab\nc";
    // int n = 4;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_13) {
    // //  line 650
    // char str1[9] = "ab\0c";
    // char str2[] = "def";
    // char str3[9] = "ab\0c";
    // int n = 0;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_14) {
    // //  line 657
    // char str1[9] = "abc";
    // char str2[] = "de\0f";
    // char str3[9] = "abc";
    // int n = 0;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_15) {
    // //  line 664
    // char str1[9] = "abc";
    // char str2[] = "de\nf";
    // char str3[9] = "abc";
    // int n = 0;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_16) {
    // //  line 671
    // char str1[9] = "ab\0c";
    // char str2[] = "def";
    // char str3[9] = "ab\0c";
    // int n = 4;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_17) {
    // //  line 678
    // char str1[9] = "abc";
    // char str2[] = "de\0f";
    // char str3[9] = "ab\0c";
    // int n = 3;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_18) {
    // //  line 685
    // char str1[9] = "";
    // char str2[] = "def";
    // char str3[9] = "";
    // int n = 1;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_19) {
    // //  line 692
    // char str1[9] = "";
    // char str2[] = "";
    // char str3[9] = "";
    // int n = 1;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

    // START_TEST(memcpy_20) {
    // //  line 699
    // char str1[9] = " ";
    // char str2[] = " ";
    // char str3[9] = " ";
    // int n = 0;
    // ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
    // } END_TEST

//  memcpy

//  memmove

    START_TEST(memmove_1) {
    //  line 706
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    s21_size_t n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_2) {
    //  line 713
    char str1[9] = "ab\nc";
    char str2[] = "def";
    char str3[9] = "ab\nc";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_3) {
    //  line 720
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_4) {
    //  line 727
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_5) {
    //  line 734
    char str1[9] = "abc";
    char str2[] = "de\nf";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_6) {
    //  line 741
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 4;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_7) {
    //  line 748
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 4;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_8) {
    //  line 755
    char str1[9] = "";
    char str2[] = "def";
    char str3[9] = "";
    int n = 3;
    memmove(str1, str2, n);
    s21_memmove(str3, str2, n);
    ck_assert_str_eq(str1, str3);
    } END_TEST

    START_TEST(memmove_9) {
    //  line 764
    char str1[9] = "abc";
    char str2[] = "";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_10) {
    //  line 771
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_11) {
    //  line 778
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_12) {
    //  line 785
    char str1[9] = "ab\nc";
    char str2[] = "def";
    char str3[9] = "ab\nc";
    int n = 4;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_13) {
    //  line 792
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 0;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_14) {
    //  line 799
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 0;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_15) {
    //  line 806
    char str1[9] = "abc";
    char str2[] = "de\nf";
    char str3[9] = "abc";
    int n = 3;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_16) {
    //  line 813
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 4;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_17) {
    //  line 820
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "ab\0c";
    int n = 3;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_18) {
    //  line 827
    char str1[9] = "";
    char str2[] = "def";
    char str3[9] = "";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_19) {
    //  line 834
    char str1[9] = "";
    char str2[] = "";
    char str3[9] = "";
    int n = 1;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    START_TEST(memmove_20) {
    //  line 841
    char str1[] = " ";
    char str2[] = " ";
    char str3[] = " ";
    int n = 0;
    ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    } END_TEST

    // START_TEST(memmove_21) {
    // //  line 848
    // char str1[] = "abcdefgh123";
    // char str2[] = "abcde";
    // char str3[] = "abcdefgh123";
    // int n = 4;
    // ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    // } END_TEST

    // START_TEST(memmove_22) {
    // //  line 855
    // char str1[] = "abcdefgh123";
    // char str2[] = "abcde";
    // char str3[] = "abcdefgh123";
    // int n = 1;
    // ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    // } END_TEST

    // START_TEST(memmove_23) {
    // //  line 862
    // char str1[7] = "a";
    // char str2[8] = "abctu6";
    // char str3[7] = "a";
    // int n = 4;
    // ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
    // } END_TEST

    // START_TEST(memmove_24) {
    // //  line 869
    // char str1[7] = "a";
    // char str2[8] = "abctu6";
    // char str3[7] = "a";
    // int n = 2;
    // ck_assert_str_eq(memmove(&str1[4], &str2[2], n), s21_memmove(&str3[4], &str2[2], n));
    // } END_TEST

    // START_TEST(memmove_25) {
    // //  line 876
    // unsigned char str1[15]="1234567890";
    // unsigned char str2[15]="1234567890";
    // ck_assert_str_eq(memmove(&str1[11], &str1[3], 3), s21_memmove(&str2[11], &str2[3], 3));
    // } END_TEST

    // START_TEST(memmove_26) {
    // //  line 881
    // char str1[] = "1234567890";
    // char str2[] = "1234567890";
    // ck_assert_str_eq(memmove(&str1[4], &str2[3], 3), s21_memmove(&str1[4], &str2[3], 3));
    // } END_TEST

//  memmove


//  memset

    START_TEST(memset_1) {
    //  line 886
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = '2';
    int n = 10;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_2) {
    //  line 893
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = 'a';
    int n = 10;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_3) {
    //  line 900
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = '2';
    int n = 5;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_4) {
    //  line 907
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = 'a';
    int n = 5;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_5) {
    //  line 914
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = '2';
    int n = 1;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_6) {
    //  line 921
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = 'a';
    int n = 1;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_7) {
    //  line 928
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = '2';
    int n = 0;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_8) {
    //  line 935
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = 'a';
    int n = 0;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_9) {
    //  line 942
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = '2';
    int n = 7;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_10) {
    //  line 949
    char str1[] = "abcdefghij";
    char str2[] = "abcdefghij";
    int c = 'a';
    int n = 3;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_11) {
    //  line 956
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = '2';
    int n = 10;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_12) {
    //  line 963
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = 'a';
    int n = 10;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_13) {
    //  line 970
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = '2';
    int n = 5;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_14) {
    //  line 977
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = 'a';
    int n = 5;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_15) {
    //  line 984
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = '2';
    int n = 1;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_16) {
    //  line 991
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = 'a';
    int n = 1;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_17) {
    //  line 998
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = '2';
    int n = 0;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_18) {
    //  line 1005
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = 'a';
    int n = 0;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_19) {
    //  line 1012
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = '2';
    int n = 10;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    START_TEST(memset_20) {
    //  line 1019
    char str1[] = "1234567890";
    char str2[] = "1234567890";
    int c = 'a';
    int n = 0;
    ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    } END_TEST

    // START_TEST(memset_21) {
    // //  line 1026
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = '2';
    // int n = 10;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_22) {
    // //  line 1033
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = 'a';
    // int n = 10;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_23) {
    // //  line 1040
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = '2';
    // int n = 5;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_24) {
    // //  line 1047
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = 'a';
    // int n = 5;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_25) {
    // //  line 1054
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = '2';
    // int n = 1;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_26) {
    // //  line 1061
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = 'a';
    // int n = 1;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_27) {
    // //  line 1068
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = '2';
    // int n = 0;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_28) {
    // //  line 1075
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = 'a';
    // int n = 0;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_29) {
    // //  line 1082
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = '2';
    // int n = 7;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_30) {
    // //  line 1089
    // char str1[] = "abcde67890";
    // char str2[] = "abcde67890";
    // int c = 'a';
    // int n = 7;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_31) {
    // //  line 1096
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = '2';
    // int n = 10;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_32) {
    // //  line 1103
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = 'a';
    // int n = 10;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_33) {
    // //  line 1110
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = '2';
    // int n = 5;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_34) {
    // //  line 1117
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = 'a';
    // int n = 5;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_35) {
    // //  line 1124
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = '2';
    // int n = 1;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_36) {
    // //  line 1131
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = 'a';
    // int n = 1;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_37) {
    // //  line 1138
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = '2';
    // int n = 0;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_38) {
    // //  line 1145
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = 'a';
    // int n = 0;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_39) {
    // //  line 1152
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = '2';
    // int n = 11;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_40) {
    // //  line 1159
    // char str1[] = ")(*&^UTYfghjkliuy7oi6";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6";
    // int c = 'a';
    // int n = 11;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_41) {
    // //  line 1166
    // char str1[] = "";
    // char str2[] = "";
    // int c = 'a';
    // int n = 0;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_42) {
    // //  line 1173
    // char str1[] = " ";
    // char str2[] = " ";
    // int c = 'a';
    // int n = 1;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_43) {
    // //  line 1180
    // char str1[] = ")(*&^UTYfgh\0jkliuy7oi6";
    // char str2[] = ")(*&^UTYfgh\0jkliuy7oi6";
    // int c = 'a';
    // int n = 11;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_44) {
    // //  line 1187
    // char str1[] = ")(*&^UTYfgh\njkliuy7oi6";
    // char str2[] = ")(*&^UTYfgh\njkliuy7oi6";
    // int c = 'a';
    // int n = 11;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_45) {
    // //  line 1194
    // char str1[] = ")(*&^UTYfghjkliuy7oi6\0";
    // char str2[] = ")(*&^UTYfghjkliuy7oi6\0";
    // int c = 'a';
    // int n = 11;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

    // START_TEST(memset_46) {
    // //  line 1201
    // char str1[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
    // char str2[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
    // int c = 'a';
    // int n = 11;
    // ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
    // } END_TEST

//  memset

//  strcat

    START_TEST(strcat_1) {
    //  line 1208
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_2) {
    //  line 1214
    char str1[9] = "abc\0";
    char str2[9] = "abc\0";
    char str3[] = "def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_3) {
    //  line 1220
    char str1[9] = "abc\n";
    char str2[9] = "abc\n";
    char str3[] = "def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_4) {
    //  line 1226
    char str1[9] = "ab\0c";
    char str2[9] = "ab\0c";
    char str3[] = "def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_5) {
    //  line 1232
    char str1[9] = "a\nbc";
    char str2[9] = "a\nbc";
    char str3[] = "def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_6) {
    //  line 1238
    char str1[9] = "abc ";
    char str2[9] = "abc ";
    char str3[] = "def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_7) {
    //  line 1244
    char str1[9] = " abc";
    char str2[9] = " abc";
    char str3[] = "def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_8) {
    //  line 1250
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = " def";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_9) {
    //  line 1256
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "def ";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_10) {
    //  line 1262
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "def00";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_11) {
    //  line 1268
    char str1[9] = "";
    char str2[9] = "";
    char str3[] = "12\0";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_12) {
    //  line 1274
    char str1[9] = "12\0";
    char str2[9] = "12\0";
    char str3[] = "";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_13) {
    //  line 1280
    char str1[9] = "32\1";
    char str2[9] = "32\1";
    char str3[] = "";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_14) {
    //  line 1286
    char str1[9] = "21\3c";
    char str2[9] = "21\3c";
    char str3[] = " ";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_15) {
    //  line 1292
    char str1[9] = "1\n23";
    char str2[9] = "1\n23";
    char str3[] = "321";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_16) {
    //  line 1298
    char str1[9] = "321";
    char str2[9] = "321";
    char str3[] = "123";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_17) {
    //  line 1304
    char str1[9] = " ";
    char str2[9] = " ";
    char str3[] = " ";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_18) {
    //  line 1310
    char str1[9] = "";
    char str2[9] = "";
    char str3[] = " ";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_19) {
    //  line 1316
    char str1[9] = " ";
    char str2[9] = " ";
    char str3[] = "";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

    START_TEST(strcat_20) {
    //  line 1322
    char str1[9] = "";
    char str2[9] = "";
    char str3[] = "";
    ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
    } END_TEST

//  strcat


//  strncat

    START_TEST(strncat_1) {
    //  line 1328
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "def";
    int n = 1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_2) {
    //  line 1335
    char str1[9] = "ab\nc";
    char str2[9] = "ab\nc";
    char str3[] = "def";
    int n = 1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_3) {
    //  line 1342
    char str1[9] = "ab\0c";
    char str2[9] = "ab\0c";
    char str3[] = "def";
    int n = 1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_4) {
    //  line 1349
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "de\0f";
    int n = 1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_5) {
    //  line 1356
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "de\nf";
    int n = 1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_6) {
    //  line 1363
    char str1[9] = "ab\0c";
    char str2[9] = "ab\0c";
    char str3[] = "def";
    int n = 4;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_7) {
    //  line 1370
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "de\0f";
    int n = 4;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_8) {
    //  line 1377
    char str1[9] = "";
    char str2[9] = "";
    char str3[] = "def";
    int n = 1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_9) {
    //  line 1384
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "";
    int n = 1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_10) {
    //  line 1391
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "def";
    int n = 3;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_11) {
    //  line 1398
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "def";
    int n = 3;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_12) {
    //  line 1405
    char str1[9] = "ab\nc";
    char str2[9] = "ab\nc";
    char str3[] = "def";
    int n = 3;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_13) {
    //  line 1412
    char str1[9] = "ab\0c";
    char str2[9] = "ab\0c";
    char str3[] = "def";
    int n = 0;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_14) {
    //  line 1419
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "de\0f";
    int n = 0;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_16) {
    //  line 1426
    char str1[9] = "ab\0c";
    char str2[9] = "ab\0c";
    char str3[] = "def";
    int n = -4;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_17) {
    //  line 1433
    char str1[9] = "abc";
    char str2[9] = "abc";
    char str3[] = "de\0f";
    int n = -4;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_18) {
    //  line 1440
    char str1[9] = "";
    char str2[9] = "";
    char str3[] = "def";
    int n = -1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_19) {
    //  line 1447
    char str1[9] = "";
    char str2[9] = "";
    char str3[] = "";
    int n = -1;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

    START_TEST(strncat_20) {
    //  line 1454
    char str1[9] = " ";
    char str2[9] = " ";
    char str3[] = " ";
    int n = 0;
    ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
    } END_TEST

//  strncat


//  strchr

    START_TEST(strchr_1) {
    //  line 1461
    char str1[] = "abc";
    int n = 'a';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_2) {
    //  line 1466
    char str1[] = "abc";
    int n = 'd';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_3) {
    //  line 1471
    char str1[] = "abc";
    int n = '1';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_4) {
    //  line 1476
    char str1[] = "abc";
    int n = '\\';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_5) {
    //  line 1481
    char str1[] = "";
    int n = 'a';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_6) {
    //  line 1486
    char str1[] = " ";
    int n = 'a';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_7) {
    //  line 1491
    char str1[] = " ";
    int n = ' ';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_8) {
    //  line 1496
    char str1[] = " ";
    int n = '\\';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_9) {
    //  line 1501
    char str1[] = "021";
    int n = '0';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_10) {
    //  line 1506
    char str1[] = "ab\nc";
    int n = 'a';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_11) {
    //  line 1511
    char str1[] = "ab\nc";
    int n = '\n';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_13) {
    //  line 1521
    char str1[] = "ab\0c";
    int n = 'a';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_17) {
    //  line 1541
    char str1[] = " ";
    int n = '\\';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_18) {
    //  line 1546
    char str1[] = "";
    int n = '\\';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_19) {
    //  line 1551
    char str1[] = "ab,c";
    int n = ',';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_20) {
    //  line 1556
    char str1[] = "abcdefghijklmnopqrst";
    int n = 't';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

    START_TEST(strchr_21) {
    //  line 1561
    char str1[] = "abcdtefghijktlmnopqrst";
    int n = 't';
    ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
    } END_TEST

//  strchr


//  strcmp

    START_TEST(strcmp_1) {
    char str1[] = "abc";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_2) {
    //  line 1571
    char str1[] = "Abc";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_3) {
    //  line 1576
    char str1[] = "abc";
    char str2[] = "Abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_4) {
    //  line 1581
    char str1[] = "abC";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_5) {
    //  line 1586
    char str1[] = "abc";
    char str2[] = "abC";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_6) {
    //  line 1591
    char str1[] = "ABC";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_7) {
    //  line 1596
    char str1[] = "abc";
    char str2[] = "ABC";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_8) {
    //  line 1601
    char str1[] = "a b c";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_9) {
    //  line 1606
    char str1[] = "abc";
    char str2[] = "a b c";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_10) {
    //  line 1611
    char str1[] = "";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_11) {
    //  line 1616
    char str1[] = "abc";
    char str2[] = "";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_12) {
    //  line 1621
    char str1[] = " ";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_13) {
    //  line 1626
    char str1[] = "abc";
    char str2[] = " ";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_14) {
    //  line 1631
    char str1[] = "9087";
    char str2[] = "657";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_15) {
    //  line 1636
    char str1[] = "";
    char str2[] = "";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_16) {
    //  line 1641
    char str1[] = " ";
    char str2[] = " ";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_17) {
    //  line 1646
    char str1[] = "abc ";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_18) {
    //  line 1651
    char str1[] = "abc";
    char str2[] = "abc ";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_19) {
    //  line 1656
    char str1[] = " abc";
    char str2[] = "abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strcmp_20) {
    //  line 1661
    char str1[] = "abc";
    char str2[] = " abc";
    int s21 = s21_strcmp(str1, str2);
    int s00 = strcmp(str1, str2);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    // START_TEST(strcmp_21) {
    // //  line 1666
    // char str1[] = "123";
    // char str2[] = "123";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_22) {
    // //  line 1671
    // char str1[] = "123";
    // char str2[] = "321";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_23) {
    // //  line 1676
    // char str1[] = "321";
    // char str2[] = "321";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_24) {
    // //  line 1681
    // char str1[] = "321";
    // char str2[] = "123";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_25) {
    // //  line 1686
    // char str1[] = "1234";
    // char str2[] = "123";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_26) {
    // //  line 1691
    // char str1[] = "132";
    // char str2[] = "1234";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_27) {
    // //  line 1696
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_28) {
    // //  line 1701
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_29) {
    // //  line 1706
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strcmp_30) {
    // //  line 1711
    // char str1[9] = "ab12";
    // char str2[9] = "12ab";
    // int s21 = s21_strcmp(str1, str2);
    // int s00 = strcmp(str1, str2);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

//  strcmp


//  strncmp

    START_TEST(strncmp_1) {
    //  line 1716
    char str1[] = "abc";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_2) {
    //  line 1722
    char str1[] = "Abc";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_3) {
    //  line 1728
    char str1[] = "abc";
    char str2[] = "Abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_4) {
    //  line 1734
    char str1[] = "abC";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_5) {
    //  line 1740
    char str1[] = "abc";
    char str2[] = "abC";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_6) {
    //  line 1746
    char str1[] = "ABC";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_7) {
    //  line 1752
    char str1[] = "abc";
    char str2[] = "ABC";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_8) {
    //  line 1758
    char str1[] = "a b c";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_9) {
    //  line 1764
    char str1[] = "abc";
    char str2[] = "a b c";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_10) {
    //  line 1770
    char str1[] = "";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_11) {
    //  line 1776
    char str1[] = "abc";
    char str2[] = "";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_12) {
    //  line 1782
    char str1[] = " ";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_13) {
    //  line 1788
    char str1[] = "abc";
    char str2[] = " ";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_14) {
    //  line 1794
    char str1[] = "9087";
    char str2[] = "657";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_15) {
    //  line 1800
    char str1[] = "";
    char str2[] = "";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_16) {
    //  line 1806
    char str1[] = " ";
    char str2[] = " ";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_17) {
    //  line 1812
    char str1[] = "abc ";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_18) {
    //  line 1818
    char str1[] = "abc";
    char str2[] = "abc ";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_19) {
    //  line 1824
    char str1[] = " abc";
    char str2[] = "abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    START_TEST(strncmp_20) {
    //  line 1830
    char str1[] = "abc";
    char str2[] = " abc";
    int n = 3;
    int s21 = s21_strncmp(str1, str2, n);
    int s00 = strncmp(str1, str2, n);
    if (s21 > 1) {
       s21 = 1;
    }
    if (s21 < -1) {
       s21 = -1;
    }
    if (s00 > 1) {
       s00 = 1;
    }
    if (s00 < -1) {
       s00 = -1;
    }
    ck_assert_int_eq(s21, s00);
    } END_TEST

    // START_TEST(strncmp_21) {
    // //  line 1836
    // char str1[] = "123";
    // char str2[] = "123";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_22) {
    // //  line 1842
    // char str1[] = "123";
    // char str2[] = "321";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_23) {
    // //  line 1848
    // char str1[] = "321";
    // char str2[] = "321";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_24) {
    // //  line 1854
    // char str1[] = "321";
    // char str2[] = "123";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_25) {
    // //  line 1860
    // char str1[] = "1234";
    // char str2[] = "123";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_26) {
    // //  line 1866
    // char str1[] = "132";
    // char str2[] = "1234";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_27) {
    // //  line 1872
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_28) {
    // //  line 1878
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_29) {
    // //  line 1884
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_30) {
    // //  line 1890
    // char str1[] = "ab12";
    // char str2[] = "12ab";
    // int n = 3;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_31) {
    // //  line 1896
    // char str1[] = "abc";
    // char str2[] = "abc";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_32) {
    // //  line 1902
    // char str1[] = "Abc";
    // char str2[] = "abc";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // // START_TEST(strncmp_33) {
    // // //  line 1908
    // // char str1[] = "abc";
    // // char str2[] = "Abc";
    // // int n = 10;
    // // int s21 = s21_strncmp(str1, str2, n);
    // // int s00 = strncmp(str1, str2, n);
    // // if (s21 > 1) {
    // //    s21 = 1;
    // // }
    // // if (s21 < -1) {
    // //    s21 = -1;
    // // }
    // // if (s00 > 1) {
    // //    s00 = 1;
    // // }
    // // if (s00 < -1) {
    // //    s00 = -1;
    // // }
    // // ck_assert_int_eq(s21, s00);
    // // } END_TEST

    // START_TEST(strncmp_34) {
    // //  line 1914
    // char str1[] = "abC";
    // char str2[] = "abc";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_35) {
    // //  line 1920
    // char str1[] = "abc";
    // char str2[] = "abC";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_36) {
    // //  line 1926
    // char str1[] = "ABC";
    // char str2[] = "abc";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_37) {
    // //  line 1932
    // char str1[] = "abc";
    // char str2[] = "ABC";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_38) {
    // //  line 1938
    // char str1[] = "a b c";
    // char str2[] = "abc";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_39) {
    // //  line 1944
    // char str1[] = "abc";
    // char str2[] = "a b c";
    // int n = 10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_40) {
    // //  line 1950
    // char str1[] = "";
    // char str2[] = "abc";
    // int n = -10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_41) {
    // //  line 1956
    // char str1[] = "abc";
    // char str2[] = "";
    // int n = -10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_42) {
    // //  line 1962
    // char str1[] = " ";
    // char str2[] = "abc";
    // int n = -10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_43) {
    // //  line 1968
    // char str1[] = "abc";
    // char str2[] = " ";
    // int n = -10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_44) {
    // //  line 1974
    // char str1[] = "9087";
    // char str2[] = "657";
    // int n = -10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_45) {
    // //  line 1980
    // char str1[] = "";
    // char str2[] = "";
    // int n = -10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_46) {
    // //  line 1986
    // char str1[] = " ";
    // char str2[] = " ";
    // int n = -10;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_47) {
    // //  line 1992
    // char str1[] = "abc ";
    // char str2[] = "abc";
    // int n = -1;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_48) {
    // //  line 1998
    // char str1[] = "abc";
    // char str2[] = "abc ";
    // int n = -1;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_49) {
    // //  line 2004
    // char str1[] = " abc";
    // char str2[] = "abc";
    // int n = -1;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_50) {
    // //  line 2010
    // char str1[] = "abc";
    // char str2[] = " abc";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_51) {
    // //  line 2016
    // char str1[] = "123";
    // char str2[] = "123";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_52) {
    // //  line 2022
    // char str1[] = "123";
    // char str2[] = "321";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_53) {
    // //  line 2028
    // char str1[] = "321";
    // char str2[] = "321";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_54) {
    // //  line 2034
    // char str1[] = "321";
    // char str2[] = "123";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_55) {
    // //  line 2040
    // char str1[] = "1234";
    // char str2[] = "123";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_56) {
    // //  line 2046
    // char str1[] = "132";
    // char str2[] = "1234";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_57) {
    // //  line 2052
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_58) {
    // //  line 2058
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_59) {
    // //  line 2064
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

    // START_TEST(strncmp_60) {
    // //  line 2070
    // char str1[] = "ab12";
    // char str2[] = "12ab";
    // int n = 0;
    // int s21 = s21_strncmp(str1, str2, n);
    // int s00 = strncmp(str1, str2, n);
    // if (s21 > 1) {
    //    s21 = 1;
    // }
    // if (s21 < -1) {
    //    s21 = -1;
    // }
    // if (s00 > 1) {
    //    s00 = 1;
    // }
    // if (s00 < -1) {
    //    s00 = -1;
    // }
    // ck_assert_int_eq(s21, s00);
    // } END_TEST

//  strncmp


//  strcpy

    START_TEST(strcpy_1) {
    //  line 2076
    char str1[9] = "abc";
    char str2[] = "def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_2) {
    //  line 2081
    char str1[9] = "abc\0";
    char str2[] = "def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_3) {
    //  line 2086
    char str1[9] = "abc\n";
    char str2[] = "def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_4) {
    //  line 2091
    char str1[9] = "ab\0c";
    char str2[] = "def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_5) {
    //  line 2096
    char str1[9] = "a\nbc";
    char str2[] = "def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_6) {
    //  line 2101
    char str1[9] = "abc ";
    char str2[] = "def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_7) {
    //  line 2106
    char str1[9] = " abc";
    char str2[] = "def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_8) {
    //  line 2111
    char str1[9] = "abc";
    char str2[] = " def";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_9) {
    //  line 2116
    char str1[9] = "abc";
    char str2[] = "def ";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_10) {
    //  line 2121
    char str1[9] = "abc";
    char str2[] = "def00";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_11) {
    //  line 2126
    char str1[9] = "";
    char str2[] = "12\0";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_12) {
    //  line 2131
    char str1[9] = "12\0";
    char str2[] = "";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_13) {
    //  line 2136
    char str1[9] = "32\1";
    char str2[] = "";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_14) {
    //  line 2141
    char str1[9] = "21\3c";
    char str2[] = " ";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_15) {
    //  line 2146
    char str1[9] = "1\n23";
    char str2[] = "321";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_16) {
    //  line 2151
    char str1[9] = "321";
    char str2[] = "123";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_17) {
    //  line 2156
    char str1[9] = " ";
    char str2[] = " ";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_18) {
    //  line 2161
    char str1[9] = "";
    char str2[] = " ";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_19) {
    //  line 2166
    char str1[9] = " ";
    char str2[] = "";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

    START_TEST(strcpy_20) {
    //  line 2171
    char str1[9] = "";
    char str2[] = "";
    ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
    } END_TEST

//  strcpy


//  strncpy

    START_TEST(strncpy_1) {
    //  line 2176
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    s21_size_t n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_2) {
    //  line 2183
    char str1[9] = "ab\nc";
    char str2[] = "def";
    char str3[9] = "ab\nc";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_3) {
    //  line 2190
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_4) {
    //  line 2197
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_5) {
    //  line 2204
    char str1[9] = "abc";
    char str2[] = "de\nf";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_6) {
    //  line 2211
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 4;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_7) {
    //  line 2218
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 4;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_8) {
    //  line 2225
    char str1[9] = "";
    char str2[] = "def";
    char str3[9] = "";
    int n = 3;
    strncpy(str1, str2, n);
    s21_strncpy(str3, str2, n);
    ck_assert_str_eq(str1, str3);
    } END_TEST

    START_TEST(strncpy_9) {
    //  line 2234
    char str1[9] = "abc";
    char str2[] = "";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_10) {
    //  line 2241
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_11) {
    //  line 2248
    char str1[9] = "abc";
    char str2[] = "def";
    char str3[9] = "abc";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_12) {
    //  line 2255
    char str1[9] = "ab\nc";
    char str2[] = "def";
    char str3[9] = "ab\nc";
    int n = 9;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_13) {
    //  line 2262
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 0;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_14) {
    //  line 2269
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 0;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_15) {
    //  line 2276
    char str1[9] = "abc";
    char str2[] = "de\nf";
    char str3[9] = "abc";
    int n = 7;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_16) {
    //  line 2283
    char str1[9] = "ab\0c";
    char str2[] = "def";
    char str3[9] = "ab\0c";
    int n = 4;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_17) {
    //  line 2290
    char str1[9] = "abc";
    char str2[] = "de\0f";
    char str3[9] = "abc";
    int n = 8;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_18) {
    //  line 2297
    char str1[9] = "";
    char str2[] = "def";
    char str3[9] = "";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_19) {
    //  line 2304
    char str1[9] = "";
    char str2[] = "";
    char str3[9] = "";
    int n = 1;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

    START_TEST(strncpy_20) {
    //  line 2311
    char str1[9] = " ";
    char str2[] = " ";
    char str3[9] = " ";
    int n = 0;
    ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
    } END_TEST

//  strncpy



//  strcspn

    START_TEST(strcspn_1) {
    //  line 2318
    char str1[] = "abc";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_2) {
    //  line 2323
    char str1[] = "Abc";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_3) {
    //  line 2328
    char str1[] = "abc";
    char str2[] = "Abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_4) {
    //  line 2333
    char str1[] = "abC";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_5) {
    //  line 2338
    char str1[] = "abc";
    char str2[] = "abC";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_6) {
    //  line 2343
    char str1[] = "ABC";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_7) {
    //  line 2348
    char str1[] = "abc";
    char str2[] = "ABC";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_8) {
    //  line 2353
    char str1[] = "a b c";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_9) {
    //  line 2358
    char str1[] = "abc";
    char str2[] = "a b c";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_10) {
    //  line 2363
    char str1[] = "";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_11) {
    //  line 2368
    char str1[] = "abc";
    char str2[] = "";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_12) {
    //  line 2373
    char str1[] = " ";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_13) {
    //  line 2378
    char str1[] = "abc";
    char str2[] = " ";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_14) {
    //  line 2383
    char str1[] = "9087";
    char str2[] = "657";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_15) {
    //  line 2388
    char str1[] = "";
    char str2[] = "";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_16) {
    //  line 2393
    char str1[] = " ";
    char str2[] = " ";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_17) {
    //  line 2398
    char str1[] = "abc ";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_18) {
    //  line 2403
    char str1[] = "abc";
    char str2[] = "abc ";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_19) {
    //  line 2408
    char str1[] = " abc";
    char str2[] = "abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    START_TEST(strcspn_20) {
    //  line 2413
    char str1[] = "abc";
    char str2[] = " abc";
    ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    } END_TEST

    // START_TEST(strcspn_21) {
    // //  line 2418
    // char str1[] = "123";
    // char str2[] = "123";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_22) {
    // //  line 2423
    // char str1[] = "123";
    // char str2[] = "321";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_23) {
    // //  line 2428
    // char str1[] = "321";
    // char str2[] = "321";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_24) {
    // //  line 2433
    // char str1[] = "321";
    // char str2[] = "123";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_25) {
    // //  line 2438
    // char str1[] = "1234";
    // char str2[] = "123";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_26) {
    // //  line 2443
    // char str1[] = "132";
    // char str2[] = "1234";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_27) {
    // //  line 2448
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_28) {
    // //  line 2453
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_29) {
    // //  line 2458
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // } END_TEST

    // START_TEST(strcspn_30) {
    // //  line 2463
    // char str1[] = "ab12";
    // char str2[] = "12ab";
    // ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
    // }
    // END_TEST

//  strcspn

//  strerror

START_TEST(strerror_1) {
//  #line 3999
int i = 1;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_2) {
//  #line 4003
int i = 2;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_3) {
//  #line 4007
int i = 3;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_4) {
//  #line 4011
int i = 4;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_5) {
//  #line 4015
int i = 5;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_6) {
//  #line 4019
int i = 6;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_7) {
//  #line 4023
int i = 7;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_8) {
//  #line 4027
int i = 8;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_9) {
//  #line 4031
int i = 9;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_10) {
//  #line 4035
int i = 10;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_11) {
//  #line 4039
int i = 11;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_12) {
//  #line 4043
int i = 12;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_13) {
//  #line 4047
int i = 13;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_14) {
//  #line 4051
int i = 14;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_15) {
//  #line 4055
int i = 15;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_16) {
//  #line 4059
int i = 16;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_17) {
//  #line 4063
int i = 17;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_18) {
//  #line 4067
int i = 18;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_19) {
//  #line 4071
int i = 19;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_20) {
//  #line 4075
int i = 20;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_21) {
//  #line 4079
int i = 21;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_22) {
//  #line 4083
int i = 22;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_23) {
//  #line 4087
int i = 23;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_24) {
//  #line 4091
int i = 24;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_25) {
//  #line 4095
int i = 25;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_26) {
//  #line 4099
int i = 26;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_27) {
//  #line 4103
int i = 27;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_28) {
//  #line 4107
int i = 28;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_29) {
//  #line 4111
int i = 29;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_30) {
//  #line 4115
int i = 30;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_31) {
//  #line 4119
int i = 31;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_32) {
//  #line 4123
int i = 32;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_33) {
//  #line 4127
int i = 33;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_34) {
//  #line 4131
int i = 34;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_35) {
//  #line 4135
int i = 35;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_36) {
//  #line 4139
int i = 36;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_37) {
//  #line 4143
int i = 37;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_38) {
//  #line 4147
int i = 38;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_39) {
//  #line 4151
int i = 39;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_40) {
//  #line 4155
int i = 40;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_41) {
//  #line 4159
int i = 41;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_42) {
//  #line 4163
int i = 42;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_43) {
//  #line 4167
int i = 43;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_44) {
//  #line 4171
int i = 44;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_45) {
//  #line 4175
int i = 45;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_46) {
//  #line 4179
int i = 46;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_47) {
//  #line 4183
int i = 47;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_48) {
//  #line 4187
int i = 48;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_49) {
//  #line 4191
int i = 49;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_50) {
//  #line 4195
int i = 50;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_51) {
//  #line 4199
int i = 51;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_52) {
//  #line 4203
int i = 52;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_53) {
//  #line 4207
int i = 53;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_54) {
//  #line 4211
int i = 54;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_55) {
//  #line 4215
int i = 55;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_56) {
//  #line 4219
int i = 56;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_57) {
//  #line 4223
int i = 57;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_58) {
//  #line 4227
int i = 58;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_59) {
//  #line 4231
int i = 59;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_60) {
//  #line 4235
int i = 60;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_61) {
//  #line 4239
int i = 61;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_62) {
//  #line 4243
int i = 62;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_63) {
//  #line 4247
int i = 63;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_64) {
//  #line 4251
int i = 64;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_65) {
//  #line 4255
int i = 65;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_66) {
//  #line 4259
int i = 66;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_67) {
//  #line 4263
int i = 67;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_68) {
//  #line 4267
int i = 68;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_69) {
//  #line 4271
int i = 69;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_70) {
//  #line 4275
int i = 70;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_71) {
//  #line 4279
int i = 71;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_72) {
//  #line 4283
int i = 72;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_73) {
//  #line 4287
int i = 73;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_74) {
//  #line 4291
int i = 74;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_75) {
//  #line 4295
int i = 75;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_76) {
//  #line 4299
int i = 76;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_77) {
//  #line 4303
int i = 77;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_78) {
//  #line 4307
int i = 78;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_79) {
//  #line 4311
int i = 79;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_80) {
//  #line 4315
int i = 80;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_81) {
//  #line 4319
int i = 81;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_82) {
//  #line 4323
int i = 82;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_83) {
//  #line 4327
int i = 83;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_84) {
//  #line 4331
int i = 84;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_85) {
//  #line 4335
int i = 85;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_86) {
//  #line 4339
int i = 86;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_87) {
//  #line 4343
int i = 87;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_88) {
//  #line 4347
int i = 88;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_89) {
//  #line 4351
int i = 89;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_90) {
//  #line 4355
int i = 90;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_91) {
//  #line 4359
int i = 91;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_92) {
//  #line 4363
int i = 92;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_93) {
//  #line 4367
int i = 93;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_94) {
//  #line 4371
int i = 94;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_95) {
//  #line 4375
int i = 95;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_96) {
//  #line 4379
int i = 96;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_97) {
//  #line 4383
int i = 97;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_98) {
//  #line 4387
int i = 98;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_99) {
//  #line 4391
int i = 99;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_100) {
//  #line 4395
int i = 100;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_101) {
//  #line 4399
int i = 101;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_102) {
//  #line 4403
int i = 102;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_103) {
//  #line 4407
int i = 103;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_104) {
//  #line 4411
int i = 104;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_105) {
//  #line 4415
int i = 105;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_106) {
//  #line 4419
int i = 106;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_107) {
//  #line 4423
int i = 107;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_108) {
//  #line 4427
int i = 108;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST


START_TEST(strerror_109) {
    int i = 109;
    ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST


//  strerror


//  strlen

    START_TEST(strlen_1) {
    //  line 2469
    char str1[] = "abcde";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_2) {
    //  line 2473
    char str1[] = "12345";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_3) {
    //  line 2477
    char str1[] = "00000";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_4) {
    //  line 2481
    char str1[] = ".....";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_5) {
    //  line 2485
    char str1[] = "   ";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_6) {
    //  line 2489
    char str1[] = "+_@$)@)(%*";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_7) {
    //  line 2493
    char str1[] = "\n";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_8) {
    //  line 2497
    char str1[] = " 0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_9) {
    //  line 2501
    char str1[] = "0 ";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_10) {
    //  line 2505
    char str1[] = "j ";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_11) {
    //  line 2509
    char str1[] = " k";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_12) {
    //  line 2513
    char str1[] = "";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_13) {
    //  line 2517
    char str1[] = "!";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_14) {
    //  line 2521
    char str1[] = "\'";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_16) {
    //  line 2529
    char str1[] = "k\0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_17) {
    //  line 2533
    char str1[] = " \0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_18) {
    //  line 2537
    char str1[] = "\0 0n";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_19) {
    //  line 2541
    char str1[] = "\n klj";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

    START_TEST(strlen_20) {
    //  line 2545
    char str1[] = "\n\0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
    } END_TEST

//  strlen


//  strpbrk

    START_TEST(strpbrk_1) {
    //  line 2549
    char str1[] = "this is a test";
    char str2[] = "this";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_2) {
    //  line 2554
    char str1[] = "this is a test";
    char str2[] = "abc";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_3) {
    //  line 2559
    char str1[] = "abc";
    char str2[] = "ccc";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_4) {
    //  line 2564
    char str1[] = "abc123";
    char str2[] = "123";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_5) {
    //  line 2569
    char str1[] = "abglk1erw233c";
    char str2[] = "321";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_6) {
    //  line 2574
    char str1[] = "ab\nc";
    char str2[] = "\n";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_7) {
    //  line 2579
    char str1[] = "a8yuoiytu5u6rtyfkguhubc";
    char str2[] = "123i6t5";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_8) {
    //  line 2584
    char str1[] = "a77777bc";
    char str2[] = "177723";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_9) {
    //  line 2589
    char str1[] = "ab7itgkhm.,c";
    char str2[] = "12hjv3";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_10) {
    //  line 2594
    char str1[] = "ab.,c";
    char str2[] = "127863";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_11) {
    //  line 2599
    char str1[] = "abc";
    char str2[] = "";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_12) {
    //  line 2604
    char str1[] = " ";
    char str2[] = "abc";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_13) {
    //  line 2609
    char str1[] = "abc";
    char str2[] = " ";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_14) {
    //  line 2614
    char str1[] = "9087";
    char str2[] = "657";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_15) {
    //  line 2619
    char str1[] = "";
    char str2[] = "";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_16) {
    //  line 2624
    char str1[] = " ";
    char str2[] = " ";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_17) {
    //  line 2629
    char str1[] = "abc ";
    char str2[] = "abc";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_18) {
    //  line 2634
    char str1[] = "abc";
    char str2[] = "abc ";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_19) {
    //  line 2639
    char str1[] = " abc";
    char str2[] = "abc";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    START_TEST(strpbrk_20) {
    //  line 2644
    char str1[] = "abc";
    char str2[] = " abc";
    ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    } END_TEST

    // START_TEST(strpbrk_21) {
    // //  line 2649
    // char str1[] = "123";
    // char str2[] = "123";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_22) {
    // //  line 2654
    // char str1[] = "123";
    // char str2[] = "321";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_23) {
    // //  line 2659
    // char str1[] = "321";
    // char str2[] = "321";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_24) {
    // //  line 2664
    // char str1[] = "321";
    // char str2[] = "123";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_25) {
    // //  line 2669
    // char str1[] = "1234";
    // char str2[] = "123";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_26) {
    // //  line 2674
    // char str1[] = "132";
    // char str2[] = "1234";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_27) {
    // //  line 2679
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_28) {
    // //  line 2684
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_29) {
    // //  line 2689
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_30) {
    // //  line 2694
    // char str1[] = "ab12";
    // char str2[] = "12ab";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_31) {
    // //  line 2699
    // char str1[] = "abc";
    // char str2[] = "";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_32) {
    // //  line 2704
    // char str1[] = " ";
    // char str2[] = "abc";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_33) {
    // //  line 2709
    // char str1[] = "abc";
    // char str2[] = " ";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_34) {
    // //  line 2714
    // char str1[] = "9087";
    // char str2[] = "657";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_35) {
    // //  line 2719
    // char str1[] = "";
    // char str2[] = "";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_36) {
    // //  line 2724
    // char str1[] = " ";
    // char str2[] = " ";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_37) {
    // //  line 2729
    // char str1[] = "abc ";
    // char str2[] = "abc";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_38) {
    // //  line 2734
    // char str1[] = "abc";
    // char str2[] = "abc ";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_39) {
    // //  line 2739
    // char str1[] = " abc";
    // char str2[] = "abc";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

    // START_TEST(strpbrk_40) {
    // //  line 2744
    // char str1[] = "abc";
    // char str2[] = " abc";
    // ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
    // } END_TEST

//  strpbrk


//  strrchr

    START_TEST(strrchr_1) {
    //  line 2749
    char str1[] = "abc";
    int n = 'a';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_2) {
    //  line 2754
    char str1[] = "abc";
    int n = 'd';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_3) {
    //  line 2759
    char str1[] = "abc";
    int n = '1';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_4) {
    //  line 2764
    char str1[] = "abc";
    int n = '\\';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_5) {
    //  line 2769
    char str1[] = "";
    int n = 'a';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_6) {
    //  line 2774
    char str1[] = " ";
    int n = 'a';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_7) {
    //  line 2779
    char str1[] = " ";
    int n = ' ';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_8) {
    //  line 2784
    char str1[] = " ";
    int n = '\\';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_9) {
    //  line 2789
    char str1[] = "021";
    int n = '0';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_10) {
    //  line 2794
    char str1[] = "ab\nc";
    int n = 'a';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_11) {
    //  line 2799
    char str1[] = "ab\nc";
    int n = '\n';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_12) {
    //  line 2804
    char str1[] = "abc";
    int n = '\0';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_13) {
    //  line 2809
    char str1[] = "ab\0c";
    int n = 'a';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_14) {
    //  line 2814
    char str1[] = "ab\0c";
    int n = '\0';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_15) {
    //  line 2819
    char str1[] = "";
    int n = '\0';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_16) {
    //  line 2824
    char str1[] = "\0\0\0";
    int n = '\0';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_17) {
    //  line 2829
    char str1[] = " ";
    int n = '\\';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_18) {
    //  line 2834
    char str1[] = "";
    int n = '\\';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_19) {
    //  line 2839
    char str1[] = "ab,c";
    int n = ',';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

    START_TEST(strrchr_20) {
    //  line 2844
    char str1[] = "abcdefghijklmnopqrst";
    int n = 't';
    ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
    } END_TEST

//  strrchr


//  strspn

    START_TEST(strspn_1) {
    //  line 2849
    char str1[] = "abc";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_2) {
    //  line 2854
    char str1[] = "Abc";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_3) {
    //  line 2859
    char str1[] = "abc";
    char str2[] = "Abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_4) {
    //  line 2864
    char str1[] = "abC";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_5) {
    //  line 2869
    char str1[] = "abc";
    char str2[] = "abC";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_6) {
    //  line 2874
    char str1[] = "ABC";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_7) {
    //  line 2879
    char str1[] = "abc";
    char str2[] = "ABC";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_8) {
    //  line 2884
    char str1[] = "a b c";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_9) {
    //  line 2889
    char str1[] = "abc";
    char str2[] = "a b c";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_10) {
    //  line 2894
    char str1[] = "";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_11) {
    //  line 2899
    char str1[] = "abc";
    char str2[] = "";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_12) {
    //  line 2904
    char str1[] = " ";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_13) {
    //  line 2909
    char str1[] = "abc";
    char str2[] = " ";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_14) {
    //  line 2914
    char str1[] = "9087";
    char str2[] = "657";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_15) {
    //  line 2919
    char str1[] = "";
    char str2[] = "";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_16) {
    //  line 2924
    char str1[] = " ";
    char str2[] = " ";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_17) {
    //  line 2929
    char str1[] = "abc ";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_18) {
    //  line 2934
    char str1[] = "abc";
    char str2[] = "abc ";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_19) {
    //  line 2939
    char str1[] = " abc";
    char str2[] = "abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

    START_TEST(strspn_20) {
    //  line 2944
    char str1[] = "abc";
    char str2[] = " abc";
    ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
    } END_TEST

//  strstr

    START_TEST(strstr_1) {
    //  line 3004
    char str1[] = "abc";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_2) {
    //  line 3009
    char str1[] = "Abc";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_3) {
    //  line 3014
    char str1[] = "abc";
    char str2[] = "Abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_4) {
    //  line 3019
    char str1[] = "abC";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_5) {
    //  line 3024
    char str1[] = "abc";
    char str2[] = "abC";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_6) {
    //  line 3029
    char str1[] = "ABC";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_7) {
    //  line 3034
    char str1[] = "abc";
    char str2[] = "ABC";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_8) {
    //  line 3039
    char str1[] = "a b c";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_9) {
    //  line 3044
    char str1[] = "abc";
    char str2[] = "a b c";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_10) {
    //  line 3049
    char str1[] = "";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_11) {
    //  line 3054
    char str1[] = "abc";
    char str2[] = "";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_12) {
    //  line 3059
    char str1[] = " ";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_13) {
    //  line 3064
    char str1[] = "abc";
    char str2[] = " ";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_14) {
    //  line 3069
    char str1[] = "9087";
    char str2[] = "657";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_15) {
    //  line 3074
    char str1[] = "";
    char str2[] = "";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_16) {
    //  line 3079
    char str1[] = " ";
    char str2[] = " ";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_17) {
    //  line 3084
    char str1[] = "abc ";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_18) {
    //  line 3089
    char str1[] = "abc";
    char str2[] = "abc ";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_19) {
    //  line 3094
    char str1[] = " abc";
    char str2[] = "abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    START_TEST(strstr_20) {
    //  line 3099
    char str1[] = "abc";
    char str2[] = " abc";
    ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    } END_TEST

    // START_TEST(strstr_21) {
    // //  line 3104
    // char str1[] = "123";
    // char str2[] = "123";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_22) {
    // //  line 3109
    // char str1[] = "123";
    // char str2[] = "321";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_23) {
    // //  line 3114
    // char str1[] = "321";
    // char str2[] = "321";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_24) {
    // //  line 3119
    // char str1[] = "321";
    // char str2[] = "123";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_25) {
    // //  line 3124
    // char str1[] = "1234";
    // char str2[] = "123";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_26) {
    // //  line 3129
    // char str1[] = "132";
    // char str2[] = "1234";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_27) {
    // //  line 3134
    // char str1[] = "abcd";
    // char str2[] = "abc";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_28) {
    // //  line 3139
    // char str1[] = "abc";
    // char str2[] = "abcd";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_29) {
    // //  line 3144
    // char str1[] = "12ab";
    // char str2[] = "12ab";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_30) {
    // //  line 3149
    // char str1[] = "ab12";
    // char str2[] = "12ab";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_31) {
    // //  line 3154
    // char str1[] = "a\0b12";
    // char str2[] = "12ab";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_32) {
    // //  line 3159
    // char str1[] = "ab12";
    // char str2[] = "12\0ab";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_33) {
    // //  line 3164
    // char str1[] = "ab\012";
    // char str2[] = "1\02ab";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_34) {
    // //  line 3169
    // char str1[] = "\0";
    // char str2[] = "\0";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_35) {
    // //  line 3174
    // char str1[] = "\0";
    // char str2[] = "1\02ab";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

    // START_TEST(strstr_36) {
    // //  line 3179
    // char str1[] = "";
    // char str2[] = "1\02ab";
    // ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
    // } END_TEST

//  strstr


//  strtok

    START_TEST(strtok_1) {
    //  line 3184
    char str1[] = "abc";
    char str3[] = "abc";
    char str2[] = "c";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_2) {
    //  line 3190
    char str1[] = "abc";
    char str3[] = "abc";
    char str2[] = "b";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_3) {
    //  line 3196
    char str1[] = "abc";
    char str3[] = "abc";
    char str2[] = "a";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_4) {
    //  line 3202
    char str1[] = "abb";
    char str3[] = "abb";
    char str2[] = "b";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_5) {
    //  line 3208
    char str1[] = "bbc";
    char str3[] = "bbc";
    char str2[] = "b";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_6) {
    //  line 3214
    char str1[] = "aaabbcc";
    char str3[] = "aaabbcc";
    char str2[] = "c";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_7) {
    //  line 3220
    char str1[] = "aaabbcc";
    char str3[] = "aaabbcc";
    char str2[] = "b";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_8) {
    //  line 3226
    char str1[] = "abc";
    char str3[] = "abc";
    char str2[] = "d";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_9) {
    //  line 3232
    char str1[] = "123";
    char str3[] = "123";
    char str2[] = "3";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_10) {
    //  line 3238
    char str1[] = "123";
    char str3[] = "123";
    char str2[] = "2";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_11) {
    //  line 3244
    char str1[] = "123";
    char str3[] = "123";
    char str2[] = "1";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_12) {
    //  line 3250
    char str1[] = "123";
    char str3[] = "123";
    char str2[] = "4";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_13) {
    //  line 3256
    char str1[] = "1123";
    char str3[] = "1123";
    char str2[] = "2";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_14) {
    //  line 3262
    char str1[] = "1223";
    char str3[] = "1223";
    char str2[] = "2";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_15) {
    //  line 3268
    char str1[] = "1\023";
    char str3[] = "1\023";
    char str2[] = "2";
    ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
    } END_TEST

    START_TEST(strtok_16) {
    //  line 3274
    char str1[] = "1\023";
    char str3[] = "1\023";
    char str2[] = "2";
    strtok(str1, str2);
    strtok(NULL, str2);
    s21_strtok(str3, str2);
    s21_strtok(NULL, str2);
    ck_assert_str_eq(str1, str3);
    } END_TEST

    START_TEST(strtok_17) {
    //  line 3284
    char str1[] = "ababa";
    char str3[] = "ababa";
    char str2[] = "b";
    strtok(str1, str2);
    strtok(NULL, str2);
    s21_strtok(str3, str2);
    s21_strtok(NULL, str2);
    ck_assert_str_eq(str1, str3);
    } END_TEST

    START_TEST(strtok_18) {
    //  line 3294
    char str1[] = "ababa";
    char str3[] = "ababa";
    char str2[] = "a";
    strtok(str1, str2);
    strtok(NULL, str2);
    s21_strtok(str3, str2);
    s21_strtok(NULL, str2);
    ck_assert_str_eq(str1, str3);
    } END_TEST

    START_TEST(strtok_19) {
    //  line 3304
    char str1[] = "ababa";
    char str3[] = "ababa";
    char str2[] = "a";
    strtok(str1, str2);
    strtok(NULL, str2);
    strtok(NULL, str2);
    s21_strtok(str3, str2);
    s21_strtok(NULL, str2);
    s21_strtok(NULL, str2);
    ck_assert_str_eq(str1, str3);
    } END_TEST

    START_TEST(strtok_20) {
    //  line 3316
    char str1[] = "ababa";
    char str3[] = "ababa";
    char str2[] = "a";
    strtok(str1, str2);
    char *str4 = strtok(NULL, str2);
    s21_strtok(str3, str2);
    char *str5 = s21_strtok(NULL, str2);
    ck_assert_str_eq(str4, str5);
    } END_TEST

    // START_TEST(strtok_21) {
    // //  line 3326
    // char str1[] = "ababa";
    // char str3[] = "ababa";
    // char str2[] = "a";
    // strtok(str1, str2);
    // char *str4 = strtok(NULL, str2);
    // strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // char *str5 = s21_strtok(NULL, str2);
    // s21_strtok(NULL, str2);
    // ck_assert_str_eq(str4, str5);
    // } END_TEST

    // START_TEST(strtok_22) {
    // //  line 3338
    // char str1[] = "abababa";
    // char str3[] = "abababa";
    // char str2[] = "a";
    // strtok(str1, str2);
    // strtok(NULL, str2);
    // char *str4 = strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // s21_strtok(NULL, str2);
    // char *str5 = s21_strtok(NULL, str2);
    // ck_assert_str_eq(str4, str5);
    // } END_TEST

    // START_TEST(strtok_23) {
    // //  line 3350
    // char str1[] = "abababa";
    // char str3[] = "abababa";
    // char str2[] = "b";
    // strtok(str1, str2);
    // strtok(NULL, str2);
    // char *str4 = strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // s21_strtok(NULL, str2);
    // char *str5 = s21_strtok(NULL, str2);
    // ck_assert_str_eq(str4, str5);
    // } END_TEST

    // START_TEST(strtok_24) {
    // //  line 3362
    // char str1[] = "abababa";
    // char str3[] = "abababa";
    // char str2[] = "c";
    // strtok(str1, str2);
    // strtok(NULL, str2);
    // char *str4 = strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // s21_strtok(NULL, str2);
    // char *str5 = s21_strtok(NULL, str2);
    // ck_assert_ptr_eq(str4, str5);
    // } END_TEST

    // START_TEST(strtok_25) {
    // //  line 3374
    // char str1[] = "ababnnabaaaaa";
    // char str3[] = "ababnnabaaaaa";
    // char str2[] = "a";
    // strtok(str1, str2);
    // strtok(NULL, str2);
    // char *str4 = strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // s21_strtok(NULL, str2);
    // char *str5 = s21_strtok(NULL, str2);
    // ck_assert_str_eq(str4, str5);
    // } END_TEST

    // START_TEST(strtok_26) {
    // //  line 3386
    // char str1[] = "ababnnabaaaaa";
    // char str3[] = "ababnnabaaaaa";
    // char str2[] = "n";
    // strtok(str1, str2);
    // char *str4 = strtok(NULL, str2);
    // strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // char *str5 = s21_strtok(NULL, str2);
    // s21_strtok(NULL, str2);
    // ck_assert_str_eq(str4, str5);
    // } END_TEST

    // START_TEST(strtok_27) {
    // //  line 3398
    // char str1[] = "0987654546789";
    // char str3[] = "0987654546789";
    // char str2[] = "098767";
    // char *str4 = strtok(str1, str2);
    // char *str6 = strtok(NULL, str2);

    // char *str5 = s21_strtok(str3, str2);
    // char *str7 = s21_strtok(NULL, str2);

    // ck_assert_str_eq(str1, str3);
    // ck_assert_pstr_eq(str4, str5);
    // ck_assert_pstr_eq(str6, str7);
    // } END_TEST

    // START_TEST(strtok_28) {
    // //  line 3410
    // char str1[] = "ababnnabaaaaa";
    // char str3[] = "ababnnabaaaaa";
    // char str2[] = "n";
    // strtok(str1, str2);
    // strtok(NULL, str2);
    // strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // s21_strtok(NULL, str2);
    // s21_strtok(NULL, str2);
    // ck_assert_str_eq(str1, str3);
    // } END_TEST

    // START_TEST(strtok_29) {
    // //  line 3422
    // char str1[] = "aaaaaabnnabaaaaa";
    // char str3[] = "aaaaaabnnabaaaaa";
    // char str2[] = "a";
    // strtok(str1, str2);
    // strtok(NULL, str2);
    // strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // s21_strtok(NULL, str2);
    // s21_strtok(NULL, str2);
    // ck_assert_str_eq(str1, str3);
    // } END_TEST

    // START_TEST(strtok_30) {
    // //  line 3434
    // char str1[] = "bnnabaaaaa";
    // char str3[] = "bnnabaaaaa";
    // char str2[] = "a";
    // strtok(str1, str2);
    // strtok(NULL, str2);
    // strtok(NULL, str2);
    // s21_strtok(str3, str2);
    // s21_strtok(NULL, str2);
    // s21_strtok(NULL, str2);
    // ck_assert_str_eq(str1, str3);
    // } END_TEST

//  strtok

START_TEST(test_s21_to_upper1) {  // тестовая функция 1
    char str1[30] = "Hello!";
    char str2[] = "HELLO!";
    ck_assert_pstr_eq(s21_to_upper(str1), str2);
} END_TEST

START_TEST(test_s21_to_upper2) {  // тестовая функция 2
    char str1[30] = "###";
    char str2[] = "###";
    ck_assert_pstr_eq(s21_to_upper(str1), str2);
} END_TEST

START_TEST(test_s21_to_upper3) {  // тестовая функция 3
    char str1[30] = "123hello123HELLO";
    char str2[] = "123HELLO123HELLO";
    ck_assert_pstr_eq(s21_to_upper(str1), str2);
} END_TEST

START_TEST(test_s21_to_upper4) {  // тестовая функция 4
    char* str1 = NULL;
    char* str2 = NULL;
    ck_assert_pstr_eq(s21_to_upper(str1), str2);
} END_TEST

Suite *to_upper_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("TO_UPPER");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_to_upper1);
    tcase_add_test(tc_core, test_s21_to_upper2);
    tcase_add_test(tc_core, test_s21_to_upper3);
    tcase_add_test(tc_core, test_s21_to_upper4);
    suite_add_tcase(s, tc_core);

    return s;
}

int to_upper_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = to_upper_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

///////////////// TO_LOWER TESTS ////////////////////
START_TEST(test_s21_to_lower1) {  // тестовая функция 1
    char str1[30] = "HELLO!";
    char str2[] = "hello!";
    ck_assert_pstr_eq(s21_to_lower(str1), str2);
} END_TEST

START_TEST(test_s21_to_lower2) {  // тестовая функция 2
    char str1[30] = "###";
    char str2[] = "###";
    ck_assert_pstr_eq(s21_to_lower(str1), str2);
} END_TEST

START_TEST(test_s21_to_lower3) {  // тестовая функция 3
    char str1[30] = "123HELLO123hello";
    char str2[] = "123hello123hello";
    ck_assert_pstr_eq(s21_to_lower(str1), str2);
} END_TEST

START_TEST(test_s21_to_lower4) {  // тестовая функция 4
    char* str1 = NULL;
    char* str2 = NULL;
    ck_assert_pstr_eq(s21_to_lower(str1), str2);
} END_TEST

Suite *to_lower_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("TO_LOWER");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_to_lower1);
    tcase_add_test(tc_core, test_s21_to_lower2);
    tcase_add_test(tc_core, test_s21_to_lower3);
    tcase_add_test(tc_core, test_s21_to_lower4);
    suite_add_tcase(s, tc_core);

    return s;
}

int to_lower_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = to_lower_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}


START_TEST(test_s21_sprintf_c_1) {
        char str1[1024] = "\0";
        char str2[1024] = "\0";
        sprintf(str1, "%c", 'W');
        s21_sprintf(str2, "%c", 'W');
        ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_c_2) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "Hello %-5c", 'W');
    s21_sprintf(str2, "Hello %-5c", 'W');
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_c_3) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "Hello %5c", 'W');
    s21_sprintf(str2, "Hello %5c", 'W');
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_c_4) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "Hello %% %5c", 'W');
    s21_sprintf(str2, "Hello %% %5c", 'W');
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_c_5) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%%");
    s21_sprintf(str2, "%%");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_c_6) {
    char str1[BUFF_SIZE] = "\0";
    char str2[BUFF_SIZE] = "\0";
    char *format = "This is a simple wide char %lc\0";
    unsigned long w = '5';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(test_s21_sprintf_c_7) {
        char str1[BUFF_SIZE] = "\0";
        char str2[BUFF_SIZE] = "\0";

        char *format = "This is a simple wide char %5c\0";
        char w = 'c';
        int a = s21_sprintf(str1, format, w);
        int b = sprintf(str2, format, w);
        ck_assert_str_eq(str1, str2);
        ck_assert_int_eq(a, b);
}


Suite *sprintf_c_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_C");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_sprintf_c_1);
    tcase_add_test(tc_core, test_s21_sprintf_c_2);
    tcase_add_test(tc_core, test_s21_sprintf_c_3);
    tcase_add_test(tc_core, test_s21_sprintf_c_4);
    tcase_add_test(tc_core, test_s21_sprintf_c_5);
    tcase_add_test(tc_core, test_s21_sprintf_c_6);
    tcase_add_test(tc_core, test_s21_sprintf_c_7);

    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_c_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_c_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

//////////////// SPRINTF_S TESTS////////////////////

START_TEST(test_s21_sprintf_s_1) {
        char str1[1024] = "\0";
        char str2[1024] = "\0";
        sprintf(str1, "Hello %s", "world!");
        s21_sprintf(str2, "Hello %s", "world!");
        ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_2) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "Easy %10s", "win 123");
    s21_sprintf(str2, "Easy %10s", "win 123");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_3) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "Hi %-10s", "guys%%%%%");
    s21_sprintf(str2, "Hi %-10s", "guys%%%%%");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_4) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    char a = 0;
    sprintf(str1, "%c", a);
    s21_sprintf(str2, "%c", a);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_5) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "Hi %.10s", "g");
    s21_sprintf(str2, "Hi %.10s", "g");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_6) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "Hi %.3s", "hello");
    s21_sprintf(str2, "Hi %.3s", "hello");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_8) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%10.8s", "google_g");
    s21_sprintf(str2, "%10.8s", "google_g");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_9) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%10.8s", "google_go");
    s21_sprintf(str2, "%10.8s", "google_go");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_10) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%10.12s", "google_go");
    s21_sprintf(str2, "%10.12s", "google_go");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_11) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%10.12s", "google_go_hard");
    s21_sprintf(str2, "%10.12s", "google_go_hard");
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_s_12) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%-10.12s", "google_go_hard");
    s21_sprintf(str2, "%-10.12s", "google_go_hard");
    ck_assert_str_eq(str1, str2);
} END_TEST

        Suite *sprintf_s_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_S");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_sprintf_s_1);
    tcase_add_test(tc_core, test_s21_sprintf_s_2);
    tcase_add_test(tc_core, test_s21_sprintf_s_3);
    tcase_add_test(tc_core, test_s21_sprintf_s_4);
    tcase_add_test(tc_core, test_s21_sprintf_s_5);
    tcase_add_test(tc_core, test_s21_sprintf_s_6);
    tcase_add_test(tc_core, test_s21_sprintf_s_8);
    tcase_add_test(tc_core, test_s21_sprintf_s_9);
    tcase_add_test(tc_core, test_s21_sprintf_s_10);
    tcase_add_test(tc_core, test_s21_sprintf_s_11);
    tcase_add_test(tc_core, test_s21_sprintf_s_12);
    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_s_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_s_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

//////////////// SPRINTF_F TESTS////////////////////

START_TEST(test_s21_sprintf_f_3) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%-15.10f", 1.523451);
    s21_sprintf(str2, "%-15.10f", 1.523451);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_f_4) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%.9f", 1000000000.00);
    s21_sprintf(str2, "%.9f", 1000000000.00);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_f_6) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%.f", -999.);
    s21_sprintf(str2, "%.f", -999.);
    ck_assert_str_eq(str1, str2);
} END_TEST

Suite *sprintf_f_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_F");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_s21_sprintf_f_3);
    tcase_add_test(tc_core, test_s21_sprintf_f_4);
    tcase_add_test(tc_core, test_s21_sprintf_f_6);
    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_f_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_f_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

//////////////// SPRINTF_U TESTS////////////////////

START_TEST(test_s21_sprintf_u_1) {
        char str1[1024] = "\0";
        char str2[1024] = "\0";
        unsigned int x = 1;
        sprintf(str1, "%5u", x);
        s21_sprintf(str2, "%5u", 1);
        ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_u_2) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    unsigned int x = 15;
    sprintf(str1, "%u", x);
    s21_sprintf(str2, "%u", 15);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_u_3) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    unsigned int x = 156123123;
    sprintf(str1, "%-15u", x);
    s21_sprintf(str2, "%-15u", 156123123);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_u_4) {
    char str1[BUFF_SIZE] = "\0";
    char str2[BUFF_SIZE] = "\0";

    char *format = "%lu, %u, %hu, %.5u, %5.u\0";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
                     sprintf(str2, format, val, (unsigned)14,
                             (unsigned short)1441, (unsigned)14414,
                             (unsigned)9681));

    ck_assert_str_eq(str1, str2);
} END_TEST

        Suite *sprintf_u_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_U");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_sprintf_u_1);
    tcase_add_test(tc_core, test_s21_sprintf_u_2);
    tcase_add_test(tc_core, test_s21_sprintf_u_3);
    tcase_add_test(tc_core, test_s21_sprintf_u_4);
    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_u_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_u_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

//////////////// SPRINTF_D TESTS////////////////////

START_TEST(test_s21_sprintf_d_1) {
        char str1[1024] = "\0";
        char str2[1024] = "\0";
        sprintf(str1, "%.5d", 1);
        s21_sprintf(str2, "%.5d", 1);
        ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_d_2) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%d", -151232);
    s21_sprintf(str2, "%d", -151232);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_d_3) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%-15d", +156123123);
    s21_sprintf(str2, "%-15d", +156123123);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_d_4) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%+15d", +156123123);
    s21_sprintf(str2, "%+15d", +156123123);
    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(test_s21_sprintf_d_7) {
    char str1[BUFF_SIZE] = "\0";
    char str2[BUFF_SIZE] = "\0";

    char *format = "%hd\0";
    short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_s21_sprintf_d_8) {
    char str1[BUFF_SIZE] = "\0";
    char str2[BUFF_SIZE] = "\0";
    char format[] = "% 0.0li% 0.0lu% 0.0ld % 0.0lf\0";

    ck_assert_int_eq(
            s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
            sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_s21_sprintf_d_9) {
    char str1[BUFF_SIZE] = "\0";
    char str2[BUFF_SIZE] = "\0";
    char format[] = "% 0.0li% 0.0lu% 0.0ld % 0.0lf\0";

    ck_assert_int_eq(
            s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
            sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_s21_sprintf_d_10) {
    char str1[BUFF_SIZE] = "\0";
    char str2[BUFF_SIZE] = "\0";
    char format[] = "% 0.0hi% 0.0hu% 0.0hd % 0.0hf\0";

    ck_assert_int_eq(
            s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
            sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

    ck_assert_str_eq(str1, str2);
}
END_TEST
        Suite *sprintf_d_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_D");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_sprintf_d_1);
    tcase_add_test(tc_core, test_s21_sprintf_d_2);
    tcase_add_test(tc_core, test_s21_sprintf_d_3);
    tcase_add_test(tc_core, test_s21_sprintf_d_4);
    tcase_add_test(tc_core, test_s21_sprintf_d_7);
    tcase_add_test(tc_core, test_s21_sprintf_d_8);
    tcase_add_test(tc_core, test_s21_sprintf_d_9);
    tcase_add_test(tc_core, test_s21_sprintf_d_10);

    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_d_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_d_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

//////////////// SPRINTF_H TESTS////////////////////

START_TEST(test_s21_sprintf_h_1) {
        char str1[1024] = "\0";
        char str2[1024] = "\0";
        short x = -23;
        sprintf(str1, "POP %hd", x);
        s21_sprintf(str2, "POP %hd", -23);
        ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_h_2) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    unsigned short x = 111;
    sprintf(str1, "%-5hu", x);
    s21_sprintf(str2, "%-5hu", 111);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_h_3) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    short int x = 15612;
    sprintf(str1, "% hi", x);
    s21_sprintf(str2, "% hi", 15612);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_h_4) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    short int x = -15612;
    sprintf(str1, "% hi", x);
    s21_sprintf(str2, "% hi", -15612);
    ck_assert_str_eq(str1, str2);
} END_TEST


        Suite *sprintf_h_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_H");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_sprintf_h_1);
    tcase_add_test(tc_core, test_s21_sprintf_h_2);
    tcase_add_test(tc_core, test_s21_sprintf_h_3);
    tcase_add_test(tc_core, test_s21_sprintf_h_4);
    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_h_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_h_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

//////////////// SPRINTF_L TESTS////////////////////

START_TEST(test_s21_sprintf_l_1) {
        char str1[1024] = "\0";
        char str2[1024] = "\0";
        sprintf(str1, "Hello %ld", 28201234123);
        s21_sprintf(str2, "Hello %ld", 28201234123);
        ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_l_4) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    char x = 't';
    sprintf(str1, "%c", x);
    s21_sprintf(str2, "%c", 't');
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_l_5) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    short x = 2820;
    sprintf(str1, "Hello %hd", x);
    s21_sprintf(str2, "Hello %hd", 2820);
    ck_assert_str_eq(str1, str2);
} END_TEST

        Suite *sprintf_l_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_L");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_sprintf_l_1);
    tcase_add_test(tc_core, test_s21_sprintf_l_4);
    tcase_add_test(tc_core, test_s21_sprintf_l_5);
    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_l_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_l_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}

//////////////// SPRINTF_I TESTS////////////////////

START_TEST(test_s21_sprintf_i_1) {
        char str1[1024] = "\0";
        char str2[1024] = "\0";
        sprintf(str1, "%.5i", 1);
        s21_sprintf(str2, "%.5i", 1);
        ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_i_2) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%i", -151232);
    s21_sprintf(str2, "%i", -151232);
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_s21_sprintf_i_3) {
    char str1[1024] = "\0";
    char str2[1024] = "\0";
    sprintf(str1, "%-15i", 156123123);
    s21_sprintf(str2, "%-15i", 156123123);
    ck_assert_str_eq(str1, str2);
} END_TEST

        Suite *sprintf_i_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("SPRINTF_I");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_s21_sprintf_i_1);
    tcase_add_test(tc_core, test_s21_sprintf_i_2);
    tcase_add_test(tc_core, test_s21_sprintf_i_3);
    suite_add_tcase(s, tc_core);

    return s;
}

int sprintf_i_tests(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = sprintf_i_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? 0 : 1;
}



Suite *s21_stringh_tests(void) {
    Suite *s;
    TCase *tc_memchr, *tc_memcmp, *tc_memcpy, *tc_memmove, *tc_memset, *tc_strcat,
    *tc_strncat, *tc_strchr, *tc_strcmp, *tc_strncmp, *tc_strcpy, *tc_strncpy,
    *tc_strcspn, *tc_strerror, *tc_strlen, *tc_strpbrk, *tc_strrchr, *tc_strspn, *tc_strstr, *tc_strtok;

    s = suite_create("string.h_tests");

    tc_memchr = tcase_create("memchr");
    tc_memcmp = tcase_create("memcmp");
    tc_memcpy = tcase_create("memcpy");
    tc_memmove = tcase_create("memmove");
    tc_memset = tcase_create("memset");
    tc_strcat = tcase_create("strcat");
    tc_strncat = tcase_create("strncat");
    tc_strchr = tcase_create("strchr");
    tc_strcmp = tcase_create("strcmp");
    tc_strncmp = tcase_create("strncmp");
    tc_strcpy = tcase_create("strcpy");
    tc_strncpy = tcase_create("strncpy");
    tc_strcspn = tcase_create("strcspn");
    tc_strerror = tcase_create("strerror");
    tc_strlen = tcase_create("strlen");
    tc_strpbrk = tcase_create("strpbrk");
    tc_strrchr = tcase_create("strrchr");
    tc_strspn = tcase_create("strspn");
    tc_strstr = tcase_create("strstr");
    tc_strtok = tcase_create("strtok");

    tcase_add_test(tc_memchr, memchr_1);
    tcase_add_test(tc_memchr, memchr_2);
    tcase_add_test(tc_memchr, memchr_3);
    tcase_add_test(tc_memchr, memchr_4);
    tcase_add_test(tc_memchr, memchr_5);
    tcase_add_test(tc_memchr, memchr_6);
    tcase_add_test(tc_memchr, memchr_7);
    tcase_add_test(tc_memchr, memchr_8);
    tcase_add_test(tc_memchr, memchr_9);
    tcase_add_test(tc_memchr, memchr_10);

    tcase_add_test(tc_memcmp, memcmp_1);
    tcase_add_test(tc_memcmp, memcmp_2);
    tcase_add_test(tc_memcmp, memcmp_3);
    tcase_add_test(tc_memcmp, memcmp_4);
    tcase_add_test(tc_memcmp, memcmp_5);
    tcase_add_test(tc_memcmp, memcmp_6);
    tcase_add_test(tc_memcmp, memcmp_7);
    tcase_add_test(tc_memcmp, memcmp_8);
    tcase_add_test(tc_memcmp, memcmp_9);
    tcase_add_test(tc_memcmp, memcmp_10);

    tcase_add_test(tc_memcpy, memcpy_1);
    tcase_add_test(tc_memcpy, memcpy_2);
    tcase_add_test(tc_memcpy, memcpy_3);
    tcase_add_test(tc_memcpy, memcpy_4);
    tcase_add_test(tc_memcpy, memcpy_5);
    tcase_add_test(tc_memcpy, memcpy_6);
    tcase_add_test(tc_memcpy, memcpy_7);
    tcase_add_test(tc_memcpy, memcpy_8);
    tcase_add_test(tc_memcpy, memcpy_9);
    tcase_add_test(tc_memcpy, memcpy_10);

    tcase_add_test(tc_memmove, memmove_1);
    tcase_add_test(tc_memmove, memmove_2);
    tcase_add_test(tc_memmove, memmove_3);
    tcase_add_test(tc_memmove, memmove_4);
    tcase_add_test(tc_memmove, memmove_5);
    tcase_add_test(tc_memmove, memmove_6);
    tcase_add_test(tc_memmove, memmove_7);
    tcase_add_test(tc_memmove, memmove_8);
    tcase_add_test(tc_memmove, memmove_9);
    tcase_add_test(tc_memmove, memmove_10);
    tcase_add_test(tc_memmove, memmove_11);
    tcase_add_test(tc_memmove, memmove_12);
    tcase_add_test(tc_memmove, memmove_13);
    tcase_add_test(tc_memmove, memmove_14);
    tcase_add_test(tc_memmove, memmove_15);
    tcase_add_test(tc_memmove, memmove_16);
    tcase_add_test(tc_memmove, memmove_17);
    tcase_add_test(tc_memmove, memmove_18);
    tcase_add_test(tc_memmove, memmove_19);
    tcase_add_test(tc_memmove, memmove_20);

    tcase_add_test(tc_memset, memset_1);
    tcase_add_test(tc_memset, memset_2);
    tcase_add_test(tc_memset, memset_3);
    tcase_add_test(tc_memset, memset_4);
    tcase_add_test(tc_memset, memset_5);
    tcase_add_test(tc_memset, memset_6);
    tcase_add_test(tc_memset, memset_7);
    tcase_add_test(tc_memset, memset_8);
    tcase_add_test(tc_memset, memset_9);
    tcase_add_test(tc_memset, memset_10);
    tcase_add_test(tc_memset, memset_11);
    tcase_add_test(tc_memset, memset_12);
    tcase_add_test(tc_memset, memset_13);
    tcase_add_test(tc_memset, memset_14);
    tcase_add_test(tc_memset, memset_15);
    tcase_add_test(tc_memset, memset_16);
    tcase_add_test(tc_memset, memset_17);
    tcase_add_test(tc_memset, memset_18);
    tcase_add_test(tc_memset, memset_19);
    tcase_add_test(tc_memset, memset_20);

    tcase_add_test(tc_strcat, strcat_1);
    tcase_add_test(tc_strcat, strcat_2);
    tcase_add_test(tc_strcat, strcat_3);
    tcase_add_test(tc_strcat, strcat_4);
    tcase_add_test(tc_strcat, strcat_5);
    tcase_add_test(tc_strcat, strcat_6);
    tcase_add_test(tc_strcat, strcat_7);
    tcase_add_test(tc_strcat, strcat_8);
    tcase_add_test(tc_strcat, strcat_9);
    tcase_add_test(tc_strcat, strcat_10);
    tcase_add_test(tc_strcat, strcat_11);
    tcase_add_test(tc_strcat, strcat_12);
    tcase_add_test(tc_strcat, strcat_13);
    tcase_add_test(tc_strcat, strcat_14);
    tcase_add_test(tc_strcat, strcat_15);
    tcase_add_test(tc_strcat, strcat_16);
    tcase_add_test(tc_strcat, strcat_17);
    tcase_add_test(tc_strcat, strcat_18);
    tcase_add_test(tc_strcat, strcat_19);
    tcase_add_test(tc_strcat, strcat_20);

    tcase_add_test(tc_strncat, strncat_1);
    tcase_add_test(tc_strncat, strncat_2);
    tcase_add_test(tc_strncat, strncat_3);
    tcase_add_test(tc_strncat, strncat_4);
    tcase_add_test(tc_strncat, strncat_5);
    tcase_add_test(tc_strncat, strncat_6);
    tcase_add_test(tc_strncat, strncat_7);
    tcase_add_test(tc_strncat, strncat_8);
    tcase_add_test(tc_strncat, strncat_9);
    tcase_add_test(tc_strncat, strncat_10);
    tcase_add_test(tc_strncat, strncat_11);
    tcase_add_test(tc_strncat, strncat_12);
    tcase_add_test(tc_strncat, strncat_13);
    tcase_add_test(tc_strncat, strncat_14);
    tcase_add_test(tc_strncat, strncat_16);
    tcase_add_test(tc_strncat, strncat_17);
    tcase_add_test(tc_strncat, strncat_18);
    tcase_add_test(tc_strncat, strncat_19);
    tcase_add_test(tc_strncat, strncat_20);

    tcase_add_test(tc_strchr, strchr_1);
    tcase_add_test(tc_strchr, strchr_2);
    tcase_add_test(tc_strchr, strchr_3);
    tcase_add_test(tc_strchr, strchr_4);
    tcase_add_test(tc_strchr, strchr_5);
    tcase_add_test(tc_strchr, strchr_6);
    tcase_add_test(tc_strchr, strchr_7);
    tcase_add_test(tc_strchr, strchr_8);
    tcase_add_test(tc_strchr, strchr_9);
    tcase_add_test(tc_strchr, strchr_10);
    tcase_add_test(tc_strchr, strchr_11);
    //  tcase_add_test(tc_strchr, strchr_12);
    tcase_add_test(tc_strchr, strchr_13);
    //  tcase_add_test(tc_strchr, strchr_14);
    //  tcase_add_test(tc_strchr, strchr_15);
    //  tcase_add_test(tc_strchr, strchr_16);
    tcase_add_test(tc_strchr, strchr_17);
    tcase_add_test(tc_strchr, strchr_18);
    tcase_add_test(tc_strchr, strchr_19);
    tcase_add_test(tc_strchr, strchr_20);
    tcase_add_test(tc_strchr, strchr_21);

    tcase_add_test(tc_strcmp, strcmp_1);
    tcase_add_test(tc_strcmp, strcmp_2);
    tcase_add_test(tc_strcmp, strcmp_3);
    tcase_add_test(tc_strcmp, strcmp_4);
    tcase_add_test(tc_strcmp, strcmp_5);
    tcase_add_test(tc_strcmp, strcmp_6);
    tcase_add_test(tc_strcmp, strcmp_7);
    tcase_add_test(tc_strcmp, strcmp_8);
    tcase_add_test(tc_strcmp, strcmp_9);
    tcase_add_test(tc_strcmp, strcmp_10);
    tcase_add_test(tc_strcmp, strcmp_11);
    tcase_add_test(tc_strcmp, strcmp_12);
    tcase_add_test(tc_strcmp, strcmp_13);
    tcase_add_test(tc_strcmp, strcmp_14);
    tcase_add_test(tc_strcmp, strcmp_15);
    tcase_add_test(tc_strcmp, strcmp_16);
    tcase_add_test(tc_strcmp, strcmp_17);
    tcase_add_test(tc_strcmp, strcmp_18);
    tcase_add_test(tc_strcmp, strcmp_19);
    tcase_add_test(tc_strcmp, strcmp_20);

    tcase_add_test(tc_strncmp, strncmp_1);
    tcase_add_test(tc_strncmp, strncmp_2);
    tcase_add_test(tc_strncmp, strncmp_3);
    tcase_add_test(tc_strncmp, strncmp_4);
    tcase_add_test(tc_strncmp, strncmp_5);
    tcase_add_test(tc_strncmp, strncmp_6);
    tcase_add_test(tc_strncmp, strncmp_7);
    tcase_add_test(tc_strncmp, strncmp_8);
    tcase_add_test(tc_strncmp, strncmp_9);
    tcase_add_test(tc_strncmp, strncmp_10);
    tcase_add_test(tc_strncmp, strncmp_11);
    tcase_add_test(tc_strncmp, strncmp_12);
    tcase_add_test(tc_strncmp, strncmp_13);
    tcase_add_test(tc_strncmp, strncmp_14);
    tcase_add_test(tc_strncmp, strncmp_15);
    tcase_add_test(tc_strncmp, strncmp_16);
    tcase_add_test(tc_strncmp, strncmp_17);
    tcase_add_test(tc_strncmp, strncmp_18);
    tcase_add_test(tc_strncmp, strncmp_19);
    tcase_add_test(tc_strncmp, strncmp_20);

    tcase_add_test(tc_strcpy, strcpy_1);
    tcase_add_test(tc_strcpy, strcpy_2);
    tcase_add_test(tc_strcpy, strcpy_3);
    tcase_add_test(tc_strcpy, strcpy_4);
    tcase_add_test(tc_strcpy, strcpy_5);
    tcase_add_test(tc_strcpy, strcpy_6);
    tcase_add_test(tc_strcpy, strcpy_7);
    tcase_add_test(tc_strcpy, strcpy_8);
    tcase_add_test(tc_strcpy, strcpy_9);
    tcase_add_test(tc_strcpy, strcpy_10);
    tcase_add_test(tc_strcpy, strcpy_11);
    tcase_add_test(tc_strcpy, strcpy_12);
    tcase_add_test(tc_strcpy, strcpy_13);
    tcase_add_test(tc_strcpy, strcpy_14);
    tcase_add_test(tc_strcpy, strcpy_15);
    tcase_add_test(tc_strcpy, strcpy_16);
    tcase_add_test(tc_strcpy, strcpy_17);
    tcase_add_test(tc_strcpy, strcpy_18);
    tcase_add_test(tc_strcpy, strcpy_19);
    tcase_add_test(tc_strcpy, strcpy_20);

    tcase_add_test(tc_strncpy, strncpy_1);
    tcase_add_test(tc_strncpy, strncpy_2);
    tcase_add_test(tc_strncpy, strncpy_3);
    tcase_add_test(tc_strncpy, strncpy_4);
    tcase_add_test(tc_strncpy, strncpy_5);
    tcase_add_test(tc_strncpy, strncpy_6);
    tcase_add_test(tc_strncpy, strncpy_7);
    tcase_add_test(tc_strncpy, strncpy_8);
    tcase_add_test(tc_strncpy, strncpy_9);
    tcase_add_test(tc_strncpy, strncpy_10);
    tcase_add_test(tc_strncpy, strncpy_11);
    tcase_add_test(tc_strncpy, strncpy_12);
    tcase_add_test(tc_strncpy, strncpy_13);
    tcase_add_test(tc_strncpy, strncpy_14);
    tcase_add_test(tc_strncpy, strncpy_15);
    tcase_add_test(tc_strncpy, strncpy_16);
    tcase_add_test(tc_strncpy, strncpy_17);
    tcase_add_test(tc_strncpy, strncpy_18);
    tcase_add_test(tc_strncpy, strncpy_19);
    tcase_add_test(tc_strncpy, strncpy_20);

    tcase_add_test(tc_strcspn, strcspn_1);
    tcase_add_test(tc_strcspn, strcspn_2);
    tcase_add_test(tc_strcspn, strcspn_3);
    tcase_add_test(tc_strcspn, strcspn_4);
    tcase_add_test(tc_strcspn, strcspn_5);
    tcase_add_test(tc_strcspn, strcspn_6);
    tcase_add_test(tc_strcspn, strcspn_7);
    tcase_add_test(tc_strcspn, strcspn_8);
    tcase_add_test(tc_strcspn, strcspn_9);
    tcase_add_test(tc_strcspn, strcspn_10);
    tcase_add_test(tc_strcspn, strcspn_11);
    tcase_add_test(tc_strcspn, strcspn_12);
    tcase_add_test(tc_strcspn, strcspn_13);
    tcase_add_test(tc_strcspn, strcspn_14);
    tcase_add_test(tc_strcspn, strcspn_15);
    tcase_add_test(tc_strcspn, strcspn_16);
    tcase_add_test(tc_strcspn, strcspn_17);
    tcase_add_test(tc_strcspn, strcspn_18);
    tcase_add_test(tc_strcspn, strcspn_19);
    tcase_add_test(tc_strcspn, strcspn_20);

    tcase_add_test(tc_strerror, strerror_1);
    tcase_add_test(tc_strerror, strerror_2);
    tcase_add_test(tc_strerror, strerror_3);
    tcase_add_test(tc_strerror, strerror_4);
    tcase_add_test(tc_strerror, strerror_5);
    tcase_add_test(tc_strerror, strerror_6);
    tcase_add_test(tc_strerror, strerror_7);
    tcase_add_test(tc_strerror, strerror_8);
    tcase_add_test(tc_strerror, strerror_9);
    tcase_add_test(tc_strerror, strerror_10);
    tcase_add_test(tc_strerror, strerror_11);
    tcase_add_test(tc_strerror, strerror_12);
    tcase_add_test(tc_strerror, strerror_13);
    tcase_add_test(tc_strerror, strerror_14);
    tcase_add_test(tc_strerror, strerror_15);
    tcase_add_test(tc_strerror, strerror_16);
    tcase_add_test(tc_strerror, strerror_17);
    tcase_add_test(tc_strerror, strerror_18);
    tcase_add_test(tc_strerror, strerror_19);
    tcase_add_test(tc_strerror, strerror_20);
    tcase_add_test(tc_strerror, strerror_21);
    tcase_add_test(tc_strerror, strerror_22);
    tcase_add_test(tc_strerror, strerror_23);
    tcase_add_test(tc_strerror, strerror_24);
    tcase_add_test(tc_strerror, strerror_25);
    tcase_add_test(tc_strerror, strerror_26);
    tcase_add_test(tc_strerror, strerror_27);
    tcase_add_test(tc_strerror, strerror_28);
    tcase_add_test(tc_strerror, strerror_29);
    tcase_add_test(tc_strerror, strerror_30);
    tcase_add_test(tc_strerror, strerror_31);
    tcase_add_test(tc_strerror, strerror_32);
    tcase_add_test(tc_strerror, strerror_33);
    tcase_add_test(tc_strerror, strerror_34);
    tcase_add_test(tc_strerror, strerror_35);
    tcase_add_test(tc_strerror, strerror_36);
    tcase_add_test(tc_strerror, strerror_37);
    tcase_add_test(tc_strerror, strerror_38);
    tcase_add_test(tc_strerror, strerror_39);
    tcase_add_test(tc_strerror, strerror_40);
    tcase_add_test(tc_strerror, strerror_41);
    tcase_add_test(tc_strerror, strerror_42);
    tcase_add_test(tc_strerror, strerror_43);
    tcase_add_test(tc_strerror, strerror_44);
    tcase_add_test(tc_strerror, strerror_45);
    tcase_add_test(tc_strerror, strerror_46);
    tcase_add_test(tc_strerror, strerror_47);
    tcase_add_test(tc_strerror, strerror_48);
    tcase_add_test(tc_strerror, strerror_49);
    tcase_add_test(tc_strerror, strerror_50);
    tcase_add_test(tc_strerror, strerror_51);
    tcase_add_test(tc_strerror, strerror_52);
    tcase_add_test(tc_strerror, strerror_53);
    tcase_add_test(tc_strerror, strerror_54);
    tcase_add_test(tc_strerror, strerror_55);
    tcase_add_test(tc_strerror, strerror_56);
    tcase_add_test(tc_strerror, strerror_57);
    tcase_add_test(tc_strerror, strerror_58);
    tcase_add_test(tc_strerror, strerror_59);
    tcase_add_test(tc_strerror, strerror_60);
    tcase_add_test(tc_strerror, strerror_61);
    tcase_add_test(tc_strerror, strerror_62);
    tcase_add_test(tc_strerror, strerror_63);
    tcase_add_test(tc_strerror, strerror_64);
    tcase_add_test(tc_strerror, strerror_65);
    tcase_add_test(tc_strerror, strerror_66);
    tcase_add_test(tc_strerror, strerror_67);
    tcase_add_test(tc_strerror, strerror_68);
    tcase_add_test(tc_strerror, strerror_69);
    tcase_add_test(tc_strerror, strerror_70);
    tcase_add_test(tc_strerror, strerror_71);
    tcase_add_test(tc_strerror, strerror_72);
    tcase_add_test(tc_strerror, strerror_73);
    tcase_add_test(tc_strerror, strerror_74);
    tcase_add_test(tc_strerror, strerror_75);
    tcase_add_test(tc_strerror, strerror_76);
    tcase_add_test(tc_strerror, strerror_77);
    tcase_add_test(tc_strerror, strerror_78);
    tcase_add_test(tc_strerror, strerror_79);
    tcase_add_test(tc_strerror, strerror_80);
    tcase_add_test(tc_strerror, strerror_81);
    tcase_add_test(tc_strerror, strerror_82);
    tcase_add_test(tc_strerror, strerror_83);
    tcase_add_test(tc_strerror, strerror_84);
    tcase_add_test(tc_strerror, strerror_85);
    tcase_add_test(tc_strerror, strerror_86);
    tcase_add_test(tc_strerror, strerror_87);
    tcase_add_test(tc_strerror, strerror_88);
    tcase_add_test(tc_strerror, strerror_89);
    tcase_add_test(tc_strerror, strerror_90);
    tcase_add_test(tc_strerror, strerror_91);
    tcase_add_test(tc_strerror, strerror_92);
    tcase_add_test(tc_strerror, strerror_93);
    tcase_add_test(tc_strerror, strerror_94);
    tcase_add_test(tc_strerror, strerror_95);
    tcase_add_test(tc_strerror, strerror_96);
    tcase_add_test(tc_strerror, strerror_97);
    tcase_add_test(tc_strerror, strerror_98);
    tcase_add_test(tc_strerror, strerror_99);
    tcase_add_test(tc_strerror, strerror_100);
    tcase_add_test(tc_strerror, strerror_101);
    tcase_add_test(tc_strerror, strerror_102);
    tcase_add_test(tc_strerror, strerror_103);
    tcase_add_test(tc_strerror, strerror_104);
    tcase_add_test(tc_strerror, strerror_105);
    tcase_add_test(tc_strerror, strerror_106);
    tcase_add_test(tc_strerror, strerror_107);
    tcase_add_test(tc_strerror, strerror_108);
    tcase_add_test(tc_strerror, strerror_109);

    tcase_add_test(tc_strlen, strlen_1);
    tcase_add_test(tc_strlen, strlen_2);
    tcase_add_test(tc_strlen, strlen_3);
    tcase_add_test(tc_strlen, strlen_4);
    tcase_add_test(tc_strlen, strlen_5);
    tcase_add_test(tc_strlen, strlen_6);
    tcase_add_test(tc_strlen, strlen_7);
    tcase_add_test(tc_strlen, strlen_8);
    tcase_add_test(tc_strlen, strlen_9);
    tcase_add_test(tc_strlen, strlen_10);
    tcase_add_test(tc_strlen, strlen_11);
    tcase_add_test(tc_strlen, strlen_12);
    tcase_add_test(tc_strlen, strlen_13);
    tcase_add_test(tc_strlen, strlen_14);
    tcase_add_test(tc_strlen, strlen_16);
    tcase_add_test(tc_strlen, strlen_17);
    tcase_add_test(tc_strlen, strlen_18);
    tcase_add_test(tc_strlen, strlen_19);
    tcase_add_test(tc_strlen, strlen_20);

    tcase_add_test(tc_strpbrk, strpbrk_1);
    tcase_add_test(tc_strpbrk, strpbrk_2);
    tcase_add_test(tc_strpbrk, strpbrk_3);
    tcase_add_test(tc_strpbrk, strpbrk_4);
    tcase_add_test(tc_strpbrk, strpbrk_5);
    tcase_add_test(tc_strpbrk, strpbrk_6);
    tcase_add_test(tc_strpbrk, strpbrk_7);
    tcase_add_test(tc_strpbrk, strpbrk_8);
    tcase_add_test(tc_strpbrk, strpbrk_9);
    tcase_add_test(tc_strpbrk, strpbrk_10);
    tcase_add_test(tc_strpbrk, strpbrk_11);
    tcase_add_test(tc_strpbrk, strpbrk_12);
    tcase_add_test(tc_strpbrk, strpbrk_13);
    tcase_add_test(tc_strpbrk, strpbrk_14);
    tcase_add_test(tc_strpbrk, strpbrk_15);
    tcase_add_test(tc_strpbrk, strpbrk_16);
    tcase_add_test(tc_strpbrk, strpbrk_17);
    tcase_add_test(tc_strpbrk, strpbrk_18);
    tcase_add_test(tc_strpbrk, strpbrk_19);
    tcase_add_test(tc_strpbrk, strpbrk_20);

    tcase_add_test(tc_strrchr, strrchr_1);
    tcase_add_test(tc_strrchr, strrchr_2);
    tcase_add_test(tc_strrchr, strrchr_3);
    tcase_add_test(tc_strrchr, strrchr_4);
    tcase_add_test(tc_strrchr, strrchr_5);
    tcase_add_test(tc_strrchr, strrchr_6);
    tcase_add_test(tc_strrchr, strrchr_7);
    tcase_add_test(tc_strrchr, strrchr_8);
    tcase_add_test(tc_strrchr, strrchr_9);
    tcase_add_test(tc_strrchr, strrchr_10);
    tcase_add_test(tc_strrchr, strrchr_11);
    tcase_add_test(tc_strrchr, strrchr_12);
    tcase_add_test(tc_strrchr, strrchr_13);
    tcase_add_test(tc_strrchr, strrchr_14);
    tcase_add_test(tc_strrchr, strrchr_15);
    tcase_add_test(tc_strrchr, strrchr_16);
    tcase_add_test(tc_strrchr, strrchr_17);
    tcase_add_test(tc_strrchr, strrchr_18);
    tcase_add_test(tc_strrchr, strrchr_19);
    tcase_add_test(tc_strrchr, strrchr_20);

    tcase_add_test(tc_strspn, strspn_1);
    tcase_add_test(tc_strspn, strspn_2);
    tcase_add_test(tc_strspn, strspn_3);
    tcase_add_test(tc_strspn, strspn_4);
    tcase_add_test(tc_strspn, strspn_5);
    tcase_add_test(tc_strspn, strspn_6);
    tcase_add_test(tc_strspn, strspn_7);
    tcase_add_test(tc_strspn, strspn_8);
    tcase_add_test(tc_strspn, strspn_9);
    tcase_add_test(tc_strspn, strspn_10);
    tcase_add_test(tc_strspn, strspn_11);
    tcase_add_test(tc_strspn, strspn_12);
    tcase_add_test(tc_strspn, strspn_13);
    tcase_add_test(tc_strspn, strspn_14);
    tcase_add_test(tc_strspn, strspn_15);
    tcase_add_test(tc_strspn, strspn_16);
    tcase_add_test(tc_strspn, strspn_17);
    tcase_add_test(tc_strspn, strspn_18);
    tcase_add_test(tc_strspn, strspn_19);
    tcase_add_test(tc_strspn, strspn_20);

    tcase_add_test(tc_strstr, strstr_1);
    tcase_add_test(tc_strstr, strstr_2);
    tcase_add_test(tc_strstr, strstr_3);
    tcase_add_test(tc_strstr, strstr_4);
    tcase_add_test(tc_strstr, strstr_5);
    tcase_add_test(tc_strstr, strstr_6);
    tcase_add_test(tc_strstr, strstr_7);
    tcase_add_test(tc_strstr, strstr_8);
    tcase_add_test(tc_strstr, strstr_9);
    tcase_add_test(tc_strstr, strstr_10);
    tcase_add_test(tc_strstr, strstr_11);
    tcase_add_test(tc_strstr, strstr_12);
    tcase_add_test(tc_strstr, strstr_13);
    tcase_add_test(tc_strstr, strstr_14);
    tcase_add_test(tc_strstr, strstr_15);
    tcase_add_test(tc_strstr, strstr_16);
    tcase_add_test(tc_strstr, strstr_17);
    tcase_add_test(tc_strstr, strstr_18);
    tcase_add_test(tc_strstr, strstr_19);
    tcase_add_test(tc_strstr, strstr_20);

    tcase_add_test(tc_strtok, strtok_1);
    tcase_add_test(tc_strtok, strtok_2);
    tcase_add_test(tc_strtok, strtok_3);
    tcase_add_test(tc_strtok, strtok_4);
    tcase_add_test(tc_strtok, strtok_5);
    tcase_add_test(tc_strtok, strtok_6);
    tcase_add_test(tc_strtok, strtok_7);
    tcase_add_test(tc_strtok, strtok_8);
    tcase_add_test(tc_strtok, strtok_9);
    tcase_add_test(tc_strtok, strtok_10);
    tcase_add_test(tc_strtok, strtok_11);
    tcase_add_test(tc_strtok, strtok_12);
    tcase_add_test(tc_strtok, strtok_13);
    tcase_add_test(tc_strtok, strtok_14);
    tcase_add_test(tc_strtok, strtok_15);
    tcase_add_test(tc_strtok, strtok_16);
    tcase_add_test(tc_strtok, strtok_17);
    tcase_add_test(tc_strtok, strtok_18);
    tcase_add_test(tc_strtok, strtok_19);
    tcase_add_test(tc_strtok, strtok_20);

    suite_add_tcase(s, tc_memchr);
    suite_add_tcase(s, tc_memcmp);
    suite_add_tcase(s, tc_memcpy);
    suite_add_tcase(s, tc_memmove);
    suite_add_tcase(s, tc_memset);
    suite_add_tcase(s, tc_strcat);
    suite_add_tcase(s, tc_strncat);
    suite_add_tcase(s, tc_strchr);
    suite_add_tcase(s, tc_strcmp);
    suite_add_tcase(s, tc_strncmp);
    suite_add_tcase(s, tc_strcpy);
    suite_add_tcase(s, tc_strncpy);
    suite_add_tcase(s, tc_strcspn);
    suite_add_tcase(s, tc_strerror);
    suite_add_tcase(s, tc_strlen);
    suite_add_tcase(s, tc_strpbrk);
    suite_add_tcase(s, tc_strrchr);
    suite_add_tcase(s, tc_strspn);
    suite_add_tcase(s, tc_strstr);
    suite_add_tcase(s, tc_strtok);

    return s;
}

int main() {
    to_upper_tests();  // bonus function 1
    to_lower_tests();  // bonus function 2
    sprintf_c_tests();  // sprintf_c
    sprintf_s_tests();  // sprintf_s
    sprintf_f_tests();  // sprintf_f
    sprintf_u_tests();  // sprintf_u
    sprintf_d_tests();  // sprintf_d
    sprintf_i_tests();  // sprintf_i
    sprintf_h_tests();  // sprintf_h
    sprintf_l_tests();  // sprintf_h
    Suite *s;
    SRunner *runner;
    s = s21_stringh_tests();
    runner = srunner_create(s);
    srunner_run_all(runner, CK_NORMAL);
    srunner_free(runner);
    return 0;
}
