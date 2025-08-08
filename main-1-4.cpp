#include <iostream>

void print_scaled(int array[3][3], int scale);

int main(){

    int matrix[3][3] = {

        {1, 2, 1},
        {0, -1, 4},
        {3, 5, -2}
        
    };

    int scale = 2;

    print_scaled(matrix, scale);

    return 0;

}