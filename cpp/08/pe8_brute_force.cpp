#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <chrono>

void read_arr(int (&data)[1000]);
unsigned long long int max_prod(int data[1000], int num);

int main(){
    system("CLS");
    int data[1000], adj_val = 13;
    read_arr(data);
    auto start = std::chrono::high_resolution_clock::now();
    std::cout<<max_prod(data, adj_val)<<std::endl;
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout<<duration.count()<<std::endl;
    return 0;
}

void read_arr(int (&data)[1000]){
    int idx=0;
    char c;
    std::ifstream inputFile;
    inputFile.open("../../data_8.txt");
    while(inputFile >> c) data[idx++]  = int(c - '0');
    inputFile.close();
}
unsigned long long int max_prod(int data[1000], int num){
    int idx, i;
    unsigned long long int max_val=0, temp;
    for(idx=0; idx < (1000 - num); idx++){
        temp = 1;
        for(i=0; i<num; i++) temp *= data[idx + i];
        max_val = (max_val < temp) ? temp : max_val;
    }
    return max_val;
}