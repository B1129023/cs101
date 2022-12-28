/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=10;
    if(i%3==0){
        if(i%5!=0){
            printf("\t LOVE");}
        else{
            printf("\t LOVE IU");
        }
    }
    else if(i%5==0){
        printf("\t IU");
    }
    else{
        printf("\t %d",i);
    }
    return 0;
}



