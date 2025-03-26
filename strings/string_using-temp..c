/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("enter size of a string ");
    scanf("%d",&n);
    char a[n];
    printf("enter a string ");
    scanf("%s",a);
     char temp[n];
    for(i=0,j=n-1;i<n,j>=0;i++,j--){
    temp[i]=a[j];
    }
    //temp[n]='\0';
    printf("%s",temp);

    return 0;
}
