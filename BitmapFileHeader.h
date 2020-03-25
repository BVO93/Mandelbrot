//
// Created by bjorn on 22.03.20.
//

#ifndef INC_9_FRACTALIMAGE_BITMAPFILEHEADER_H
#define INC_9_FRACTALIMAGE_BITMAPFILEHEADER_H

// We need to be sure that the int is 32 bit.
#include <cstdint>
// Allignment on 2 byte. For bitmap.
#pragma pack(2)

namespace  cop {

    struct BitmapFileHeader {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };


}

#endif //INC_9_FRACTALIMAGE_BITMAPFILEHEADER_H
