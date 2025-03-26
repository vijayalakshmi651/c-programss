/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char a[]="malayalam";
   int i=0,j=0;
   while(a[j]!='\0'){
   j++;
   }
   j=j-1;
   
   while(i<j){
       if(a[i]!=a[j])
       break;
       i++;
       j--;
   }
   if(i>=j)
   printf("palindrome");
   else
   printf("not a palindrome");

    return 0;
}
