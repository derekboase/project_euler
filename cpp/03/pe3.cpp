#include <iostream>
#include <stdlib.h>
#include <math.h>

bool is_prime(unsigned int num);

int main(){
    system("CLS");
    const unsigned long long int TARGET=600851475143;
    const unsigned int SQRT_TAR = sqrt(TARGET);
    int max_val;
    for(int i=3; i<SQRT_TAR; i+=2){
        if(is_prime(i) && !(TARGET%i)) max_val = i;
    }
    std::cout<<max_val<<std::endl;
    return 0;
}

bool is_prime(unsigned int num){
    for(unsigned int i=3; i<=sqrt(num); i+=2){
        if(!(num%i)) return false;
    }
    return true;
}