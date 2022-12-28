/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=n+1;j>0;j--){
            if(j==1){
                printf("\n",i);
            }
            else if(j-i>1){
                printf(" ");
            }
            else{
                printf(" %d",i);
            }
        }    
        
    }

    return 0;
}
