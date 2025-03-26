/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int and(int a,int b);
int or(int a,int b);
int not_1(int a,int b);
int not_2(int a,int b);

int main(){
    int a=10,b=10,result;
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("AND result is :%d\n",and(a,b));
    printf("OR result is :%d\n",or(a,b));
    printf("NOT result is :%d\n",not_1(a,b));
    printf("NOT result is :%d\n",not_2(a,b));
    return 0;
}
int and(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
   if(a && b!=0){
   return 1;
}
return 0;
}
int or(int a, int b){
    int *x,*y;
    x=&a;
    y=&b;
    if(*x||*y){
        return 1;
    }
    return  0;
}
int not_1(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
    if(!*x){
        return 1;
    }
    return 0;
}
int not_2(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
    if(!*y){
        return 1;
    }
    return 0;
}

