#include <iostream>

int is_identity(int array[10][10]);

int main(){

    int matrix[10][10] = {0};

    for (int i = 0; i < 10; i++){

        matrix[i][i] = 1;

    }

    int result = is_identity(matrix);

    std::cout << result << std::endl;
    
    return 0;
}