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
#ifndef INCLDUE_ASCIIIMAGE_H_
#define INCLDUE_ASCIIIMAGE_H_
#include <string>
#include <iostream>
class Ascii {
private:
  int width;
  int height;
  const std::string colourset = " .'`^\",:;Il!i><~+_-?][}{1)(|\\/"
                                "tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";
  std::string **pic;

public:
  Ascii(int w, int h);
  virtual ~Ascii();
  void setPix(int x, int y, int colour);
  void show();
};

#endif // INCLUDE_ASCIIIMAGE_H_
