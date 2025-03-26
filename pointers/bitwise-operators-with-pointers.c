/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int my_and(int a, int b);
int my_or(int a, int b);
int my_not_1(int a, int b);
int my_not_2(int a, int b);
int my_xor(int a, int b);
int my_leftshift(int a, int b);
int my_rightshift(int a, int b);
int main() {
    int a = 10, b = 15;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("and: %d\n", my_and(a, b));
    printf("or: %d\n",my_or(a, b));
    printf("not: %d\n",my_not_1(a, b));
    printf("not: %d\n",my_not_2(a, b));
    printf("xor: %d\n", my_xor(a, b));
    printf("rightshift: %d\n",my_rightshift(a, b));
    printf("leftshift: %d\n", my_leftshift(a, b));
    return 0;
}
int my_and(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  a&b;
    
}
int my_or(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  a|b;
  
}
int my_not_1(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  ~a;
}
int my_xor(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  a^b;
}
int my_rightshift(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return a>>b;
}
int my_leftshift(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  a<<b;
}
int my_not_2(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  ~b;
}
