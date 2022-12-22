/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=10;
    if(i>0){
        if(i&i-1){
            printf("%d is false",i);
        }
        else{
            printf("%d is true",i);
        }
    }
    else{
        printf("%d is false",i);
    }
    return 0;
}