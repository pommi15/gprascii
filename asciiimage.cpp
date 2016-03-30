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

#include "asciiimage.h"

Ascii::Ascii(int width, int height){
    this->width = width;
    this->height = height;
    this->colourset = " .'`^\",:;Il!i><~+_-?][}{1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";
    this->pic = new std::string*[this->height];
    for(int i = 0; i < this->height; ++i){
        this->pic[i] = new std::string[this->width];
        for(int j = 0; j < this->width; ++j){
            this->pic[i][j] = ' ';
        }
    }
}

Ascii::~Ascii(){
    for(int i = 0; i < this->height; ++i){
        delete[] this->pic[i];
    }
    delete[] this->pic;
};

 void Ascii::setPix(int x, int y, int colour){
    if((x >= 0) && (x < (this->width - 1)) && (y >= 0) && (y < (this->height) - 1)){
        if(colour < 0) {
            this->pic[x][y] = this->colourset[0];
        }else if(colour < 69) {
            this->pic[x][y] = this->colourset[colour];
        }else {
            this->pic[x][y] = this->colourset[69];
        }
    }
}

void Ascii::show(){
    for(int i = 0; i < this->height; ++i){
        for(int j = 0; j < this->width; ++j){
            std::cout << pic[i][j];
        }
        std::cout << std::endl;
    }

}
