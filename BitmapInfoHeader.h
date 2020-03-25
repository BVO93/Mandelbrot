//
// Created by bjorn on 22.03.20.
//

#ifndef INC_9_FRACTALIMAGE_BITMAPINFOHEADER_H
#define INC_9_FRACTALIMAGE_BITMAPINFOHEADER_H

#include<cstdint>

#pragma pack(2)

namespace  cop {

    struct BitmapInfoHeader {

        int32_t headerSize{40};
        int32_t width;
        int32_t height;
        int16_t planes{1};
        int16_t bitsPerPixel{24};
        int32_t compression{0};
        int32_t dataSize{0};
        int32_t horizontalResolution{2400};
        int32_t verticalResolution{2400};
        int32_t colors{0};
        int32_t importantColors{0};
    };

}

#endif //INC_9_FRACTALIMAGE_BITMAPINFOHEADER_H
