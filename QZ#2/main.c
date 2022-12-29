/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void print_space(int r){
    for(int i=0;i<r;i++){
        printf("  ");
    }
}
void print_star(int row,int r){
    for(int i=0;i<2*row-(2*r+1);i++){
        printf("* ");
    }
}
int main()
{
    int row=5;
    for(int r=0;r<row;r++){
        print_space(r);
        print_star(row,r);
        printf("\n");
    }
}
