//
// Created by bjorn on 22.03.20.
//

#include <iostream>
#include <cstdint>
#include <memory>
#include "Bitmap.h"
#include "Mandelbrot.h"
using namespace std;
using namespace cop;


    int main() {

        int WIDTH = 800;
        int HEIGHT = 600;

        Bitmap bitmap(WIDTH, HEIGHT);

        double min = 999999;
        double max = -99999;

        unique_ptr<int[]> histogram(new int[MAX_ITERATION+1]);

        for(int x = 0; x < WIDTH; x++){

            for(int y = 0; y < HEIGHT; y++ ){

                double xFractal = (x - WIDTH/2 - 200 ) * 2.0/WIDTH;
                double yFractal = (y - HEIGHT/2) * 2.0/WIDTH;

                int iterations = Mandelbrot::getIteration(xFractal, yFractal);
                uint8_t color =  (uint8_t)(256 * (double)iterations/Mandelbrot::MAX_ITERATIONS);


                color = color * color * color;
                bitmap.setPixel(x,y,0, color, 0);

                if(color < min) min = xFractal;
                if(color > max) max = yFractal;
            }

        }

            cout << min << " ," << max << endl;



        bitmap.write("Test.bmp");
        cout << " Finished " << endl;


        return 0;
    }
