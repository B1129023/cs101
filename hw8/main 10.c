/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n=1;
int y;
void get_digit(int i){
    while(i/10!=0){
        n+=1;
        i/=10;
    }
}
void power_of_n(int i){
    y=1;
    for(int x=0;x<i;x++){
        y*=10;
    }
}
int main()
{
    int x=1234;
    int sum=0;
    get_digit(x);
    for(int i=0;i<n;i++){
        power_of_n(n-1-i);
        sum=sum+((x%10)*y);
        x/=10;
    }
    printf("sum=%d\n",sum);
    return 0;
}


