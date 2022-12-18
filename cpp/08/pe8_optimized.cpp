#include <iostream>
#include <stdlib.h>
#include <fstream>


int main(){
    system("CLS");
    unsigned long long int max_prod=0, temp=1;
    int idx=0, num=13, digits[500], char_to_int;
    char c;

    std::ifstream inputFile;
    inputFile.open("../../data_8.txt");
    while(inputFile >> c){
        char_to_int = int(c - '0');
        if(!char_to_int){
            idx = 0;
            temp = 1;
        }
        else{
            digits[idx] = char_to_int;
            if(idx >= num){
                temp /= digits[idx - num];
            }
            temp *= char_to_int;
            max_prod = (max_prod < temp) ? temp : max_prod;
            idx++;
        }
    }
    inputFile.close();
    
    std::cout<<max_prod<<std::endl;

    // system("PAUSE");
    return 0;
}