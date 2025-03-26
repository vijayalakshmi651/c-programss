/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int equal(int a, int b);
int not_equal(int a, int b);
int greater(int a, int b);
int less(int a, int b);
int greater_equal(int a, int b);
int less_equal(int a, int b);

int main() {
    int a = 10, b = 15;
    printf("%p\n", &a);
    printf("%p\n", &b);
    
    printf("Equal result: %d\n", equal(a, b));
    printf("Not Equal result: %d\n", not_equal(a, b));
    printf("Greater result: %d\n", greater(a, b));
    printf("Less result: %d\n", less(a, b));
    printf("Greater or Equal result: %d\n", greater_equal(a, b));
    printf("Less or Equal  result: %d\n", less_equal(a, b));

    return 0;
}
int equal(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
    if (*x == *y){
        return 1;
    }
    return 0;
}
int not_equal(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
    if(*x != *y){
        return 1;
    }
    return 0;
}
int greater(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
    return(*x > *y);
}


int less(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
    return (*x < *y);
}
int greater_equal(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
    return (*x >= *y);
}
int less_equal(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
    return (*x <= *y) ;
}
