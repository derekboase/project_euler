#include <iostream>
#include <stdlib.h>

void squares_and_sums(unsigned long int &sum_square, unsigned long int &square_sum, int MAX_VAL);

int main(){
    system("CLS");
    unsigned long int sum_square = 0, square_sum = 0;
    const int MAX_VAL = 100;
    squares_and_sums(sum_square, square_sum, MAX_VAL);
    std::cout<<square_sum - sum_square<<std::endl;
    return 0;
}

void squares_and_sums(unsigned long int &sum_square, unsigned long int &square_sum, int MAX_VAL){
    for(int j = 1; j<=MAX_VAL; j++){
        sum_square += (j*j);
        square_sum += j;
    }
    square_sum *= square_sum;
}