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
private:
    int width;
    int height;
    char colourset[];
    char pic[];
public:
    Ascii(int width, int height);
    ~Ascii();
    void setPix(int x, int y, int colour);
    void show();
};

#endif
