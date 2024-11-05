#include <iostream>

void permuteWithPointeurs(int* a, int* b) {
    int n = *b;
    *b = *a;
    *a = n;
}

void permuteWithReference(int& a, int& b) {
    int n = b;
    b = a;
    a = n;
}

int main() {

    int a = 10;
    int b = 0;

    permuteWithPointeurs(&a, &b);
    std::cout << "a: " << a << " b: " << b << std::endl;

    permuteWithReference(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0;
}