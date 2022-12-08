#include <iostream>
#include <stdlib.h>

void calculate_fib(int fib[3]);

int main(){
    system("CLS");
    int fib[3] = {1, 2, 3}, sum=2;
    
    while(fib[2] < 4000000){
        calculate_fib(fib);
        sum += (!(fib[2]%2)) ? fib[2] : 0;
    }
    std::cout<<sum<<std::endl;
    return 0;
}

void calculate_fib(int fib[3]){
    fib[0] = fib[1];
    fib[1] = fib[2];
    fib[2] = fib[0] + fib[1];
}