/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num=0,sign=1,i=0;
    char a[10];
    printf("enter a number");
    scanf("%s",a);
    if(a[i]=='-'){
    sign= -1;
    i++;
    }
    while(a[i]>='0' && a[i]<='9'){
        num=num*10+(a[i]-'0');
        i++;
    }
    num=num*sign;
    printf("converted intege %d",num);

    return 0;
}
