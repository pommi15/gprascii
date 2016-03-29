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
    Ascii *img = new Ascii(18, 2);

    img->show();
    delete img;
    return 0;
}
