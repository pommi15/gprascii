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

#include "ascii.h"

Ascii::Ascii(int width, int height){
    int x = width;
    int y = height;
    char colorset[] = {' ', '.', '\'', '`', '^', '"', ',', ':', ';', 'I', 'l', '!', 'i', '>', '<', '~', '+', '_', '-', '?', ']', '[' , '}', '{' , '1', ')', '(', '|', '\\', '/' , 't', 'f', 'j', 'r', 'x', 'n', 'u', 'v', 'c', 'z', 'X', 'Y', 'U', 'J', 'C', 'L', 'Q', '0', 'O', 'Z', 'm', 'w', 'q', 'p', 'd', 'b', 'k', 'h', 'a', 'o', '*', '#', 'M', 'W', '&', '8', '%', 'B', '@', '$'};
    char pic[width][height];
    for(int j = 0; j < height; j++){
        for(int i = 0; i < width; i++){
            pic[x][y] = ' ';
        }
    }
}

Ascii::~Ascii(){};

 void Ascii::setPix(int x, int y, int color){
    if(color < 0) {
        Ascii::pic[x][y] = Ascii::colorset[0];
    }else if(color < 68) {
        pic[x][y] = colorset[color];
    }else {
        pic[x][y] = colorset[68];
    }
}

void Ascii::show(){
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x); j++){
            cout << pic[j, i];
        }
        cout << endl;
    }

}
