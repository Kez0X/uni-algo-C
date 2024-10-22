#include <iostream>
#include <vector>

int main() {

    for (int y = 0; y < 100000000; y++) {
        double* vector1 = new double[3];
        double* vector2 = new double[3];

        vector1[0] = 1.0; vector1[1] = 2.0; vector1[2] = 3.0;
        vector2[0] = 1.0; vector2[1] = 2.0; vector2[2] = 3.0;

        double prod_scalaire = 0.0;

        for (int i = 0; i<3; i++) {
            prod_scalaire += (vector1[i] + vector2[i]);
        }

        std::cout << "Produit scalaire : " << prod_scalaire << std::endl;

        delete[] vector1;
        delete[] vector2;
    }

    return 0;
}