/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int string_length(char *str)
{
    int length=0;
    while(*str!='\0'){
        length++;
        str++;
       
    }
   return length;
   
   
}
int main()
{
    char str[100];
    printf("enter a string ");
    fgets(str,sizeof(str),stdin);
   char *p=str;
   while(*p!='\0'){
       if(*p=='\n'){
           *p='\0';
            break;
       }
      p++;
   }
   
    printf("%d",  string_length(str));
    return 0;
}