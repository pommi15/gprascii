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

Ascii::Ascii(int width, int height){
    this->width = width;
    this->height = height;
    this->colourset[80] = " .'`^\",:;Il!i><~+_-?][}{1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";
    this->pic = new char*[height];
    for(int i = 0; i < height; ++i){
        this->pic[i] = new char[width];
        for(int j = 0; j < width; ++j){
            this->pic[i][j] = ' ';
        }
    }
}

Ascii::~Ascii(){};

 void Ascii::setPix(int x, int y, int colour){
    if(colour < 0) {
        this->pic[x][y] = this->colourset->c_str()[0];
    }else if(colour < 68) {
        this->pic[x][y] = this->colourset->c_str()[colour];
    }else {
        this->pic[x][y] = this->colourset->c_str()[68];
    }
}

void Ascii::show(){
    for(int i = 0; i < this->height; ++i){
        for(int j = 0; j < this->width; ++j){
            std::cout << pic[j][i];
        }
        std::cout << std::endl;
    }

}
