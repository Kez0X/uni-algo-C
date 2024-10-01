#include <iostream>

int main(int argc, char *argv[])
{
    int array[5] = {34, 58, 57, 32, 43};

    double sum = array[0] + array[1] + array[2] + array[3] + array[4];
    double average = sum / 5;

    std::cout<<average;

    return 0;
}