/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    char str[100];
    int i=0,n=0;
    printf("enter a string ");
       scanf("%s",str);
       while(str[n]!='\0'){
           n++;
       }
    str[n]='\0';
    for(i=n-1;i>=0;i--){
        printf("%c",str[i]);
        
    }

    return 0;
}