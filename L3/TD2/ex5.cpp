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
    return exp(x) + x^3 - 5;
}

double fprime(double x) {
    return exp(x) + 3*x^2;
}

int main() {

    double xk[100];
    xk[0] = 0;
    
    for (int i = 1; i < 101; i++)
    {
        double x= xk[i-1];
        xk[i] = x - (f(x) / fprime(x));
        std::cout << xk[i];
    }
    
    return 0;
}