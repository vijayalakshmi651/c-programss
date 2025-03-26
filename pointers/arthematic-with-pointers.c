/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int mod(int a,int b);
int div(int a,int b);
int main(){
    int a=10,b=10,result;
   printf("%p\n",&a);
   printf("%p\n",&b);
   //printf("%ld\n",&b-&a);
   result=add(a,b);
    printf("addition:%d\n",result);
    result=sub(a,b);
    printf("subtraction:%d\n",result);
    result=mul(a,b);
    printf("multiplication:%d\n",result);
    result=mod(a,b);
    printf("the remainder is:%d\n",result);
    result=div(a,b);
    printf("the quotient is :%d\n",result);
    return 0;
}
int add(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
   return *x + *y;
}
int sub(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
   return *x - *y;
}
int mul(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
   return *x * *y;
}
int mod(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
    //printf("diff %ld\n",y-*x);
   return *x % *y;
}
int div(int a,int b){
    int *x,*y;
    x=&a;
    y=&b;
   return *x / *y;
}