/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int rows=3;
void print_spaces(int n){
    for(int i=0;i<7-n;i++){
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
void print_truck(){
   for(int i=0;i<5;i++){
        print_spaces(0);
        printf("*\n");
   }
}
int main()
{
    printf("   X'mas tree！\n");
    for(int i=0;i<3;i++){
        print_tops();
        rows+=2;
    }
    print_truck();
    return 0;
}
