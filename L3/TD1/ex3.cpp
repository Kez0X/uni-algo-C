#include <iostream>
#include <math.h>

int main(int argc, char *argv[])
{
    double vector1[3] = {0, 5, 2};
    double vector2[3] = {5, 5, 2};

    double produitscalaire = vector1[0]*vector2[0] + vector1[1]*vector2[1] + vector1[2]*vector2[2];
    double normeeuclidienne = sqrt(produitscalaire);

    std::cout<<"Le produit scalaire est égal à "<<produitscalaire<<"\n";
    std::cout<<"La norme euclidienne est "<<normeeuclidienne<<"\n";

    return 0;
}