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

#include "include/asciiimage.h"
#include <string>

Ascii::Ascii(int w, int h) : width(w), height(h) {
  this->pic = new std::string *[this->height];
  for (int i = 0; i < this->height; ++i) {
    this->pic[i] = new std::string[this->width];
    for (int j = 0; j < this->width; ++j) {
      this->pic[i][j] = ' ';
    }
  }
}

Ascii::~Ascii() {
  for (int i = 0; i < this->height; ++i) {
    delete[] this->pic[i];
  }
  delete[] this->pic;
};

void Ascii::setPix(int x, int y, int colour) {
  if (colour < 0) {
    this->pic[x][y] = this->colourset[0];
  } else if (colour < 69) {
    this->pic[x][y] = this->colourset[colour];
  } else {
    this->pic[x][y] = this->colourset[69];
  }
}

void Ascii::show() {
  for (int i = 0; i < this->height; ++i) {
    for (int j = 0; j < this->width; ++j) {
      std::cout << pic[i][j];
    }
    std::cout << std::endl;
  }
}
