/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n;
void get_digit(int i){
    n=1;
    while(i/10!=0){
        n+=1;
        i/=10;
    }
}
int main()
{
    int a=999;
    int b=-999;
    int fa=0;
    int fb=0;
    get_digit(a);
    if(a>0){
        for(int i=0;i<n;i++){
            fa+=a%10;
            a/=10;
        }
    }
    else{
        a*=-1;
        for(int i=0;i<n;i++){
            if(i==n-1){
                fa-=a%10;
            }
            else{
                fa+=a%10;
            }
            a/=10;
        }
    }
    get_digit(b);
    if(b>0){
        for(int i=0;i<n;i++){
            fb+=b%10;
            b/=10;
        }
    }
    else{
        b*=-1;
        for(int i=0;i<n;i++){
            if(i==n-1){
                fb-=b%10;
            }
            else{
                fb+=b%10;
            }
            b/=10;
        }
    }
    printf("a=%d\n",fa);
    printf("b=%d\n",fb);
    return 0;
}


