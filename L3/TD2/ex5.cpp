#include <iostream> 
#include <cmath>

/*
    f(x) = e^x + x^3 -5
    f'(x) = e^x + 3x²

    Itération de newton raphson :
    k = 0 => x1 = 0 - (e^0 + 0^3 - 5)/(e^0 + 3*0²) = - (-4/1) = 4
    k = 1 => x2 = 4 - (e^4 + 4^3 - 5)/(e^4 + 3*4²)
    .... 
*/

double f(double x) {
    return exp(x) + pow(x, 3) - 5;
}

double fprime(double x) {
    return exp(x) + 3*pow(x, 2);
}

int main() {
    double xprev = 0;
    double xnext;
    double epsilon = 1.0e-8;
    bool converged = false;
    int i = 1;

    while (converged != true || i < 101)
    {
        xnext = xprev - (f(xprev) / fprime(xprev));
        std::cout << xnext << "\n";

        if (std::abs(xnext - xprev) < epsilon)
        {
            break;
            std::cout << "Valeur approchée";
        }
        
        xprev = xnext;
    }
    

    return 0;
}