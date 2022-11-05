#include <iostream>
#include <string>

std::string modifyString(std::string& str){
    str = "other string";
    return str;

}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
