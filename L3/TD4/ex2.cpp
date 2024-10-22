#include <iostream>

int main() {

    int a = 5;
    int b = 0;

    int* a_p = &a;
    int* b_p = &b;
    
    int n = *a_p;
    *a_p = *b_p;
    *b_p = n;

    std::cout << " a = " << a << " b = " << b << "\n";

    return 0;
}