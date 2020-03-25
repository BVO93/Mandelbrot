//
// Created by bjorn on 24.03.20.
//

#ifndef INC_9_FRACTALIMAGE_BITMAP_H
#define INC_9_FRACTALIMAGE_BITMAP_H

#include <string>
#include <cstdint>
#include <memory>
using namespace std;

namespace  cop {

    class Bitmap {
    private:
        int m_width{0};
        int m_height{0};
        unique_ptr<uint8_t[]> m_pPixels{nullptr};

    public:
        Bitmap(int width, int height);

        bool write(string filename);

        // Color val between 0 ad 255 so uint 8 is 8 bit int (0 - 255)
        void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);


        virtual ~Bitmap();
    };

}

#endif //INC_9_FRACTALIMAGE_BITMAP_H
