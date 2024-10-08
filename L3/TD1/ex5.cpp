#include <iostream>

int main(int argc, char *argv[])
{
    std::string prenom;
    std::string nom;

    std::cout<<"Prénom : ";
    std::cin>>prenom;
    std::cout<<"Nom : ";
    std::cin>>nom;

    std::cout<<prenom<<" "<<nom<<"\n";

    return 0;
}