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
                cout<<"Opened image\n";
                bmp = image.toPixelMatrix();
                for(int row = 0; row < bmp.size(); row ++)
                {
                        for(int col = 0; col < bmp[0].size(); col ++)
                        {
                                rgb.red = 0;
                                rgb.blue = 0;
                                rgb.green = 0;

                                bmp[row][col] = rgb;
                        }
                }
                image.fromPixelMatrix(bmp);
                image.save("oldtimey.bmp");


        }
        cout <<"End"<< endl;

        return 0;

}
