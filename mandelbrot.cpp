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

using namespace std;

double scalex(int x){


}
double scaley(int y){


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

            int zr = 0.;
            int zi = 0.;
            int h = 0;
            for(int i = 0; i < maxi; ++i) {
                double nextzr = zr * zr - zi * zi + scalex(x);
                double nextzi = 2 * zr * zi + scaley(y);
                if((nextzr * nextzr + nextzi * nextzi) > 4) {
                    img->setPix(x, y, (i%70));
                    break;
                }
                zr = nextzr;
                zi = nextzi;
                h = i;
            }
            if(h == (maxi - 1)){
                img->setPix(x, y, (h%70));
            }
        }
    }


    img->show();
    delete img;
    return 0;

}
