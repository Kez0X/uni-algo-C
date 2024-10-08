#include <iostream>

int main() {
    double p, q, x, y;
    int j;

    /* 1. */
    if (p >= q || j != 10)  
    {
        x = 5.0;
    }

    /* 2. */
    if (y >= q && j == 20)
    {
        x = 5.0;
    } 
    else {
        x = p;
    }
    
    /* 3. */
    if (p>q)
    {
        x = 0;
    } 
    else if (p<=q && j == 10) {
        x = 1;
    } 
    else {
        x = 2;
    }
    
    return 0;
}