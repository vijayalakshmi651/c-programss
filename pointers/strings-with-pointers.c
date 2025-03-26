/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int my_strcpy(char *str1,char *str2);

int main(){
    

char str1[]="hello world";
char str2[]="world";
my_strcpy(str1,str2);
printf("the copied string is %s\n",str1);

   

    return 0;
}
int my_strcpy(char *str1,char *str2){
    while(*str2){
        *str1=*str2;
        str1++;
        str2++;
        
    }
    *str1='\0';
}