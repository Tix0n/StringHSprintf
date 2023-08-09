#include "s21_string.h"
static void (*prs[8])(char* input, int *index, elem* elem, int* mode);
static void prs_percent_symbol(char* input, int *index, elem* elem, int* mode);
static void prs_flag(char* input, int *index, elem* elem, int* mode);
static void prs_width(char* input, int *index, elem* elem, int* mode);
static void prs_precision(char* input, int *index, elem* elem, int* mode);
static void prs_length(char* input, int *index, elem* elem, int* mode);
static void prs_type(char* input, int *index, elem* elem, int* mode);
static void prs_non_percent(char* input, int *index, elem* elem, int* mode);

s21_size_t s21_strlen(const char *str) {
    s21_size_t len = 0;
    for (; str[len]; len++) {}
    return len;
}

void *s21_memchr(const void *str, int c, s21_size_t n) {
    const char *nStr = str;
    long unsigned check = -1;
    for (int i = 0; (long unsigned) i < n && (int) check == -1; i++) {
        if (*(nStr + i) == c) {
            check = i;
        }
    }
    return ((int) check != -1) ? (void *) ((nStr + check)) : s21_NULL;
}

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
    s21_size_t i = 0;
    while ((*(char *) (str1 + i) == *(char *) (str2 + i)) && i + 1 < n)
        i++;
    return (n != 0) ? (*(char *) (str1 + i) - *(char *) (str2 + i)) : 0;
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
    for (s21_size_t i = 0; i < n; i++) {
        ((char *) dest)[i] = ((char *) src)[i];
    }
    return dest;
}

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
    char *nDest = dest;
    const char *nSrc = src;

    char *temp = malloc(sizeof(char) * n);
    if (temp == s21_NULL) {
        return s21_NULL;
    } else {
        for (int i = 0; (unsigned long) i < n; i++) {
            *(temp + i) = *(nSrc + i);
        }
        for (int i = 0; (unsigned long) i < n; i++) {
            *(nDest + i) = *(temp + i);
        }
        free(temp);
    }
    return nDest;
}

void *s21_memset(void *str, int c, s21_size_t n) {
    char *nStr = str;
    for (int i = 0; i < (int) n; i++) {
        (*(nStr + i)) = (char) c;
    }
    return (void *) nStr;
}

char *s21_strcat(char *dest, const char *src) {
    int dest_len = s21_strlen(dest);
    int i = 0;

    for (; src[i]; i++) {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}

char *s21_strncat(char *dest, const char *src, size_t n) {
    size_t dest_lenght = s21_strlen(dest);
    size_t i = 0;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_lenght + i] = src[i];
    }
    dest[dest_lenght + i] = '\0';
    return dest;
}

char *s21_strchr(const char *str, int c) {
    char *result = (char *) str;
    char ch = (char) c;
    for (; *result && ch != *result; result++) {}
    if ((s21_size_t) (result - str) == s21_strlen(str))
        result = s21_NULL;
    if (c == 0)
        result = "";
    return result;
}

int s21_strcmp(const char *str1, const char *str2) {
    for (; *str1 && *str2 == *str1;) {
        str1++;
        str2++;
    }
    int difference = *str1 - *str2;
    if (difference < 0) {
        difference = -1;
    } else {
        if (difference > 0)
            difference = 1;
    }
    return difference;
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
    s21_size_t i = 0;
    if (n > s21_strlen(str1) && n > s21_strlen(str2))
        n = s21_strlen(str1);
    while ((*(char *) (str1 + i) == *(char *) (str2 + i)) && i < n)
        i++;
    return (i == n) ? 0 : (*(char *) (str1 + i) - *(char *) (str2 + i));
}

char *s21_strcpy(char *dest, const char *src) {
    s21_size_t i = 0;
    while (src[i] != '\0') {
        ((char *) dest)[i] = ((char *) src)[i];
        i++;
    }
    ((char *) dest)[i] = ((char *) src)[i];
    return dest;
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
    if (n != 0) {
        char *d = dest;
        const char *s = src;

        do {
            if ((*d++ = *s++) == 0) {
                while (--n != 0)
                    *d++ = 0;
                break;
            }
        } while (--n != 0);
    }
    return dest;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
    s21_size_t kol = 0;
    int flag = 1;
    for (s21_size_t i = 0; i < s21_strlen(str1); i++) {
        for (s21_size_t j = 0; j < s21_strlen(str2); j++) {
            if (str1[i] == str2[j])
                flag = 0;
        }
        if (flag == 1)
            kol++;
    }
    return kol;
}

char *s21_strerror(int errnum) {
    char *res = s21_NULL;
    static char s21_buff[1024] = {'\0'};
    if (errnum < 0 || errnum >= S21_ERROR_LIST) {
        s21_sprintf(s21_buff, "Unknown error: %d", errnum);
        res = s21_buff;
    } else {
        res = (char *) s21_error_list[errnum];
    }

    return res;
}

char *s21_strpbrk(const char *str1, const char *str2) {
    char *result = s21_NULL;
    int flag = 0;
    for (int i = 0; (unsigned long) i < s21_strlen(str1) && flag == 0; i++) {
        for (int j = 0; (unsigned long) j < s21_strlen(str2); j++) {
            if (*(str1 + i) == *(str2 + j)) {
                flag = 1;
                result = (char *) (str1 + i);
            }
        }
    }
    return result;
}

char *s21_strrchr(const char *str, int c) {
    const char *ptr = str;
    int f = 0;
    while (*str) {
        str++;
    }
    while (str >= ptr && f == 0) {
        if (*str == (char) c) {
            f = 1;
        } else {
            str--;
        }
    }
    return f ? (char *) str : s21_NULL;
}

s21_size_t s21_strspn(const char *str1, const char *str2) {
    s21_size_t i = 0;
    while (s21_in(*(str1 + i), str2)) {
        i++;
    }
    return i;
}

char *s21_strstr(const char *haystack, const char *needle) {
    s21_size_t needle_len = s21_strlen(needle);
    int flag = 1;
    if (needle_len) {
        flag = 0;
        s21_size_t haystack_len = s21_strlen(haystack);
        while (haystack_len-- >= needle_len && flag == 0) {
            if (!s21_memcmp(haystack, needle, needle_len))
                flag = 1;
            else
                haystack++;
        }
    }
    return flag ? (char *) haystack : s21_NULL;
}

char *s21_strtok(char *str, const char *delim) {
    static char *memory = s21_NULL;
    if (str)
        memory = str;
    if (memory) {
        str = memory + s21_strspn(memory, delim);
        memory = str + s21_strcspn(str, delim);
        if (*memory != '\0') {
            *memory = '\0';
            ++memory;
        }
    }
    return *str != '\0' ? str : s21_NULL;
}

int s21_in(char c, const char *str) {
    int res = 0;
    for (s21_size_t i = 0; i < s21_strlen(str) && !res; i++)
        res = (*(str + i) == c) ? 1 : res;
    return res;
}

void *s21_to_lower(const char *str) {
    char *res = (char*)str;
    if (str != s21_NULL) {
        int i = 0;
        while (str[i] != '\0') {
            res[i] = str[i];
            if (str[i] <= 'Z' && str[i] >= 'A')
                res[i] += 'a' - 'A';
            i++;
        }
        res[i] = str[i];
    } else {
        res = s21_NULL;
    }
    return res;
}

void *s21_to_upper(const char *str) {
    char *res = (char*)str;
    if (str != s21_NULL) {
        int i = 0;
        while (str[i] != '\0' && str[i] != EOF) {
            res[i] = str[i];
            if (str[i] <= 'z' && str[i] >= 'a')
                res[i] += 'A' - 'a';
            i++;
        }
        res[i] = str[i];
    } else {
        res = s21_NULL;
    }
    return res;
}


int s21_sprintf(char *str, const char *string, ...) {
    *str = '\0';
    elem *arr = s21_NULL;
    va_list ap;
    va_start(ap, string);
    int counter = parse(string, &arr);
    for (int i = 0; i < counter; i++) {
        if (arr[i].type == 117) {
            print_u(ap, arr[i], str);
        }
        if (arr[i].type == 99) {
            print_char(ap, arr[i], str);
        }
        if (arr[i].type == 115) {
            print_string(ap, arr[i], str);
        }
        if (arr[i].type == 102) {
            print_float(ap, arr[i], str);
        }
        if (arr[i].type == -1) {
            char string[1];
            string[0] = arr[i].value;
            s21_strncat(str, string, 1);
        }
        if (arr[i].type == 100 || arr[i].type == 'i') {
            print_d(ap, arr[i], str);
        }
        if (arr[i].type == 37) {
            print_proc(arr[i], str);
        }
    }
    va_end(ap);
    counter = (int) s21_strlen(str);
    free(arr);
    return counter;
}

void addFirst(char* tempstr, char* new_data) {
    char catstr[BUFSIZ] = "\0";
    s21_strcat(catstr, new_data);
    s21_strcat(catstr, tempstr);
    s21_strcpy(tempstr, catstr);
}

int parse(const char *input, elem **arr) {
    prs[0] = prs_percent_symbol;
    prs[1] = prs_flag;
    prs[2] = prs_width;
    prs[3] = prs_precision;
    prs[4] = prs_length;
    prs[5] = prs_type;
    prs[6] = prs_non_percent;
    int index = 0, count = 1, mode = 1, prev = -1;
    *arr = (elem *) malloc(sizeof(elem));
    while (mode && *(input + index) != '\0') {
        (*prs[mode - 1])((char *) input, &index, &(*(*arr + count - 1)), &mode);
        if (prev == 6 || prev == 7) {
                count++;
            *arr = (elem *) realloc(*arr, count * sizeof(elem));
        }
        prev = mode;
    }
    if (!mode)
        arr = s21_NULL;
    return count - 1;
}

int istype(char str) {
    str = (str == 'c' || str == 'd' || str == 'i' || str == 'e' || str == 'E' || str == 'f' || str == 'g' ||
           str == 'G' || str == 'o' || str == 's' || str == 'u' || str == 'x' || str == 'X' || str == 'p' ||
           str == 'n' || str == '%') ? str : -1;
    return str;
}

int isflag(char str) {
    int flag = 0;
    if (str == '+' || str == '-' || str == ' ') {
        flag = 1;
    }
    return flag;
}

void prs_percent_symbol(char *input, int *index, elem *elem, int *mode) {
    elem -> type = -1;
    elem -> precision = -1;
    elem -> width = -1;
    elem -> flag_space = 0;
    elem -> flag_plus = 0;
    elem -> flag_minus = 0;
    elem -> length = 0;
    elem -> precision_set = 0;
    if (*(input + *index) == '%') {
        *index = *index + 1;
        *mode = 2;
    } else {
        *mode = 7;
    }
}

void prs_flag(char *input, int *index, elem *elem, int *mode) {
    while (isflag(*(input + *index))) {
        if ((*(input + *index)) == ' ') {
            elem -> flag_space = 1;
            *index = *index + 1;
        }
        if ((*(input + *index)) == '+') {
            elem -> flag_plus = 1;
            *index = *index + 1;
        }
        if ((*(input + *index)) == '-') {
            elem -> flag_minus = 1;
            *index = *index + 1;
        }
    }
    *mode = 3;
}

void prs_width(char *input, int *index, elem *elem, int *mode) {
    char curr = *(input + *index);
    int width = -1;
    while (curr >= '0' && curr <= '9') {
        width = (width == -1) ? 0 : width;
        width = width * 10;
        width += curr - '0';
        *index = *index + 1;
        curr = *(input + *index);
    }
    elem->width = width;
    *mode = 4;
}

void prs_precision(char *input, int *index, elem *elem, int *mode) {
    char curr = *(input + *index);
    int precision = -1;
    int prev_index;
    if (curr == '.') {
        elem->precision_set = 1;
        *index = *index + 1;
        prev_index = *index;
        curr = *(input + *index);
        while (curr >= '0' && curr <= '9') {
            precision = (precision == -1) ? 0 : precision;
            precision *= 10;
            precision += (int) (curr - '0');
            *index = *index + 1;
            curr = *(input + *index);
        }
        if (prev_index == *index) {
            mode = 0;
        } else {
            *mode = 5;
        }
    } else {
        *mode = 5;
    }
    elem->precision = precision;
}

void prs_length(char *input, int *index, elem *elem, int *mode) {
    char curr = *(input + *index);
    if (curr == 'l' || curr == 'L' || curr == 'h') {
        elem->length = curr;
        *index = *index + 1;
    } else {
        elem->length = 0;
    }
    *mode = 6;
}

void prs_type(char *input, int *index, elem *elem, int *mode) {
    char curr = *(input + *index);
    if (istype(curr) == -1) {
        mode = 0;
        elem -> type = -1;
    } else {
        elem->type = curr;
        *mode = 1;
    }
    *index = *index + 1;
}

void prs_non_percent(char *input, int *index, elem *elem, int *mode) {
    elem->value = *(input + *index);
    elem->type = -1;
    *index = *index + 1;
    *mode = 1;
}

void print_u(va_list ap, elem arr, char *str) {
    uint64_t num = va_arg(ap, uint64_t);
    if (arr.length == 104) {
        num = (uint16_t) num;
    }
    char tempstr[BUFSIZ] = {'\0'};
    conv_unsigned_to_str(num, tempstr);
    unsigned_prec(tempstr, arr);
    unsigned_width(tempstr, arr);
    s21_strcat(str, tempstr);
}

void unsigned_prec(char* tempstr, elem arr) {
    char zerostr[BUFSIZ] = {'\0'};
    if (arr.precision != -1) {
        for (int i = (int)s21_strlen(tempstr); i < arr.precision; i++)
            s21_strcat(zerostr, "0");
    }
    s21_strcat(zerostr, tempstr);
    s21_strcpy(tempstr, zerostr);
}

void unsigned_width(char* tempstr, elem arr) {
    if (arr.width > (int)s21_strlen(tempstr) && arr.width != -1) {
        for (int i = (int)s21_strlen(tempstr); i < arr.width; i++) {
            if (arr.flag_minus == 1) {
                s21_strcat(tempstr, " ");
            } else {
                addFirst(tempstr, " ");
            }
        }
    }
}

void conv_unsigned_to_str(uint64_t i, char *string) {
    uint64_t power = 0, j = 0;
    j = i;
    for (power = 1; j >= 10; j /= 10) {
        power *= 10;
    }
    for (; power > 0; power /= 10) {
        *string++ = '0' + i / power;
        i %= power;
    }
    *string = '\0';
}

void print_float(va_list ap, elem arr, char *str) {
    long double num = 0;
    num = va_arg(ap, double);
    char tempstr[BUFSIZ] = {'\0'};
    conv_float_to_str(num, arr, tempstr);
    float_width(arr, tempstr);
    s21_strcat(str, tempstr);
}

void float_width(elem arr, char* tempstr) {
    if (arr.width > (int)s21_strlen(tempstr) && arr.width != -1) {
        for (int i = (int)s21_strlen(tempstr); i < arr.width; i++) {
            if (arr.flag_minus == 1) {
                s21_strcat(tempstr, " ");
            } else {
                addFirst(tempstr, " ");
            }
        }
    }
}

void conv_float_to_str(long double num, elem arr, char* tempstr) {
    double ipart = 0.0, fpart = 0.0, tempfpart = 0.0;
    long int negative_num = 0, digits = 0;
    fpart = modf(num, &ipart);
    fpart = fabs(fpart);
    char lpartstr[BUFSIZ] = {'\0'}, rpartstr[BUFSIZ] = {'\0'}, resstr[BUFSIZ] = {'\0'};
    if (arr.precision == 0 && arr.precision_set == 0) {
        ipart = roundl(num);
        fpart = 0;
    }
    if (arr.precision_set == 0) {
        arr.precision = 6;
    }
    fpart = fpart * pow(10, arr.precision);
    tempfpart = fpart;
    fpart = roundl(fpart);
    long int intfpart = (long int) fpart, tempintfpart = (long int) tempfpart;
    while (tempintfpart > 0) {
        intfpart /= 10;
        tempintfpart /= 10;
        digits++;
    }
    if (intfpart != tempintfpart && digits == arr.precision) {
        if (num > 0.0) ipart += 1;
        if (num < 0.0) ipart -= 1;
        fpart = 0;
    }
    if (intfpart !=0) digits++;
    if (num < 0) negative_num = 1;
    conv_int_to_str(llabs((long int) ipart), lpartstr);
    conv_int_to_str((long int) fpart, rpartstr);
    s21_strcat(resstr, lpartstr);
    if (negative_num) addFirst(resstr, "-");
    if (arr.precision > 0) {
        s21_strcat(resstr, ".");
        for (int j = digits; j < arr.precision; j++) {
            s21_strcat(resstr, "0");
        }
        int j = (int)s21_strlen(rpartstr) - arr.precision + digits;
        if (j >= arr.precision) j = arr.precision;
        if (j >= 0) s21_strncat(resstr, rpartstr, j);
        if (intfpart != tempintfpart) {
            for (int i = (int) s21_strlen(rpartstr); i < arr.precision; i++) {
                s21_strcat(resstr, "0");
            }
        } else if (intfpart == tempintfpart) {
            for (int i = (int)s21_strlen(resstr) - 1 - (int)s21_strlen(lpartstr); i < arr.precision; i++) {
                s21_strcat(resstr, "0");
            }
        }
    }
    if (arr.flag_space && num > 0) addFirst(resstr, " ");
    if (arr.flag_plus && num > 0) addFirst(resstr, "+");
    s21_strcat(tempstr, resstr);
}

void print_d(va_list ap, elem arr, char *str) {
    int64_t num = va_arg(ap, int64_t);
    if (arr.length == 0) num = (int32_t) num;
    if (arr.length == 'h') num = (int16_t) num;
    char tempstr[BUFSIZ] = {'\0'};
    int negative_num = 0;
    if (num < 0) negative_num = 1;
    conv_int_to_str(num, tempstr);
    int_flags(tempstr, arr, negative_num);
    s21_strcat(str, tempstr);
}

void int_flags(char* tempstr, elem arr, int negative_num) {
    if (arr.precision != -1) {
        for (int i = (int)s21_strlen(tempstr); i < arr.precision; i++) {
            addFirst(tempstr, "0");
        }
    }
    if (negative_num) {
        addFirst(tempstr, "-");
    } else if (arr.flag_plus) {
        addFirst(tempstr, "+");
    } else if (arr.flag_space) {
        addFirst(tempstr, " ");
    }
    if (arr.width > (int)s21_strlen(tempstr) && arr.width != -1) {
        for (int i = (int)s21_strlen(tempstr); i < arr.width; i++) {
            if (arr.flag_minus) {
                s21_strcat(tempstr, " ");
            } else {
                addFirst(tempstr, " ");
            }
        }
    }
}

void conv_int_to_str(int64_t i, char *string) {
    int64_t power = 0, j = 0;
    i = (i < 0) ? -1 * i : i;
    j = i;
    for (power = 1; j >= 10; j /= 10) {
        power *= 10;
    }
    for (; power > 0; power /= 10) {
        *string++ = '0' + i / power;
        i %= power;
    }
    *string = '\0';
}

void print_string(va_list ap, elem arr, char *str) {
    char zero_prob[1000] = {'\0'};
    if (arr.length == 0) {
        char *str1 = va_arg(ap, char *);
        if (str1 == NULL) str1 = "(null)";
        str_proc(arr, str1, zero_prob);
        s21_strcat(str, zero_prob);
    } else if (arr.length == 108) {
        wchar_t *wstr1;
        wstr1 = va_arg(ap, wchar_t *);
        wstr_proc(arr, wstr1, zero_prob);
        s21_strcat(str, zero_prob);
    }
}

void str_proc(elem arr, char *str1, char *zero_prob) {
    int i, j, prob, prec;
    if (arr.precision == -1 || arr.precision >= (int) s21_strlen(str1)) {
        prec = (int) s21_strlen(str1);
        prob = arr.width - prec;
    } else {
        prec = arr.precision;
        prob = arr.width - arr.precision;
    }
    if (arr.flag_minus) {
        for (i = 0; i < prec && arr.precision != 0; i++) {
            zero_prob[i] = str1[i];
        }
        zero_prob[i + 1] = '\0';
        for (j = 0; j < prob; j++) {
            zero_prob[j + i] = ' ';
        }
        zero_prob[i + j + 1] = '\0';
    } else {
        for (i = 0; i < prob; i++) {
            zero_prob[i] = ' ';
        }
        zero_prob[i + 1] = '\0';
        for (j = 0; j < prec && arr.precision != 0; j++) {
            zero_prob[j + i] = str1[j];
        }
        zero_prob[i + j + 1] = '\0';
    }
}

void wstr_proc(elem arr, wchar_t *wstr1, char *zero_prob) {
    char str1[1000] = {'\0'};
    wcstombs(str1, wstr1, 1000);
    int i, j, prob, prec;
    if (arr.precision == -1 || arr.precision >= (int) s21_strlen(str1)) {
        prec = (int) s21_strlen(str1);
        prob = arr.width - prec;
    } else {
        prec = arr.precision;
        prob = arr.width - arr.precision;
    }
    if (arr.flag_minus) {
        for (i = 0; i < prec && arr.precision != 0; i++) {
            zero_prob[i] = str1[i];
        }
        zero_prob[i + 1] = '\0';
        for (j = 0; j < prob; j++) {
            zero_prob[j + i] = ' ';
        }
        zero_prob[i + j + 1] = '\0';
    } else {
        for (i = 0; i < prob; i++) {
            zero_prob[i] = ' ';
        }
        zero_prob[i + 1] = '\0';
        for (j = 0; j < prec && arr.precision != 0; j++) {
            zero_prob[j + i] = str1[j];
        }
        zero_prob[i + j + 1] = '\0';
    }
}

void print_proc(elem arr, char *str) {
    char zero_prob[1000] = {'\0'};
    char proc = '%';
    char_proc(arr, proc, zero_prob);
    s21_strcat(str, zero_prob);
}

void print_char(va_list ap, elem arr, char *str) {
    char zero_prob[1000] = {'\0'};
    wchar_t wchar;
    char ch;
    if (arr.length == 108) {
        wchar = va_arg(ap, wchar_t);
        wchar_proc(arr, wchar, zero_prob);
        s21_strcat(str, zero_prob);
    } else {
        ch = va_arg(ap, int);
        char_proc(arr, ch, zero_prob);
        s21_strcat(str, zero_prob);
    }
}

void wchar_proc(elem arr, wchar_t wchar, char *zero_prob) {
    wchar_t wstr1[1000] = {'\0'};
    wstr1[0] = wchar;
    wstr1[1] = '\0';
    wstr_proc(arr, wstr1, zero_prob);
}

void char_proc(elem arr, char ch, char *zero_prob) {
    int prob, i;
    if (arr.flag_minus == 1) {
        prob = arr.width;
        zero_prob[0] = ch;
        for (i = 1; prob > i; i++) {
            zero_prob[i] = ' ';
        }
        zero_prob[i + 1] = '\0';
    } else {
        prob = arr.width - 1;
        for (i = 0; prob > i; i++) {
            zero_prob[i] = ' ';
        }
        zero_prob[i] = ch;
        zero_prob[i + 1] = '\0';
    }
}
