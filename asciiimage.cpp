/*~~~~~~~~~~~~~~~~~~~~~~~
|       @)>-}-;--       |
|       mandelbrot      |
|           by          |
|      Tobias Watzek    |
|        if15b038       |
|          and          |
|     Thomas Rauhofer   |
|        if15b029       |
~~~~~~~~~~~~~~~~~~~~~~~*/

#include "asciiimage.h"

#include <string>
#include <iostream>

/**
 * Constructor with width and height of the image
 */
Ascii::Ascii(int w, int h) : width(w), height(h) {
  // Make the pic rows
  this->pic = new std::string *[this->height];
  // Create the columns row for row
  for (int i = 0; i < this->height; ++i) {
    this->pic[i] = new std::string[this->width];
    for (int j = 0; j < this->width; ++j) {
      // Fill each column with a space
      this->pic[i][j] = ' ';
    }
  }
}

/**
 * Destructor frees the memory of the pic
 */
Ascii::~Ascii() {
  // Go through every row and delete it
  for (int i = 0; i < this->height; ++i) {
    delete[] this->pic[i];
  }
  // delete the pic
  delete[] this->pic;
}

/**
 * Set a single pixel of the pic
 * @param x      Position on the x coordinate (coumn)
 * @param y      Position on the y coordinate (row)
 * @param colour Desired colour from 0 to 69
 */
void Ascii::setPix(int x, int y, int colour) {
  // Check if the coordinates are within the pic
  if (x >= 0 && x < this->width && y >= 0 && y < this->height && colour >= 0 && colour < 70) {
    this->pic[y][x] = this->colourset[colour];
  }
}

/**
 * Print the pic to the screen
 */
const void Ascii::show() {
  // Go through every row
  for (int i = 0; i < this->height; ++i) {
    // Go through every column
    for (int j = 0; j < this->width; ++j) {
      // Cout the pixel
      std::cout << pic[i][j];
    }
    // Print a linebreak after every row
    std::cout << std::endl;
  }
}
