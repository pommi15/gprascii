/*~~~~~~~~~~~~~~~~~~~~~~~
|       @)>-}-;--       |
|      ASCII Image      |
|          and          |
|     Mandelbrot Set    |
|           by          |
|      Tobias Watzek    |
|        if15b038       |
|          and          |
|     Thomas Rauhofer   |
|        if15b029       |
~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
#include "ascii.h"

using namespace std;

int main()
{
    Ascii *img = new Ascii(16, 16);
    for(int x = 0; x < 16; ++x) {
        for(int y = 0; y < 16; ++y) {
            img->setPix(x, y, x * y);
        }
    }

    img->show();
    delete img;
    return 0;
}
