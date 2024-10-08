#include <iostream>

int main() {

    int input = 0;
    int sum = 0;

    while (input != -1 || sum > 100)
    {
        if (input == -2)
        {
            sum = 0;
        } else {
            std::cout<<"Entrez un nombre entier, -1 ou -2 : ";
            std::cin>>input;

            sum += std::abs(input);
        }
    }

    std::cout<<"La somme des nombre est égale à "<<sum;

    return 0;

}