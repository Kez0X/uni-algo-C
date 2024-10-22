#include <iostream>

int main() {

    double** A = new double*[2];
    A[0] = new double[2];
    A[1] = new double[2];

    A[0][0] = 1.5; A[0][1] = 2.5;
    A[1][0] = 3.5; A[1][1] = 4.5;

    double** B = new double*[2];
    B[0] = new double[2];
    B[1] = new double[2];

    B[0][0] = 1.5; B[0][1] = 2.5;
    B[1][0] = 3.5; B[1][1] = 4.5;

    double** C = new double*[2];
    C[0] = new double[2];
    C[1] = new double[2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    delete A[0];
    delete A[1];
    delete A;
    delete B[0];
    delete B[1];
    delete B;
    delete C[0];
    delete C[1];
    delete C;

    return 0;
}