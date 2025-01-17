#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list
std::map<int, std::string> createMap(const std::vector<int>& vec ,const std::list<std::string>& list){
    
    std::map<int, std::string> mapa;
    auto list_it = list.begin();
    for(int j = 0; j<5; ++j){
        mapa[vec[j]] = *list_it++;
       
    }


    
    

    return mapa; 
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
