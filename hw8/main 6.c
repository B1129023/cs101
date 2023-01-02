/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int rows=4;
void print_spaces(int n){
    for(int i=0;i<rows-n-1;i++){
        printf(" ");
    }
}
void print_stars(int n){
    for(int i=0;i<2*n+1;i++){
        printf("*");
    }    
}
void print_tops(){
    for(int i=0;i<rows;i++){
        print_spaces(i);
        print_stars(i);
        printf("\n");
    }
}
void print_square(){
    for(int i=0;i<rows+2;i++){
        if(i==0 || i==rows+1){
            print_stars(rows-1);
            printf("\n");
        }
        else{
            printf("*");
            for(int i=0;i<2*(rows-1)-1;i++){
                printf(" ");
            }
            printf("*\n");
        }
    }
}
int main()
{
    print_tops();
    print_square();
    return 0;
}

