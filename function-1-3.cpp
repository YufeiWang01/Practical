#include <iostream>

void count_digits(int array[4][4]){

    int freq[10] = {0};

    for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++){

            int value = array[i][j];

            if (value >= 0 && value <= 9){

                freq[value]++;

            }
        }
    }
    for (int i = 0; i < 10; i++){

        std::cout << i << ":" << freq[i] << ";";
        
    }
    std::cout << std::endl;
}