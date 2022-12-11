#include <iostream>
#include <stdio.h>
#include <math.h>

bool is_prime(unsigned int num);

int main(){
    system("CLS");
    unsigned long int result = 1;
    int temp, MAX_VAL = 20;
    for(int i=2; i<=MAX_VAL; i++){
        if(is_prime(i)){
          temp = i;
          while((temp*i)<MAX_VAL) temp *= i;
           result *= temp;
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