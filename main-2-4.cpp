#include <iostream>

int sum_min_max(int integers[], int length);
int array_min(int integers[], int length);
int array_max(int integers[], int length);

int main(){
    
    int a[] = {4, 2, 8, 1, 9};
    int b[] = {-5, -2, -8};
    int c[] = {};
    int d[] = {10};

    std::cout << sum_min_max(a, 5) << std::endl;
    std::cout << sum_min_max(b, 3) << std::endl;
    std::cout << sum_min_max(c, 0) << std::endl;
    std::cout << sum_min_max(d, 1) << std::endl;

    return 0;
}