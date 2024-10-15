#include <iostream>
#include <fstream>
#include <cassert>
#include <ios>

int main()
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.05465465465465};

    std::ofstream write_output("x_et_y.dat");
    assert(write_output.is_open());

    write_output.precision(10);

    for (int i = 0; i < 4; i++)
    {
        if (x[i] == 0)
        {
            write_output << std::scientific << std::noshowpos << x[i] << " ";
        }
        else
        {
            write_output << std::scientific << std::showpos << x[i] << " ";
        }
    }

    write_output << std::endl;

    for (int i = 0; i < 4; i++)
    {
        if (y[i] == 0)
        {
            write_output << std::scientific << std::noshowpos << y[i] << " ";
        }
        else
        {
            write_output << std::scientific << std::showpos << y[i] << " ";
        }
    }

    write_output.close();
    return 0;
}