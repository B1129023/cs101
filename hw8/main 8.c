/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_spaces(int r,int rows){
    for(int i=0;i<rows-r;i++){
        printf(" ");
    }
}
void print_stars(int r,int rows){
    for(int i=0;i<2*r-1;i++){
        printf("*");
    }
}
int main()
{
    int rows=4;
    for(int i=rows;i>0;i--){
        print_spaces(i,rows);
        print_stars(i,rows);
        printf("\n");
    }
    for(int i=2;i<rows+1;i++){
        print_spaces(i,rows);
        print_stars(i,rows);
        printf("\n");
    }
    return 0;
}

