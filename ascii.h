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

#ifndef ASCII_H
#define ASCII_H

class Ascii {

public:
    Ascii(int width, int height);
    ~Ascii();
    void setPix(int x, int y, int color);
    void show();
};

#endif
