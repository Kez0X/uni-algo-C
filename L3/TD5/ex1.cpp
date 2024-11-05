#include <iostream>

void printEntier(const int* entier) {
    std::cout << *entier << std::endl;
}

int main() {

    int a = 5;

    printEntier(&a);

    return 0;
}