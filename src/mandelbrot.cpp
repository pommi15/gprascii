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
#include "include/asciiimage.h"

using namespace std;

double scale_x(int x, double x0, double x1, int width){
    double new_x = ((x) / (width - 1)) * (x1 - x0) - x0;
    return new_x;

}
double scale_y(int y, double y0, double y1, int height){
    double new_y = ((y) / (height - 1)) * (y1 - y0) - y0;
    return new_y;

}

int main()
{
    int width = 0;
    int height = 0;
    double x0 = 0.;
    double y0 = 0.;
    double x1 = 0.;
    double y1 = 0.;
    int maxi = 0;

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

            double zr = 0.;
            double zi = 0.;

            for(int i = 0; i < maxi; ++i) {

                double nextzr = (zr * zr) - (zi * zi) + scale_x(x, x0, x1, width);
                double nextzi = (2 * zr * zi) + scale_y(y, y0, y1, height);
                if((nextzr * nextzr + nextzi * nextzi) > 4) {
                    img->setPix(x, y, (i%70));
                    break;
                }


                zr = nextzr;
                zi = nextzi;
            }

        }
    }

    img->show();
    delete img;
    return 0;
}
