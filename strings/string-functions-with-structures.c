/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct string {
    char str[100];
};
struct string my_strcpy(struct string str1, struct string str2);
int my_strncmp(struct string str1, struct string str2, int n);
int my_strstr(struct string str1, struct string str2);
int my_strchr(struct string str, char ch);
int my_atoi(struct string str);
struct string my_strncpy(struct string str1, struct string str2, int n);
struct string my_strcat(struct string str1, struct string str2);
int my_strcmp(struct string str1, struct string str2);
int my_strrchr(struct string str, char ch);
struct string my_strncat(struct string str1, struct string str2, int n);
struct string my_upper_to_lower(struct string str);
struct string my_lower_to_upper(struct string str);
int main() {
    struct string str1 = {"hello world"};
    struct string str2 = {"world"};
    struct string result;
    int index, ans, num;
    result = my_strcpy(str1, str2);
    printf("Copied string: %s\n", result.str);
    ans = my_strcmp(str1, str2);
    printf("String compare result: %d\n", ans);
    result = my_strcat(str1, str2);
    printf("Concatenated string: %s\n", result.str);
    result = my_strncpy(str1, str2, 3);
    printf("Copied string: %s\n", result.str);
    ans = my_strncmp(str1, str2, 3);
    printf("String compare: %d\n", ans);
    result = my_strncat(str1, str2, 3);
    printf("Concatenated string: %s\n", result.str);
    index = my_strstr(str1, str2);
    printf("Substring found at index: %d\n", index);
    index = my_strchr(str1, 'o');
    printf("First occurrence of 'o': %d\n", index);
    index = my_strrchr(str1, 'o');
    printf("Last occurrence of 'o': %d\n", index);
    num = my_atoi((struct string){"12345"});
    printf("Converted integer: %d\n", num);
    result = my_upper_to_lower(str1);
    printf("Lowercase: %s\n", result.str);
    result = my_lower_to_upper(str1);
    printf("Uppercase: %s\n", result.str);
    return 0;
}
struct string my_strcpy(struct string str1, struct string str2) {
    int i = 0;
    while (str2.str[i] != '\0') {
        str1.str[i] = str2.str[i];
        i++;
    }
    str1.str[i] = '\0';
    return str1;
}
int my_strcmp(struct string str1, struct string str2) {
    int i = 0;
    while (str1.str[i] != '\0' && str2.str[i] != '\0') {
        if (str1.str[i] != str2.str[i]) {
            return str1.str[i] - str2.str[i];
        }
        i++;
    }
    return str1.str[i] - str2.str[i];
}
int my_strncmp(struct string str1, struct string str2, int n) {
    int i = 0;
    while (i < n && str1.str[i] != '\0' && str2.str[i] != '\0') {
        if (str1.str[i] != str2.str[i]) {
            return str1.str[i] - str2.str[i];
        }
        i++;
    }
    return 0;
}
struct string my_strcat(struct string str1, struct string str2) {
    int i = 0, j = 0;
    while (str1.str[i] != '\0') {
        i++;
    }
    while (str2.str[j] != '\0') {
        str1.str[i] = str2.str[j];
        i++;
        j++;
    }
    str1.str[i] = '\0';
    return str1;
}
struct string my_strncpy(struct string str1, struct string str2, int n) {
    int i;
    for (i = 0; i < n && str2.str[i] != '\0'; i++) {
        str1.str[i] = str2.str[i];
    }
    while (i < n) {
        str1.str[i] = '\0';
        i++;
    }
    return str1;
}
struct string my_strncat(struct string str1, struct string str2, int n) {
    int i = 0, j = 0;
    while (str1.str[i] != '\0') {
        i++;
    }
    while (j < n && str2.str[j] != '\0') {
        str1.str[i] = str2.str[j];
        i++;
        j++;
    }
    str1.str[i] = '\0';
    return str1;
}
int my_strstr(struct string str1, struct string str2) {
    int i, j;
    for (i = 0; str1.str[i] != '\0'; i++) {
        for (j = 0; str2.str[j] != '\0'; j++) {
            if (str1.str[i + j] != str2.str[j]) {
                break;
            }
        }
        if (str2.str[j] == '\0') {
            return i;
        }
    }
    return -1;
}
int my_strchr(struct string str, char ch) {
    int i = 0;
    while (str.str[i] != '\0') {
        if (str.str[i] == ch) {
            return i;
        }
        i++;
    }
    return -1;
}
int my_strrchr(struct string str, char ch) {
    int i = 0, index = -1;
    while (str.str[i] != '\0') {
        if (str.str[i] == ch) {
            index = i;
        }
        i++;
    }
    return index;
}
int my_atoi(struct string str) {
    int i = 0, num = 0;
    while (str.str[i] >= '0' && str.str[i] <= '9') {
        num = num * 10 + (str.str[i] - '0');
        i++;
    }
    return num;
}
struct string my_upper_to_lower(struct string str) {
    int i = 0;
    while (str.str[i] != '\0') {
        if (str.str[i] >= 'A' && str.str[i] <= 'Z') {
            str.str[i] = str.str[i] + ('a' - 'A');
        }
        i++;
    }
    return str;
}
struct string my_lower_to_upper(struct string str) {
    int i = 0;
    while (str.str[i] != '\0') {
        if (str.str[i] >= 'a' && str.str[i] <= 'z') {
            str.str[i] = str.str[i] - ('a' - 'A');
        }
        i++;
    }
    return str;
}
