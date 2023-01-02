/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n=1;
int sum=1;
void get_n(int x){
    while(1){
        if(x/16==0){
            break;
        }
        x/=16;
        n+=1;
    }
}
void power_of_n(int x){
    sum=1;
    for(int i=1;i<x;i++){
        sum*=2;
    }
}
void get_binary(int x){
    get_n(x);
    for(int i=4*n;i>0;i--){
        power_of_n(i);
        int y=sum;
        if(i%4==0){
            printf(" ");
        }
        if(x/y!=0){
            printf("1");
            x%=y;
        }
        else{
            printf("0");
        }
    }
}
int main()
{
    int x=255;
    get_binary(x);
    
    return 0;
}

