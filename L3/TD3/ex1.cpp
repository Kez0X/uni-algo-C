#include <cmath>
#include <iostream>

double f(double x) {
    return pow(x, 3) + 3;
} 

double fprime(double x) {
    return 3 * pow(x, 2);
}

void dichotomie() {
    double a = -4.0;
    double b = 1.0;
    double m;

    const double epsilon = 1.0e-8;
    const int maxiter = 200;

    int iter = 1;
    bool not_converged = true;

    while ((not_converged) && (iter <= maxiter))
    {
        m = (a+b)/2;
        if (f(a)*f(m) <= 0)
        {
            b = m; 
        } else {
            a = m;
        }

        not_converged = (fabs(b - a) > epsilon);
        iter++;    
    }

    std::cout << "Racines " << a << " et " << b << "\n";
}

void newtonraphson() {
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
}

int main() {

    int method = 0;
    std::cin >> method;

    if (method == 1)
    {
        newtonraphson();
    } else {
        dichotomie();
    }
    
    
    return 0; 
}