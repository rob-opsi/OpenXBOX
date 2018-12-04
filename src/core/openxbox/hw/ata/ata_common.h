// ATA/ATAPI-4 emulation for the Original Xbox
// (C) Ivan "StrikerX3" Oliveira
//
// This code aims to implement a subset of the ATA/ATAPI-4 specification
// that satisifies the requirements of an IDE interface for the Original Xbox.
//
// Specification:
// http://www.t13.org/documents/UploadedDocuments/project/d1153r18-ATA-ATAPI-4.pdf
//
// References to particular items in the specification are denoted between brackets
// optionally followed by a quote from the specification.
#pragma once

#include <cstdint>

#include "openxbox/cpu.h"
#include "../ata/defs.h"

namespace openxbox {
namespace hw {
namespace ata {

enum Channel {
    ChanPrimary,
    ChanSecondary,
};

struct ATARegisters {
    uint8_t status = 0;
    uint8_t error = 0;
    uint8_t features = 0;
    uint8_t sectorCount = 0;
    uint8_t sectorNumber = 0;
    uint16_t cylinder = 0;
    uint8_t deviceHead = 0;
    uint8_t control = 0;
};

}
}
}
