#include <iostream>
#include <vector>
#include <string>

// Implement printVector todsdarint the content of a given vector on screen.
// Each string in a new line.
std::string printVector(std::vector<std::string> vec) {
    for(auto element : vec) {
        std::cout<<"\n"<<element; 
    }
    return"";
}

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
