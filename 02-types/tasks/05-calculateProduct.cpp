#include <iostream>
#include <memory>

// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are theredsds
std::shared_ptr<int> calculateProduct(int a, int b) {
    std::shared_ptr<int> add = std::make_shared<int> (a * b);
    std::cout << "num: " << *add << " | owners: " << add.use_count()<<std::endl;
    return add;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
