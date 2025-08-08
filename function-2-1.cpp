#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number){
    int number = std::stoi(decimal_number);
    std::string binary = "";

    if (number == 0) {
        std::cout << "0" << std::endl;
        return;
    }

    while (true) {
        int remainder = number % 2;
        binary = std::to_string(remainder) + binary;
        if (number < 2) {
            break;
        }
        number = number / 2;
    }

    std::cout << binary << std::endl;
}