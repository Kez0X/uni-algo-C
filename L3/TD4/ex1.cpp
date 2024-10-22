#include <iostream>

int main() {

    int i = 5;
    int* p_j = &i;

    *p_j = *p_j * 5;

    std::cout << "Nouvelle valeur de i : " << *p_j << "\n";

    int* p_k = new int;
    *p_k = *p_j;

    std::cout << "Valeur enregistrée : " << *p_k << "\n";

    return 0;
}