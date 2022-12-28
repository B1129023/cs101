/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x=0;
    int f=1;
    double pi=4.0;
    long long int fpi=0;
    for(int i=3;i<=1000000;i+=2){
        if(f==0){
            pi+=(4.0/i);
            f++;
        }
        else{
            pi-=(4.0/i);
            f--;
        }
        fpi=pi*100000;
        if(fpi==314159){
            x=i;
            break;
        }
    }
    printf("%d %.5f",x,pi);
    return 0;
}