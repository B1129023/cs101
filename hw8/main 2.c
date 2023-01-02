/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int f=0;
void modulo(int i){
    if(i%2==1){
        f+=1;
    }
}
int main()
{
    int n=129;
    while(n!=0){
        modulo(n);
        n/=2;
    }
    printf("\t%d",f);
    return 0;
}

