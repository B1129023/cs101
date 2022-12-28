/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=12345;
    int x=i%10;
    int y=(i/1000)%10;
    if(i>=1000){
        printf("\t%d",i+y-x+1000*(x-y));
    }
    else{
        printf("\t%d",i-x+x*1000);
    }
    return 0;
}
