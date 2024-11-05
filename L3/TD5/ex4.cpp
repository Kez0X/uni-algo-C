#include <iostream>
#include <vector>
#include <cmath>

double calcAverage(const double* vector, const int* size) {
    double sum = 0;
    for (int i = 0; i < *size; i++)
    {
        sum += vector[i];
    }

    return sum / *size;
}

double calcStandartDeviation(const double* vector, const int* size) {
    double sum = 0;
    double average = calcAverage(vector, size); 

    for (int i = 0; i < *size; i++)
    {
        sum += pow(vector[i] - average, 2);
    }

    double result = (sum/(*size - 1));
    return sqrt(result);
}

int main() {

    double* vector = new double[5] {1, 2, 3, 4, 5};
    int* size = new int;
    *size = 5;

    double average = calcAverage(vector, size);
    std::cout << "Moyenne : " << average << std::endl;

    double standartDeviation = calcStandartDeviation(vector, size);
    std::cout << "Equart Type : " << standartDeviation << std::endl;

    delete[] vector;
    delete size;

    return 0;
}