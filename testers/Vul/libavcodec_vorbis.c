

#include "libavutil/common.h"

#include "avcodec.h"
#include "vorbis.h"


unsigned int FUN1(unsigned int VAR2, unsigned int VAR3)
{
    unsigned int VAR4 = 0, VAR5, VAR6;

    do {
        ++VAR4;
        for (VAR5 = 0, VAR6 = VAR4; VAR5 < VAR3 - 1; VAR5++)
            VAR6 *= VAR4;
    } while (VAR6 <= VAR2);

    return VAR4 - 1;
}






int FUN2(uint8_t *VAR8, uint32_t *VAR10, unsigned VAR11)
{
    uint32_t VAR12[33] = { 404 };
    unsigned VAR5, VAR6, VAR13, VAR14;

    for (VAR13 = 0; (VAR8[VAR13] == 0) && (VAR13 < VAR11); ++VAR13)
        ;
    if (VAR13 == VAR11)
        return 0;

    VAR10[VAR13] = 0;
    if (VAR8[VAR13] > 32)
        return 1;
    for (VAR5 = 0; VAR5 < VAR8[VAR13]; ++VAR5)
        VAR12[VAR5+1] = 1 << VAR5;

    ++VAR13;

    for (; VAR13 < VAR11; ++VAR13) {
        if (VAR8[VAR13] > 32)
             return 1;
        if (VAR8[VAR13] == 0)
             continue;
        
        for (VAR5 = VAR8[VAR13]; VAR5 > 0; --VAR5)
            if (VAR12[VAR5])
                break;
        if (!VAR5) 
             return 1;
        VAR14 = VAR12[VAR5];
        VAR12[VAR5] = 0;
        
        for (VAR6 = VAR5 + 1 ;VAR6 <= VAR8[VAR13]; ++VAR6)
            VAR12[VAR6] = VAR14 + (1 << (VAR6 - 1));
        VAR10[VAR13] = VAR14;
    }

    
    for (VAR13 = 1; VAR13 < 33; VAR13++)
        if (VAR12[VAR13])
            return 1;

    return 0;
}

int FUN3(AVCodecContext *VAR16,
                                vorbis_floor1_entry *VAR18, int VAR19)
{
    int VAR5;
    VAR18[0].VAR20 = 0;
    VAR18[1].VAR20 = 1;
    for (VAR5 = 2; VAR5 < VAR19; VAR5++) {
        int VAR6;
        VAR18[VAR5].VAR21  = 0;
        VAR18[VAR5].VAR22 = 1;
        VAR18[VAR5].VAR20 = VAR5;
        for (VAR6 = 2; VAR6 < VAR5; VAR6++) {
            int VAR23 = VAR18[VAR6].VAR2;
            if (VAR23 < VAR18[VAR5].VAR2) {
                if (VAR23 > VAR18[VAR18[VAR5].VAR21].VAR2)
                    VAR18[VAR5].VAR21  =  VAR6;
            } else {
                if (VAR23 < VAR18[VAR18[VAR5].VAR22].VAR2)
                    VAR18[VAR5].VAR22 = VAR6;
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR19 - 1; VAR5++) {
        int VAR6;
        for (VAR6 = VAR5 + 1; VAR6 < VAR19; VAR6++) {
            if (VAR18[VAR5].VAR2 == VAR18[VAR6].VAR2) {
                FUN4(VAR16, VAR24,
                       "");
                return VAR25;
            }
            if (VAR18[VAR18[VAR5].VAR20].VAR2 > VAR18[VAR18[VAR6].VAR20].VAR2) {
                int VAR23 = VAR18[VAR5].VAR20;
                VAR18[VAR5].VAR20 = VAR18[VAR6].VAR20;
                VAR18[VAR6].VAR20 = VAR23;
            }
        }
    }
    return 0;
}

static inline void FUN5(intptr_t VAR2, int VAR26, int VAR27,
                                        intptr_t VAR28, int VAR29, int VAR30,
                                        float *VAR31)
{
    int VAR32 = -VAR30;
    VAR2 -= VAR27 - 1;
    VAR31 += VAR27 - 1;
    while (++VAR2 < 0) {
        VAR32 += VAR29;
        if (VAR32 >= 0) {
            VAR32 += VAR29 - VAR30;
            VAR26   += VAR28;
            VAR31[VAR2++] = VAR33[FUN6(VAR26)];
        }
        VAR31[VAR2] = VAR33[FUN6(VAR26)];
    }
    if (VAR2 <= 0) {
        if (VAR32 + VAR29 >= 0)
            VAR26 += VAR28;
        VAR31[VAR2] = VAR33[FUN6(VAR26)];
    }
}

static void FUN7(int VAR34, int VAR35, int VAR27, int VAR36, float *VAR31)
{
    int VAR37  = VAR36 - VAR35;
    int VAR30 = VAR27 - VAR34;
    int VAR29 = FUN8(VAR37);
    int VAR28  = VAR37 < 0 ? -1 : 1;
    VAR31[VAR34] = VAR33[FUN6(VAR35)];
    if (VAR29*2 <= VAR30) { 
        FUN5(VAR34, VAR35, VAR27, VAR28, VAR29, VAR30, VAR31);
    } else {
        int VAR38  = VAR37 / VAR30;
        int VAR2     = VAR34;
        int VAR26     = VAR35;
        int VAR32   = -VAR30;
        VAR29 -= FUN8(VAR38) * VAR30;
        while (++VAR2 < VAR27) {
            VAR26 += VAR38;
            VAR32 += VAR29;
            if (VAR32 >= 0) {
                VAR32 -= VAR30;
                VAR26   += VAR28;
            }
            VAR31[VAR2] = VAR33[FUN6(VAR26)];
        }
    }
}

void FUN9(vorbis_floor1_entry * VAR18, int VAR19,
                                  uint16_t *VAR40, int *VAR41,
                                  int VAR42, float *VAR43, int VAR44)
{
    int VAR45, VAR46, VAR5;
    VAR45 = 0;
    VAR46 = VAR40[0] * VAR42;
    for (VAR5 = 1; VAR5 < VAR19; VAR5++) {
        int VAR47 = VAR18[VAR5].VAR20;
        if (VAR41[VAR47]) {
            int VAR27 = VAR18[VAR47].VAR2;
            int VAR36 = VAR40[VAR47] * VAR42;
            if (VAR45 < VAR44)
                FUN7(VAR45, VAR46, FUN10(VAR27,VAR44), VAR36, VAR43);
            VAR45 = VAR27;
            VAR46 = VAR36;
        }
        if (VAR45 >= VAR44)
            break;
    }
    if (VAR45 < VAR44)
        FUN7(VAR45, VAR46, VAR44, VAR46, VAR43);
}