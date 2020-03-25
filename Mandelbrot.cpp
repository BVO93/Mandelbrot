//
// Created by bjorn on 24.03.20.
//

#include "Mandelbrot.h"
#include <complex>

using namespace std;

namespace  cop {

    Mandelbrot::Mandelbrot() {

    }


    Mandelbrot::~Mandelbrot() {

    }

     int Mandelbrot::getIteration(double x, double y){

        complex<double> z = 0;
        complex<double> c(x, y);

        int iterations = 0;

        while(iterations < MAX_ITERATIONS){
            z = z*z + c;

            if(abs(z) > 2 ){
                break;
            }

            iterations++;
        }

        return iterations;
    }

} // end cop