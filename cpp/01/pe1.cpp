#include <iostream>
#include <stdlib.h>

int main(){
    system("CLS");
    int upper_lim, sum = 0;
    
    std::cout<<"Find sum of all divisible numbers below: "<<std::endl;
    std::cin>>upper_lim;

    for(int i=3; i<upper_lim; i++){
        if(!(i%3 && i%5)){
            sum += i;
            std::cout<<i<<" is divisible by 3 or 5. The new value of the sum is = "<<sum<<std::endl; // For debugging and verification
        }
    }
    std::cout<<"The answer is = "<<sum<<std::endl;
    return 0;
}