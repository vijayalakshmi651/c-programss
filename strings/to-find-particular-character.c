/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    int count=0;
    char a[10];
    char b;
    printf("enter a string");
    scanf("%s",a);
    printf("enter a character");
    scanf(" %c",&b);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b)
        {
            count++;
        }
    }
    printf("%d",count);
    

    return 0;
}
