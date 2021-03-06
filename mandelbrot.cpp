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

#include <iostream>

#include "asciiimage.h"

using namespace std;

/**
 * Scale a point
 * @param  p     [description]
 * @param  p0    [description]
 * @param  p1    [description]
 * @param  limit [description]
 * @return       [description]
 */
double scale(int p, double p0, double p1, int limit){
    double new_p = p * ((p1 - p0) / (limit - 1)) + p0;
    return new_p;
}

int main()
{
    // Width of the image
    int width = 0;
    // Height of the image
    int height = 0;
    double x0 = 0.;
    double y0 = 0.;
    double x1 = 0.;
    double y1 = 0.;
    int maxi = 0;
    bool ended = true;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x0: ";
    cin >> x0;
    cout << "Enter y0: ";
    cin >> y0;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter maxi: ";
    cin >> maxi;


    Ascii *img = new Ascii(width, height);

    for(int x = 0; x < width; ++x) {

        for(int y = 0; y < height; ++y) {

            ended = true;
            double zr = 0.;
            double zi = 0.;


            for(int i = 0; i < maxi; ++i) {

                double nextzr = (zr * zr) - (zi * zi) + scale(x, x0, x1, width);
                double nextzi = (2 * zr * zi) + scale(y, y0, y1, height);
                if((nextzr * nextzr + nextzi * nextzi) > 4) {
                    img->setPix(x, y, (i%70));
                    ended = false;
                    break;
                }
                zr = nextzr;
                zi = nextzi;
            }
            if(ended){
                img->setPix(x, y, (maxi%70));
            }

        }
    }

    img->show();
    delete img;
    return 0;
}
