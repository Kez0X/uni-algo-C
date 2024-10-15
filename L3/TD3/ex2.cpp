#include <iostream>
#include <fstream>
#include <cassert>

int main() {
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    std::ofstream write_output("x_et_y.dat");
    assert(write_output.is_open());

    for (int i = 0; i < 4; i++)
    {
        write_output << x[i] << " ";
    }

    write_output << std::endl;

    for (int i = 0; i < 4; i++)
    {
        write_output << y[i] << " ";
    }

    write_output.close();
    return 0;
}