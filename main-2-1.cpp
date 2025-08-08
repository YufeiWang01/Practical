#include <iostream>
#include <string>

void print_binary(std::string decimal_number);

int main(){
    std::string input;
    std::cout << "Enter a decimal number: ";
    std::cin >> input;
    print_binary(input);
    return 0;
}