#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    
    int binary1[] = {1, 0, 1};
    int binary2[] = {1, 1, 0, 0, 1, 1};

    std::cout << binary_to_int(binary1, 3) << std::endl;
    std::cout << binary_to_int(binary2, 6) << std::endl;

    return 0;

}