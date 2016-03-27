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
    this->width = width;
    this->height = height;
    this->colourset[] = {' ', '.', '\'', '`', '^', '"', ',', ':', ';', 'I', 'l', '!', 'i', '>', '<', '~', '+', '_', '-', '?', ']', '[' , '}', '{' , '1', ')', '(', '|', '\\', '/' , 't', 'f', 'j', 'r', 'x', 'n', 'u', 'v', 'c', 'z', 'X', 'Y', 'U', 'J', 'C', 'L', 'Q', '0', 'O', 'Z', 'm', 'w', 'q', 'p', 'd', 'b', 'k', 'h', 'a', 'o', '*', '#', 'M', 'W', '&', '8', '%', 'B', '@', '$'};
    this->pic[width][height];
    for(int j = 0; j < height; j++){
        for(int i = 0; i < width; i++){
            this->pic[width][height] = ' ';
        }
    }
}

Ascii::~Ascii(){};

 void Ascii::setPix(int x, int y, int colour){
    if(colour < 0) {
        this->pic[x][y] = this->colourset[0];
    }else if(colour < 68) {
        this->pic[x][y] = this->colourset[colour];
    }else {
        this->pic[x][y] = this->colourset[68];
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
