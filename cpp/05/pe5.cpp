#include <iostream>
#include <stdio.h>
#include <math.h>

bool is_prime(unsigned int num);

int main(){
    system("CLS");
    int result = 1;
    int expon, MAX_VAL = 20;
    for(int i=2; i<=MAX_VAL; i++){
        if(is_prime(i)){
            // std::cout<<i<<std::endl;
            expon = 1;
            while(pow(i, expon)<(MAX_VAL)) expon++; 
            std::cout<<i<<"^"<<(expon - 1)<<" = "<<(pow(i, (expon - 1)))<<std::endl;
            result *= (pow(i, --expon));           
        }
    }
    std::cout<<result<<std::endl;
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