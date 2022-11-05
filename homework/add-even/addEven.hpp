#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile nodsds
    std::vector<int> vec;
    int a {0};
    for(auto i = 0; i < numbers.size(); i++) {
        if ((numbers[i] % 2) == 0){
            a += numbers [i];
        }
    }
                
    return a;
}
