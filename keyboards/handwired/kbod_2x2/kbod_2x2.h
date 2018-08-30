#ifndef KBOD_2X2_H
#define KBOD_2X2_H

#include "quantum.h"

#define KEYMAP( \
    k00, k01, k02, \
    k10, k11, k12 \
) \
{ \
    { k00, k01, k02 }, \
    { k10, k11, k12 }, \
}

#endif