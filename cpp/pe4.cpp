#include <iostream>
#include <stdlib.h>
#include <math.h>

bool is_pal(int num);

int main(){
    system("CLS");
    
    int i=999, j, prod, large_pal=0;
    for(i=999; i>99; i--){
        for(j=999; j>99;j--){
            prod = i*j;
            if(is_pal(prod) && (prod > large_pal)) large_pal = prod;
        }
    }
    std::cout<<large_pal<<std::endl;    
    return 0;
}

bool is_pal(int num){
    if(num >= 100000){
        for(int i=0; i<3; i++){
            if(((int(num/(pow(10, (5-i)))))%10) != ((int(num/pow(10, i)))%10)) return false;
        }
    }
    else if(num >= 10000){
        for(int i=0; i<2; i++){
            if(((int(num/(pow(10, (4-i)))))%10) != ((int(num/pow(10, i)))%10)) return false;
        }
    }
    else std::cout<<"The number is smaller than 10000"<<std::endl; // Doubt this will happen    
    return true;
}