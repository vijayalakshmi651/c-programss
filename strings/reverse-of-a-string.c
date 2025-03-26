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
    //int size;
    
    //printf("enter the size");
    //scanf("%d",&size);
    char str[6];
    printf("enter elements");
    scanf("%s",str);
    int a=strlen(str);
    for(int i=6-1;i>=0;i--)
    {
        printf("%c",str[i]); 
    }
     

    return 0;
}
