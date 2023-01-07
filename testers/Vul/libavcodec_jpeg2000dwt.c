
#include "libavutil/common.h"
#include "libavutil/mem.h"
#include "jpeg2000dwt.h"
#include "internal.h"


#define VAR100  1.586134342059924f
#define VAR101   0.052980118572961f
#define VAR102  0.882911075530934f
#define VAR103  0.443506852043971f
#define VAR104      1.230174104914001f
#define VAR105      1.625732422f

#define VAR106  103949
#define VAR107     3472
#define VAR108   57862
#define VAR109   29066
#define VAR110       80621
#define VAR111      106544


static inline void FUN1(int *VAR2, int VAR3, int VAR4)
{
    VAR2[VAR3 - 1] = VAR2[VAR3 + 1];
    VAR2[VAR4]     = VAR2[VAR4 - 2];
    VAR2[VAR3 - 2] = VAR2[VAR3 + 2];
    VAR2[VAR4 + 1] = VAR2[VAR4 - 3];
}

static inline void FUN2(float *VAR2, int VAR3, int VAR4)
{
    int VAR5;

    for (VAR5 = 1; VAR5 <= 4; VAR5++) {
        VAR2[VAR3 - VAR5]     = VAR2[VAR3 + VAR5];
        VAR2[VAR4 + VAR5 - 1] = VAR2[VAR4 - VAR5 - 1];
    }
}

static inline void FUN3(int32_t *VAR2, int VAR3, int VAR4)
{
    int VAR5;

    for (VAR5 = 1; VAR5 <= 4; VAR5++) {
        VAR2[VAR3 - VAR5]     = VAR2[VAR3 + VAR5];
        VAR2[VAR4 + VAR5 - 1] = VAR2[VAR4 - VAR5 - 1];
    }
}

static void FUN4(int *VAR2, int VAR3, int VAR4)
{
    int VAR5;

    if (VAR4 == VAR3 + 1)
        return;

    FUN1(VAR2, VAR3, VAR4);

    for (VAR5 = VAR3 / 2; VAR5 < VAR4 / 2 + 1; VAR5++)
        VAR2[2 * VAR5] -= (VAR2[2 * VAR5 - 1] + VAR2[2 * VAR5 + 1] + 2) >> 2;
    for (VAR5 = VAR3 / 2; VAR5 < VAR4 / 2; VAR5++)
        VAR2[2 * VAR5 + 1] += (VAR2[2 * VAR5] + VAR2[2 * VAR5 + 2]) >> 1;
}

static void FUN5(DWTContext *VAR8, int *VAR9)
{
    int VAR10;
    int VAR11     = VAR8->VAR12[VAR8->VAR13 - 1][0];
    int32_t *VAR14 = VAR8->VAR15;
    VAR14 += 3;

    for (VAR10 = 0; VAR10 < VAR8->VAR13; VAR10++) {
        int VAR16 = VAR8->VAR12[VAR10][0],
            VAR17 = VAR8->VAR12[VAR10][1],
            VAR18 = VAR8->VAR19[VAR10][0],
            VAR20 = VAR8->VAR19[VAR10][1],
            VAR21;
        int *VAR22;

        
        VAR22 = VAR14 + VAR18;
        for (VAR21 = 0; VAR21 < VAR17; VAR21++) {
            int VAR5, VAR23 = 0;
            
            for (VAR5 = VAR18; VAR5 < VAR16; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR9[VAR11 * VAR21 + VAR23];
            for (VAR5 = 1 - VAR18; VAR5 < VAR16; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR9[VAR11 * VAR21 + VAR23];

            FUN4(VAR14, VAR18, VAR18 + VAR16);

            for (VAR5 = 0; VAR5 < VAR16; VAR5++)
                VAR9[VAR11 * VAR21 + VAR5] = VAR22[VAR5];
        }

        
        VAR22 = VAR14 + VAR20;
        for (VAR21 = 0; VAR21 < VAR16; VAR21++) {
            int VAR5, VAR23 = 0;
            
            for (VAR5 = VAR20; VAR5 < VAR17; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR9[VAR11 * VAR23 + VAR21];
            for (VAR5 = 1 - VAR20; VAR5 < VAR17; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR9[VAR11 * VAR23 + VAR21];

            FUN4(VAR14, VAR20, VAR20 + VAR17);

            for (VAR5 = 0; VAR5 < VAR17; VAR5++)
                VAR9[VAR11 * VAR5 + VAR21] = VAR22[VAR5];
        }
    }
}

static void FUN6(float *VAR2, int VAR3, int VAR4)
{
    int VAR5;

    if (VAR4 == VAR3 + 1)
        return;

    FUN2(VAR2, VAR3, VAR4);

    for (VAR5 = VAR3 / 2 - 1; VAR5 < VAR4 / 2 + 2; VAR5++)
        VAR2[2 * VAR5]     -= VAR24 * (VAR2[2 * VAR5 - 1] + VAR2[2 * VAR5 + 1]);
    
    for (VAR5 = VAR3 / 2 - 1; VAR5 < VAR4 / 2 + 1; VAR5++)
        VAR2[2 * VAR5 + 1] -= VAR25 * (VAR2[2 * VAR5]     + VAR2[2 * VAR5 + 2]);
    
    for (VAR5 = VAR3 / 2; VAR5 < VAR4 / 2 + 1; VAR5++)
        VAR2[2 * VAR5]     += VAR26  * (VAR2[2 * VAR5 - 1] + VAR2[2 * VAR5 + 1]);
    
    for (VAR5 = VAR3 / 2; VAR5 < VAR4 / 2; VAR5++)
        VAR2[2 * VAR5 + 1] += VAR27 * (VAR2[2 * VAR5]     + VAR2[2 * VAR5 + 2]);
}

static void FUN7(DWTContext *VAR8, float *VAR9)
{
    int VAR10;
    int VAR11       = VAR8->VAR12[VAR8->VAR13 - 1][0];
    float *VAR14 = VAR8->VAR28;
    float *VAR29 = VAR9;
    
    VAR14 += 5;

    for (VAR10 = 0; VAR10 < VAR8->VAR13; VAR10++) {
        int VAR16 = VAR8->VAR12[VAR10][0],
            VAR17 = VAR8->VAR12[VAR10][1],
            VAR18 = VAR8->VAR19[VAR10][0],
            VAR20 = VAR8->VAR19[VAR10][1],
            VAR21;
        float *VAR22;
        
        VAR22 = VAR14 + VAR18;
        for (VAR21 = 0; VAR21 < VAR17; VAR21++) {
            int VAR5, VAR23 = 0;
            
            for (VAR5 = VAR18; VAR5 < VAR16; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR29[VAR11 * VAR21 + VAR23] * VAR30;
            for (VAR5 = 1 - VAR18; VAR5 < VAR16; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR29[VAR11 * VAR21 + VAR23] * VAR31;

            FUN6(VAR14, VAR18, VAR18 + VAR16);

            for (VAR5 = 0; VAR5 < VAR16; VAR5++)
                VAR29[VAR11 * VAR21 + VAR5] = VAR22[VAR5];
        }

        
        VAR22 = VAR14 + VAR20;
        for (VAR21 = 0; VAR21 < VAR16; VAR21++) {
            int VAR5, VAR23 = 0;
            
            for (VAR5 = VAR20; VAR5 < VAR17; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR29[VAR11 * VAR23 + VAR21] * VAR30;
            for (VAR5 = 1 - VAR20; VAR5 < VAR17; VAR5 += 2, VAR23++)
                VAR22[VAR5] = VAR29[VAR11 * VAR23 + VAR21] * VAR31;

            FUN6(VAR14, VAR20, VAR20 + VAR17);

            for (VAR5 = 0; VAR5 < VAR17; VAR5++)
                VAR29[VAR11 * VAR5 + VAR21] = VAR22[VAR5];
        }
    }
}

static void FUN8(int32_t *VAR2, int VAR3, int VAR4)
{
    int VAR5;

    if (VAR4 == VAR3 + 1)
        return;

    FUN3(VAR2, VAR3, VAR4);

    for (VAR5 = VAR3 / 2 - 1; VAR5 < VAR4 / 2 + 2; VAR5++)
        VAR2[2 * VAR5]     -= (VAR32 * (VAR2[2 * VAR5 - 1] + VAR2[2 * VAR5 + 1]) + (1 << 15)) >> 16;
    
    for (VAR5 = VAR3 / 2 - 1; VAR5 < VAR4 / 2 + 1; VAR5++)
        VAR2[2 * VAR5 + 1] -= (VAR33 * (VAR2[2 * VAR5]     + VAR2[2 * VAR5 + 2]) + (1 << 15)) >> 16;
    
    for (VAR5 = VAR3 / 2; VAR5 < VAR4 / 2 + 1; VAR5++)
        VAR2[2 * VAR5]     += (VAR34  * (VAR2[2 * VAR5 - 1] + VAR2[2 * VAR5 + 1]) + (1 << 15)) >> 16;
    
    for (VAR5 = VAR3 / 2; VAR5 < VAR4 / 2; VAR5++)
        VAR2[2 * VAR5 + 1] += (VAR35 * (VAR2[2 * VAR5]     + VAR2[2 * VAR5 + 2]) + (1 << 15)) >> 16;
}

static void FUN9(DWTContext *VAR8, int32_t *VAR9)
{
    int VAR10;
    int VAR11       = VAR8->VAR12[VAR8->VAR13 - 1][0];
    int32_t *VAR14 = VAR8->VAR15;
    int32_t *VAR29 = VAR9;
    
    VAR14 += 5;

    for (VAR10 = 0; VAR10 < VAR8->VAR13; VAR10++) {
        int VAR16 = VAR8->VAR12[VAR10][0],
            VAR17 = VAR8->VAR12[VAR10][1],
            VAR18 = VAR8->VAR19[VAR10][0],
            VAR20 = VAR8->VAR19[VAR10][1],
            VAR21;
        int32_t *VAR22;
        
        VAR22 = VAR14 + VAR18;
        for (VAR21 = 0; VAR21 < VAR17; VAR21++) {
            int VAR5, VAR23 = 0;
            
            for (VAR5 = VAR18; VAR5 < VAR16; VAR5 += 2, VAR23++)
                VAR22[VAR5] = ((VAR29[VAR11 * VAR21 + VAR23] * VAR36) + (1 << 15)) >> 16;
            for (VAR5 = 1 - VAR18; VAR5 < VAR16; VAR5 += 2, VAR23++)
                VAR22[VAR5] = ((VAR29[VAR11 * VAR21 + VAR23] * VAR37) + (1 << 15)) >> 16;

            FUN8(VAR14, VAR18, VAR18 + VAR16);

            for (VAR5 = 0; VAR5 < VAR16; VAR5++)
                VAR29[VAR11 * VAR21 + VAR5] = VAR22[VAR5];
        }

        
        VAR22 = VAR14 + VAR20;
        for (VAR21 = 0; VAR21 < VAR16; VAR21++) {
            int VAR5, VAR23 = 0;
            
            for (VAR5 = VAR20; VAR5 < VAR17; VAR5 += 2, VAR23++)
                VAR22[VAR5] = ((VAR29[VAR11 * VAR23 + VAR21] * VAR36) + (1 << 15)) >> 16;
            for (VAR5 = 1 - VAR20; VAR5 < VAR17; VAR5 += 2, VAR23++)
                VAR22[VAR5] = ((VAR29[VAR11 * VAR23 + VAR21] * VAR37) + (1 << 15)) >> 16;

            FUN8(VAR14, VAR20, VAR20 + VAR17);

            for (VAR5 = 0; VAR5 < VAR17; VAR5++)
                VAR29[VAR11 * VAR5 + VAR21] = VAR22[VAR5];
        }
    }
}

int FUN10(DWTContext *VAR8, uint16_t VAR38[2][2],
                         int VAR39, int VAR40)
{
    int VAR5, VAR23, VAR10 = VAR39, VAR41,
        VAR42[2][2];

    VAR8->VAR13 = VAR39;
    VAR8->VAR40       = VAR40;

    for (VAR5 = 0; VAR5 < 2; VAR5++)
        for (VAR23 = 0; VAR23 < 2; VAR23++)
            VAR42[VAR5][VAR23] = VAR38[VAR5][VAR23];

    VAR41 = FUN11(VAR42[0][1] - VAR42[0][0],
                   VAR42[1][1] - VAR42[1][0]);
    while (--VAR10 >= 0)
        for (VAR5 = 0; VAR5 < 2; VAR5++) {
            VAR8->VAR12[VAR10][VAR5] = VAR42[VAR5][1] - VAR42[VAR5][0];
            VAR8->VAR19[VAR10][VAR5]     = VAR42[VAR5][0] & 1;
            for (VAR23 = 0; VAR23 < 2; VAR23++)
                VAR42[VAR5][VAR23] = (VAR42[VAR5][VAR23] + 1) >> 1;
        }
    switch (VAR40) {
    case VAR43:
        VAR8->VAR28 = FUN12((VAR41 + 12) * sizeof(*VAR8->VAR28));
        if (!VAR8->VAR28)
            return FUN13(VAR44);
        break;
     case VAR45:
        VAR8->VAR15 = FUN12((VAR41 + 12) * sizeof(*VAR8->VAR15));
        if (!VAR8->VAR15)
            return FUN13(VAR44);
        break;
    case VAR46:
        VAR8->VAR15 = FUN12((VAR41 +  6) * sizeof(*VAR8->VAR15));
        if (!VAR8->VAR15)
            return FUN13(VAR44);
        break;
    default:
        return -1;
    }
    return 0;
}

int FUN14(DWTContext *VAR8, void *VAR9)
{
    switch (VAR8->VAR40) {
    case VAR43:
        FUN7(VAR8, VAR9);
        break;
    case VAR45:
        FUN9(VAR8, VAR9);
        break;
    case VAR46:
        FUN5(VAR8, VAR9);
        break;
    default:
        return -1;
    }
    return 0;
}

void FUN15(DWTContext *VAR8)
{
    FUN16(&VAR8->VAR28);
    FUN16(&VAR8->VAR15);
}