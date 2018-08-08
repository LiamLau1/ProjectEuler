#include <stdio.h>
#include <math.h>

#define N 60

int main(){
    unsigned long grandparent = 1;
    unsigned long parent = 1;
    unsigned long kid;
    unsigned long running_total = 2;
    for(unsigned long i = 1; i < N - 1; i++){
        kid = grandparent + parent;
        if(kid % 2 ==0 ){
            running_total = running_total + kid;
        }
        grandparent = parent;
        parent = kid;
    }

    printf( "\n The desired Fibonacci number is: %lu \n \n The running total is: %lu \n" , kid, running_total);
    return 0;
}
