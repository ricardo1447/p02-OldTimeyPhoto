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

    image.open("machupicchu.bmp");
    bmp = image.toPixelMatrix();


    cout << "machupicchu.mbp has been loaded. It is " << bmp.size() << " pixels wide and " << bmp[0].size() << " pixels high" << endl;

// Output will request the image file name from the user.
// Image file must be a Windows BMP format image.
// Change the pixel colors to black, white, and shades of grey only based on original colors.
// File must be saved as oldtimey.bmp
    return 0;

}
