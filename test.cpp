#include <iostream>
#include <stdlib.h>
#include <vector>

// void mutate(std::vector<int> &tv);

int main(){
    system("CLS");
    std::vector<std::vector<int>> test_vec;
    std::vector<int> _1D_vals;
    for(int j=0; j<5; j++){
        for(int i=0; i<2*(j + 1); i++){
            _1D_vals.push_back(i);
            }
            test_vec.push_back(_1D_vals);
            _1D_vals.clear();
    }
    // mutate(test_vec);
    for(int outer=0; outer<test_vec.size(); outer++){
        for(int inner=0; inner<test_vec[outer].size(); inner++){
            std::cout<<test_vec[outer][inner]<<std::endl;
        }
    }
    return 0;
}

// void mutate(std::vector<int> &tv){
//     for(unsigned int i=0; i<tv.size(); i++){
//         tv[i] *= 10;
//         std::cout<<tv[i]<<std::endl;
//     }
// }