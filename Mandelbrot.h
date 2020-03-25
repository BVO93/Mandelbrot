//
// Created by bjorn on 24.03.20.
//


#ifndef INC_9_FRACTALIMAGE_MANDELBROT_H
#define INC_9_FRACTALIMAGE_MANDELBROT_H


namespace cop {

    class Mandelbrot {
    public:
        static const int MAX_ITERATIONS = 1000;

    public:
        Mandelbrot();
        virtual ~Mandelbrot();
        static int getIteration(double x, double y);
    };

} // end of cop
#endif //INC_9_FRACTALIMAGE_MANDELBROT_H
