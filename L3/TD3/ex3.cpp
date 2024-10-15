#include <iostream>
#include <cassert>

double det(double a, double b, double c, double d) {
    return a*d - b*c;
}

int main() {

    double matrice[2][2] = {{4.0, 10.0}, {1.0, 1.0}};

    double a = matrice[0][0];
    double b = matrice[0][1];
    double c = matrice[1][0];
    double d = matrice[1][1];

    double detmatrice = det(a, b, c, d);
    if (detmatrice == 0)
    {
        std::cout << "Determinant égal à 0.";
        return 1;
    }
    
    a = (1/detmatrice) * a;
    b = (1/detmatrice) * -b;
    c = (1/detmatrice) * -c;
    d = (1/detmatrice) * d;
    double matriceinverse[2][2] = {{a, b}, {c, d}};
    
    std::cout << a << " " << b << std::endl << c << " " << d << std::endl;

    return 0;
}