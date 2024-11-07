#ifndef NO_SD
#if ARDUINO_ARCH_ESP32

#include "SDMMCFS2.h"
using namespace fs;

#include "vfs_api.h"

SDMMCFS2 fs::SD_MMC_2 = SDMMCFS2(FSImplPtr(new VFSImpl()));
#endif
#endif