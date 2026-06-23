#include "grains.h"

uint64_t square(uint8_t i)
{
    if (i < 1 || i > 64)
    {
        return 0; 
    }
    return 1ll << (i - 1); 
}

uint64_t total(void)
{
    return UINT64_MAX; 
}
