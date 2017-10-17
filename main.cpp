#include <iostream>
#include "bitmap.h"
#include <vector>
#include <string>

using namespace std;   

int main()
{
    Bitmap image;
    vector < vector < Pixel > > bmp;
    Pixel rgb;

    cout << "Please state the file name of an image: " << endl;
    bool validBmp = image.isImage();
    if(validBmp == true)
    {
    bmp = image.toPixelMatrix();

    rgb.red = 0;
    rgb.blue = 0;
    rgb.green = 0;
    
    bmp[532][2486] = rgb;
    image.fromPixelMatrix(bmp);
    image.save("machupicchu.bmp");
    "machupicchu.bmp" == "oldtimey.bmp";
    }
    return 0;

}
