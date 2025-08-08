#include <iostream>

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main(){
    int a[] = {1, 2, 3, 2, 1};
    int b[] = {1, 2, 3};
    int c[] = {};
    int d[] = {4, 4, 4, 4};
    int e[] = {9};

    std::cout << sum_if_palindrome(a, 5) << std::endl;
    std::cout << sum_if_palindrome(b, 3) << std::endl;
    std::cout << sum_if_palindrome(c, 0) << std::endl;
    std::cout << sum_if_palindrome(d, 4) << std::endl;
    std::cout << sum_if_palindrome(e, 1) << std::endl;

    return 0;
}