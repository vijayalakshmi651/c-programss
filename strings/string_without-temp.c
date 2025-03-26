/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[20];
    int n;
    printf("enter a string length");
    scanf("%d",&n);
    printf("enter a string");
    //for(int i=0;i<n;i++){
        scanf("%s",a);
    //}
    for(int i=n-1;i>=0;i--){
        printf("%c",a[i]);
    }
    

    return 0;
}
