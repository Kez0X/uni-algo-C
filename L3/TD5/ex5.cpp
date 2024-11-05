#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

void produitMatrice(double** matrice1, double** matrice2, double** produit) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            produit[i][j] = matrice1[i][0] * matrice2[0][j] + matrice1[i][1] * matrice2[1][j];
            std::cout << produit[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {

    int sizeMatrice1 = 2;
    double** matrice1 = new double*[sizeMatrice1];
    matrice1[0] = new double[sizeMatrice1];
    matrice1[1] = new double[sizeMatrice1];

    matrice1[0][0] = 1.5; matrice1[0][1] = 2.5;
    matrice1[1][0] = 3.5; matrice1[1][1] = 4.5;

    int sizeMatrice2 = 2;
    double** matrice2 = new double*[sizeMatrice2];
    matrice2[0] = new double[sizeMatrice2];
    matrice2[1] = new double[sizeMatrice2];

    matrice2[0][0] = 1.5; matrice2[0][1] = 2.5;
    matrice2[1][0] = 3.5; matrice2[1][1] = 4.5;

    double** produit = new double*[2];
    produit[0] = new double[2];
    produit[1] = new double[2];

    assert(sizeMatrice1 == sizeMatrice2);
    produitMatrice(matrice1, matrice2, produit);

    delete[] matrice1;
    delete[] matrice2;
    delete[] produit;

    return 0;
}