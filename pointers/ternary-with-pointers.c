/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int my_ternary(int p,int q){
    int *x,*y;
    x=&p;
    y=&q;
    (*x>*y)?printf("true"):printf("false");
}
int main()
{
    int b=10,a=15;
    my_ternary(a,b);

    return 0;
}
