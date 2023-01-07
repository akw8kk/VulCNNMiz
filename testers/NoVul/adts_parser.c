

#include "config.h"

#include <stddef.h>
#include <stdint.h>

#include "adts_header.h"
#include "adts_parser.h"

int FUN1(const uint8_t *VAR6, uint32_t *VAR8, uint8_t *VAR9)
{
#if VAR10
    GetBitContext VAR11;
    AACADTSHeaderInfo VAR12;
    int VAR13 = FUN2(&VAR11, VAR6, VAR14);
    if (VAR13 < 0)
        return VAR13;
    VAR13 = FUN3(&VAR11, &VAR12);
    if (VAR13 < 0)
        return VAR13;
    *VAR8 = VAR12.VAR8;
    *VAR9  = VAR12.VAR15;
    return 0;
#else
    return FUN4(VAR16);
#endif
}
