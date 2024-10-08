#include <iostream>

int main() {
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] =   {{1.0, 5.0, 0.0},
                        {7.0, 1.0, 2.0},
                        {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, {4.0, 1.0, 0.0}};

    double w[3];

    for (int i = 0; i < 3; i++)
    {
        w[i] = u[i] - 3.0*v[i];
    }

    double x[3] = {u[0] - v[0], u[1] - v[1], u[2] - v[2]};
    
    double y[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            y[i] += A[i][j] * y[i];
        }
    }
    
    /* Au = y donc z = y - v */
    double z[3] = {y[0] - v[0], y[1] - v[1], y[2] - v[2]};

    double C[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 4*A[i][j] - 2*B[i][j];
        }
    }

    double D[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            D[i][j] = A[i][j] * B[i][j];
        }
        
    }
        

    return 0;    
}