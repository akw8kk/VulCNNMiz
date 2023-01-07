
#include "config.h"
#include "libavutil/attributes.h"
#include "aacpsdsp.h"

static void FUN1(float *VAR2, const float (*VAR3)[2], int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        VAR2[VAR5] += VAR3[VAR5][0] * VAR3[VAR5][0] + VAR3[VAR5][1] * VAR3[VAR5][1];
}

static void FUN2(float (*VAR2)[2], float (*VAR6)[2], float *VAR7,
                                 int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++) {
        VAR2[VAR5][0] = VAR6[VAR5][0] * VAR7[VAR5];
        VAR2[VAR5][1] = VAR6[VAR5][1] * VAR7[VAR5];
    }
}

static void FUN3(float (*VAR8)[2], float (*VAR9)[2],
                                 const float (*VAR10)[8][2],
                                 int VAR11, int VAR4)
{
    int VAR5, VAR12;

    for (VAR5 = 0; VAR5 < VAR4; VAR5++) {
        float VAR13 = VAR10[VAR5][6][0] * VAR9[6][0];
        float VAR14 = VAR10[VAR5][6][0] * VAR9[6][1];

        for (VAR12 = 0; VAR12 < 6; VAR12++) {
            float VAR15 = VAR9[VAR12][0];
            float VAR16 = VAR9[VAR12][1];
            float VAR17 = VAR9[12-VAR12][0];
            float VAR18 = VAR9[12-VAR12][1];
            VAR13 += VAR10[VAR5][VAR12][0] * (VAR15 + VAR17) -
                      VAR10[VAR5][VAR12][1] * (VAR16 - VAR18);
            VAR14 += VAR10[VAR5][VAR12][0] * (VAR16 + VAR18) +
                      VAR10[VAR5][VAR12][1] * (VAR15 - VAR17);
        }
        VAR8[VAR5 * VAR11][0] = VAR13;
        VAR8[VAR5 * VAR11][1] = VAR14;
    }
}

static void FUN4(float (*VAR8)[32][2], float VAR19[2][38][64],
                                        int VAR5, int VAR20)
{
    int VAR12;

    for (; VAR5 < 64; VAR5++) {
        for (VAR12 = 0; VAR12 < VAR20; VAR12++) {
            VAR8[VAR5][VAR12][0] = VAR19[0][VAR12][VAR5];
            VAR8[VAR5][VAR12][1] = VAR19[1][VAR12][VAR5];
        }
    }
}

static void FUN5(float VAR8[2][38][64],
                                        float (*VAR9)[32][2],
                                        int VAR5, int VAR20)
{
    int VAR4;

    for (; VAR5 < 64; VAR5++) {
        for (VAR4 = 0; VAR4 < VAR20; VAR4++) {
            VAR8[0][VAR4][VAR5] = VAR9[VAR5][VAR4][0];
            VAR8[1][VAR4][VAR5] = VAR9[VAR5][VAR4][1];
        }
    }
}


static void FUN6(float (*VAR8)[2], float (*VAR21)[2],
                             float (*VAR22)[VAR23 + VAR24][2],
                             const float VAR25[2], const float (*VAR26)[2],
                             const float *VAR27,
                             float VAR28,
                             int VAR20)
{
    static const float VAR29[] = { 0.65143905753106f,
                               0.56471812200776f,
                               0.48954165955695f };
    float VAR30[VAR31];
    int VAR32, VAR4;

    for (VAR32 = 0; VAR32 < VAR31; VAR32++)
        VAR30[VAR32] = VAR29[VAR32] * VAR28;

    for (VAR4 = 0; VAR4 < VAR20; VAR4++) {
        float VAR33 = VAR21[VAR4][0] * VAR25[0] - VAR21[VAR4][1] * VAR25[1];
        float VAR34 = VAR21[VAR4][0] * VAR25[1] + VAR21[VAR4][1] * VAR25[0];
        for (VAR32 = 0; VAR32 < VAR31; VAR32++) {
            float VAR35                = VAR30[VAR32] * VAR33;
            float VAR36                = VAR30[VAR32] * VAR34;
            float VAR37       = VAR22[VAR32][VAR4+2-VAR32][0];
            float VAR38       = VAR22[VAR32][VAR4+2-VAR32][1];
            float VAR39 = VAR26[VAR32][0];
            float VAR40 = VAR26[VAR32][1];
            float VAR41 = VAR33;
            float VAR42 = VAR34;
            VAR33 = VAR37 * VAR39 -
                    VAR38 * VAR40 - VAR35;
            VAR34 = VAR37 * VAR40 +
                    VAR38 * VAR39 - VAR36;
            VAR22[VAR32][VAR4+5][0] = VAR41 + VAR30[VAR32] * VAR33;
            VAR22[VAR32][VAR4+5][1] = VAR42 + VAR30[VAR32] * VAR34;
        }
        VAR8[VAR4][0] = VAR27[VAR4] * VAR33;
        VAR8[VAR4][1] = VAR27[VAR4] * VAR34;
    }
}

static void FUN7(float (*VAR43)[2], float (*VAR44)[2],
                                    float VAR45[2][4], float VAR46[2][4],
                                    int VAR20)
{
    float VAR47 = VAR45[0][0];
    float VAR48 = VAR45[0][1];
    float VAR49 = VAR45[0][2];
    float VAR50 = VAR45[0][3];
    float VAR51 = VAR46[0][0];
    float VAR52 = VAR46[0][1];
    float VAR53 = VAR46[0][2];
    float VAR54 = VAR46[0][3];
    int VAR4;

    for (VAR4 = 0; VAR4 < VAR20; VAR4++) {
        
        float VAR55 = VAR43[VAR4][0];
        float VAR56 = VAR43[VAR4][1];
        float VAR57 = VAR44[VAR4][0];
        float VAR58 = VAR44[VAR4][1];
        VAR47 += VAR51;
        VAR48 += VAR52;
        VAR49 += VAR53;
        VAR50 += VAR54;
        VAR43[VAR4][0] = VAR47 * VAR55 + VAR49 * VAR57;
        VAR43[VAR4][1] = VAR47 * VAR56 + VAR49 * VAR58;
        VAR44[VAR4][0] = VAR48 * VAR55 + VAR50 * VAR57;
        VAR44[VAR4][1] = VAR48 * VAR56 + VAR50 * VAR58;
    }
}

static void FUN8(float (*VAR43)[2], float (*VAR44)[2],
                                           float VAR45[2][4], float VAR46[2][4],
                                           int VAR20)
{
    float VAR59  = VAR45[0][0],      VAR60  = VAR45[1][0];
    float VAR61  = VAR45[0][1],      VAR62  = VAR45[1][1];
    float VAR63  = VAR45[0][2],      VAR64  = VAR45[1][2];
    float VAR65  = VAR45[0][3],      VAR66  = VAR45[1][3];
    float VAR67 = VAR46[0][0], VAR68 = VAR46[1][0];
    float VAR69 = VAR46[0][1], VAR70 = VAR46[1][1];
    float VAR71 = VAR46[0][2], VAR72 = VAR46[1][2];
    float VAR73 = VAR46[0][3], VAR74 = VAR46[1][3];
    int VAR4;

    for (VAR4 = 0; VAR4 < VAR20; VAR4++) {
        
        float VAR55 = VAR43[VAR4][0];
        float VAR56 = VAR43[VAR4][1];
        float VAR57 = VAR44[VAR4][0];
        float VAR58 = VAR44[VAR4][1];
        VAR59 += VAR67;
        VAR61 += VAR69;
        VAR63 += VAR71;
        VAR65 += VAR73;
        VAR60 += VAR68;
        VAR62 += VAR70;
        VAR64 += VAR72;
        VAR66 += VAR74;

        VAR43[VAR4][0] = VAR59 * VAR55 + VAR63 * VAR57 - VAR60 * VAR56 - VAR64 * VAR58;
        VAR43[VAR4][1] = VAR59 * VAR56 + VAR63 * VAR58 + VAR60 * VAR55 + VAR64 * VAR57;
        VAR44[VAR4][0] = VAR61 * VAR55 + VAR65 * VAR57 - VAR62 * VAR56 - VAR66 * VAR58;
        VAR44[VAR4][1] = VAR61 * VAR56 + VAR65 * VAR58 + VAR62 * VAR55 + VAR66 * VAR57;
    }
}

av_cold void FUN9(VAR75 *VAR76)
{
    VAR76->VAR77            = VAR78;
    VAR76->VAR79        = VAR80;
    VAR76->VAR81        = VAR82;
    VAR76->VAR83 = VAR84;
    VAR76->VAR85 = VAR86;
    VAR76->VAR87            = VAR88;
    VAR76->VAR89[0]  = VAR90;
    VAR76->VAR89[1]  = VAR91;

    if (VAR92)
        FUN10(VAR76);
}
