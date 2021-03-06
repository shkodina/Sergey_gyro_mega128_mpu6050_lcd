//#include "common_makros.h"

#ifndef COMMON_MAKROS_H
#define COMMON_MAKROS_H

#define INVBIT(port, bit) port = port ^ (1<<bit);
#define UPBIT(port, bit) port = port | (1<<bit);
#define DOWNBIT(port, bit) port = port & (~(1<<bit));


#endif
