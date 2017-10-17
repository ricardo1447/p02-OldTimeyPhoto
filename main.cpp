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

    string input;
    cout << "Please state the file name of an image: " << endl;
    cin >> input;

    image.open(input);

    bool validBmp = image.isImage();
    if(validBmp == true)
    {
    bmp = image.toPixelMatrix();

    rgb.red = 0;
    rgb.blue = 0;
    rgb.green = 0;
    
    bmp[bmp.size() - 1][bmp[0].size() - 1] = rgb;
    image.fromPixelMatrix(bmp);
    image.save("machupicchu.bmp");
    }
    return 0;

}
