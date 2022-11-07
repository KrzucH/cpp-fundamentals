#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo(
int foo(std::shared_ptr<int> num) {
    *num = 20;
    std::cout << "Value of shared_ pointer " << *num << " | " << num.use_count() << std::endl; 
    return *num;
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    // display the value under number pointer and use_count() of it
    std::cout << "Value of shared_ pointer " << *number << " | " << number.use_count() << std::endl; 
    foo(number);
    // display the value under number pointer and use_count() of it
    std::cout << "Value of shared_ pointer " << *number << " | " << number.use_count() << std::endl;
    return 0;
}
