/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int rows=10;
void print_space(int r){
    for(int i=0;i<2*(rows-r)-1;i++){
        printf(" ");
    }
}
void print_stars(int r){
    for(int i=0;i<2*r+1;i++){
        printf("* ");
    }    
}
int main()
{
    for(int i=0;i<rows;i++){
        print_space(i);
        print_stars(i);
        printf("\n");
    }

    return 0;
}

