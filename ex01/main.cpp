#include "iter.hpp"

void increment(int &n) {
    n++;
}

int main() {
    std::cout << "Int array" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(intArray) / sizeof(int);

    ::iter(intArray, len, print<int>);
    std::cout << std::endl;

    std::cout << "Increment int array" << std::endl;
    ::iter(intArray, len, increment);
    ::iter(intArray, len, print<int>);

    std::cout << std::endl << std::endl << std::endl;

    std::cout << "String array" << std::endl;
    std::string strArray[] = {"Hello", "World", "from", "42"};
    len = sizeof(strArray) / sizeof(std::string);
    ::iter(strArray, len, print<std::string>);
    std::cout << std::endl;

    return 0;
}
