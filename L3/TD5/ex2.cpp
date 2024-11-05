#include <iostream>

void modifyInt(int* integer) {
    *integer = 10;
}

int main() {

    int x = 5;

    modifyInt(&x);

    std::cout << x << std::endl;

    return 0;
}