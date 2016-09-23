#ifndef CRC32_H
#define CRC32_H
#include <stdint.h>

namespace nemo {
const uint32_t MAX_SLOT_NUM = 1024;
uint32_t crc32_checksum(const char *buf, int len) ;

void crc32_init() ;
}

#endif
