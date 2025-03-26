/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int assign(int a, int b);
int add_assign(int a, int b);
int sub_assign(int a, int b);
int mul_assign(int a, int b);
int div_assign(int a, int b);
int mod_assign(int a, int b);
int leftshift_assign(int a,int b);
int rightshift_assign(int a,int b);


int main() {
    int a = 10, b = 15;
    printf("%p\n", &a);
    printf("%p\n", &b);
    
   printf("assign: %d\n", assign(a, b));
    printf("add_assign: %d\n",add_assign(a, b));
    printf("sub_assign: %d\n",sub_assign(a, b));
    printf("mul_assign: %d\n", mul_assign(a, b));
    printf("div_assign: %d\n", div_assign(a, b));
    printf("mod_assign: %d\n", mod_assign(a, b));
    printf("left shift result is: %d\n",  leftshift_assign(a, b));
    printf("right shift result is: %d\n",rightshift_assign(a, b));
    return 0;
}
int assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x=*y;
    
}
int add_assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x += *y;
  
}
int sub_assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x -= *y;
}
int mul_assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x *= *y;
}
int div_assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x/=*y;
}
int mod_assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x%*y;
}
int leftshift_assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x<<*y;
}
int rightshift_assign(int a, int b) {
    int *x, *y;
    x = &a;
    y = &b;
  return  *x<<*y;
}
