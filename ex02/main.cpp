#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Array.hpp"


int main(int ac, char* av[]) {
        if (ac < 3) {
                std::cout << "Supported types are: int, char, string, const char*" << std::endl;
                std::cout << "Usage: ./array <type> <value> <value> <...>" << std::endl;
                return 1;
        }
        if (std::string(av[1]) == "int") {
                Array<int> array(ac - 2);
                for (int i = 0; i < ac - 2; i++) {
                        array[i] = atoi(av[i + 2]);
                }
                for (int i = 0; i < ac - 2; i++) {
                        std::cout << array[i] << " ";
                }
                std::cout << std::endl;
        }
        else if (std::string(av[1]) == "char") {
                Array<char> array(ac - 2);
                for (int i = 0; i < ac - 2; i++) {
                        array[i] = av[i + 2][0];
                }
                for (int i = 0; i < ac - 2; i++) {
                        std::cout << array[i] << " ";
                }
                std::cout << std::endl;
        }
        else if (std::string(av[1]) == "string") {
                Array<std::string> array(ac - 2);
                for (int i = 0; i < ac - 2; i++) {
                        array[i] = av[i + 2];
                }
                for (int i = 0; i < ac - 2; i++) {
                        std::cout << array[i] << " ";
                }
                std::cout << std::endl;
        }
        else if (std::string(av[1]) == "const char*") {
                Array<const char*> array(ac - 2);
                for (int i = 0; i < ac - 2; i++) {
                        array[i] = av[i + 2];
                }
                for (int i = 0; i < ac - 2; i++) {
                        std::cout << array[i] << " ";
                }
                std::cout << std::endl;
        }
        else {
                std::cout << "Supported types are: int, char, string, const char*" << std::endl;
                std::cout << "Usage: ./array <type> <value> <value> <...>" << std::endl;
                return 1;
        }
        return 0;        
}