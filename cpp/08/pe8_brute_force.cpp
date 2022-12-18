#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <bits/stdc++.h>
#include <time.h>

void read_arr(int (&data)[1000]);
unsigned long long int max_prod(int data[1000], int num);

int main(){
    system("CLS");
    int data[1000], adj_val = 13;

    clock_t start, end;

    start = clock();

    read_arr(data);

    std::cout<<max_prod(data, adj_val)<<std::endl;

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << std::fixed;
    std::cout << std::setprecision(16);
    std::cout << "Time taken by program is: " << time_taken << std::endl;
    
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