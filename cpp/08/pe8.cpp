#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>

void read_arr(std::vector<std::vector<int>> &data, int num);
unsigned long long int max_prod(std::vector<int> lst, int num);

int main(){
    system("CLS");
    int adj_prod = 13;
    unsigned long long int res = 0, temp_prod;
    std::vector<std::vector<int>> data;
    read_arr(data, adj_prod);
    for(unsigned int lst_idx=0; lst_idx<data.size(); lst_idx++){
        temp_prod = max_prod(data[lst_idx], adj_prod);
        res = (res < temp_prod) ? temp_prod : res;
    }
    std::cout<<res<<std::endl;
    return 0;
}

void read_arr(std::vector<std::vector<int>> &data, int num){
    std::vector<int> temp_vec; 
    int char_to_int;
    char c;
    std::ifstream inputFile;
    inputFile.open("../../data_8.txt");
    while(inputFile >> c){
        char_to_int = int(c - '0');
        if(!char_to_int){
            if(num <= temp_vec.size()) data.push_back(temp_vec);
            temp_vec.clear();
        }
        else{
            temp_vec.push_back(char_to_int);
        }
    }
    inputFile.close();
}

unsigned long long int max_prod(std::vector<int> lst, int num){
    unsigned long long int temp=2, interm=1;
    int idx;
    for(idx=0; idx<num; idx++) interm *= lst[idx];
    while(idx < lst.size()){
        interm = (interm/lst[idx-num])*lst[idx++];
        temp = (temp < interm) ? interm : temp;
    }

    return temp;
}