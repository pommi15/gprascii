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
#ifndef INCLDUE_ASCIIIMAGE_H_
#define INCLDUE_ASCIIIMAGE_H_
#include <string>
#include <iostream>
/**
 * Class for the ASCII image
 */
class Ascii {
private:
  // Width of the image
  int width;
  // Height of the image
  int height;
  // Colours to use
  const std::string colourset = " .'`^\",:;Il!i><~+_-?][}{1)(|\\/"
                                "tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";
  // Two dimensional array to store the image
  std::string **pic;

public:
  // Constructor
  Ascii(int w, int h);
  // Destructor
  virtual ~Ascii();
  // Set a pixel of the pic
  void setPix(int x, int y, int colour);
  // Print the image
  const void show();
};

#endif // INCLUDE_ASCIIIMAGE_H_
