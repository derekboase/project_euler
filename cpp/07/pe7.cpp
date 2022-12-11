#include <iostream>
#include <stdlib.h>
#include <math.h>

bool is_prime(unsigned int num);

int main(){
    system("CLS");
        int primes = 1, HIGHEST_PRIME = 10001;
        unsigned long int num = 1;
        while(primes < HIGHEST_PRIME){
            if(is_prime(num += 2)) primes++;
        }
        std::cout<<num<<std::endl;
    return 0;
}

bool is_prime(unsigned int num){
    if(num == 2) return true;
    else if(!(num%2)) return false;
    else{
        for(unsigned int i=3; i<=(sqrt(num + 1)); i+=2){
            if(!(num%i)) return false;
        }
        return true;
    }
}