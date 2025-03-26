/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int my_strcmp(char str1[], char str2[]);
int my_strncmp(char str1[], char str2[], int n);
int my_strchr(char str[], char ch);
int my_strrchr(char str[], char ch);
void my_strcpy(char str1[], char str2[]);
int my_atoi(char str[]);
int my_strstr(char str1[], char str2[]);
void my_strncpy(char str1[], char str2[], int n);
void my_strcat(char str1[], char str2[]);
void my_strncat(char str1[], char str2[], int n);
void my_upper_to_lower(char str[]);
void my_lower_to_upper(char str[]);

int main() {
    char str1[100] = "hello world";
    char str2[100] = "world";
    int index, result, ans, num;

    my_strcpy(str1, str2);
    printf("Copied string: %s\n", str1);

    result = my_strcmp("apple", "bat");
    printf("String compare result: %d\n", result);

    my_strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    my_strncpy(str1, "world", 3);
    printf("The copied strings are: %s\n", str1);

    ans = my_strncmp("apple", "application", 3);
    printf("String compare result: %d\n", ans);

    my_strncat(str1, str2, 3);
    printf("Concatenated string is: %s\n", str1);

    index = my_strstr("hello world", "world");
    printf("Substring found at index: %d\n", index);

    index = my_strchr("hello world", 'o');
    printf("First occurrence of 'o': %d\n", index);

    index = my_strrchr("hello world", 'o');
    printf("Last occurrence of 'o': %d\n", index);

    num = my_atoi("12345");
    printf("Converted integer: %d\n", num);

    char str3[] = "HELLO WORLD";
    my_upper_to_lower(str3);
    printf("Lowercase: %s\n", str3);

    char str4[] = "hello world";
    my_lower_to_upper(str4);
    printf("Uppercase: %s\n", str4);

    return 0;
}
void my_strcpy(char str1[], char str2[]) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}
int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

// Function to concatenate two strings
void my_strcat(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

// Function to copy n characters
void my_strncpy(char str1[], char str2[], int n) {
    int i;
    for (i = 0; i < n && str2[i] != '\0'; i++) {
        str1[i] = str2[i];
    }
    while (i < n) {
        str1[i] = '\0';
        i++;
    }
}

// Function to compare n characters
int my_strncmp(char str1[], char str2[], int n) {
    int i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}

// Function to concatenate n characters
void my_strncat(char str1[], char str2[], int n) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (j < n && str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

// Function to find substring
int my_strstr(char str1[], char str2[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (str2[j] == '\0') {
            return i;
        }
    }
    return -1;
}

// Function to find first occurrence of character
int my_strchr(char str[], char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return i;
        }
        i++;
    }
    return -1;
}

// Function to find last occurrence of character
int my_strrchr(char str[], char ch) {
    int i = 0, index = -1;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            index = i;
        }
        i++;
    }
    return index;
}

// Function to convert string to integer
int my_atoi(char str[]) {
    int i = 0, num = 0;
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return num;
}

// Function to convert uppercase to lowercase
void my_upper_to_lower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
}

// Function to convert lowercase to uppercase
void my_lower_to_upper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}
