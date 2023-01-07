
#include "aac.h"
#include "sbr.h"
#include "aacsbr.h"
#include "aacsbrdata.h"
#include "fft.h"
#include "aacps.h"
#include "sbrdsp.h"
#include "libavutil/internal.h"
#include "libavutil/libm.h"

#include <stdint.h>
#include <float.h>

#define VAR1 2
#define VAR2 6.0f


enum {
    VAR4,
    VAR5,
    VAR6,
    VAR7,
    VAR8,
    VAR9,
    VAR10,
    VAR11,
    VAR12,
    VAR13,
};


enum {
    VAR14,
    VAR15,
    VAR16,
    VAR17,
};

enum {
    VAR18 = 2,
};


static VLC VAR19[10];
static const int8_t VAR20[10] =
    { 60, 60, 24, 24, 31, 31, 12, 12, 31, 12 };

#define FUN1(VAR22, VAR23) \
    FUN2(&VAR19[VAR22], 9, VAR24[VAR22].VAR25 / VAR24[VAR22].VAR26,     \
                    VAR24[VAR22].VAR27 ,                      1,                      1, \
                    VAR24[VAR22].VAR28, VAR24[VAR22].VAR26, VAR24[VAR22].VAR26, \
                    VAR23)

#define FUN3(VAR29) \
    { VAR29 ## VAR30, VAR29 ## VAR31, sizeof(VAR29 ## VAR30), sizeof(VAR29 ## VAR30[0]) }

av_cold void FUN4(void)
{
    int VAR32;
    static const struct {
        const void *VAR28, *VAR27;
        const unsigned int VAR25, VAR26;
    } VAR24[] = {
        FUN3(VAR33),
        FUN3(VAR34),
        FUN3(VAR35),
        FUN3(VAR36),
        FUN3(VAR37),
        FUN3(VAR38),
        FUN3(VAR39),
        FUN3(VAR40),
        FUN3(VAR41),
        FUN3(VAR42),
    };

    
    FUN1(0, 1098);
    FUN1(1, 1092);
    FUN1(2, 768);
    FUN1(3, 1026);
    FUN1(4, 1058);
    FUN1(5, 1052);
    FUN1(6, 544);
    FUN1(7, 544);
    FUN1(8, 592);
    FUN1(9, 512);


     for (VAR32 = 1; VAR32 < 320; VAR32++)
        VAR43[320 + VAR32] = VAR43[320 - VAR32];
    VAR43[384] = -VAR43[384];
    VAR43[512] = -VAR43[512];

    for (VAR32 = 0; VAR32 < 320; VAR32++)
        VAR44[VAR32] = VAR43[2*VAR32];

    FUN5();
}


static void FUN6(SpectralBandReplication *VAR46) {
    VAR46->VAR47 = 0;
    
    VAR46->VAR48[1] = 32; 
    VAR46->VAR49[1] = 0;
    
    VAR46->VAR50[0].VAR51[1] = VAR46->VAR50[1].VAR51[1] = -1;
    FUN100(&VAR46->VAR52, -1, sizeof(VAR53));
}

av_cold void FUN7(AACContext *VAR55, SpectralBandReplication *VAR46)
{
    VAR46->VAR48[0] = VAR46->VAR48[1];
    FUN6(VAR46);
    VAR46->VAR50[0].VAR56 = VAR57 - (1280 - 128);
    VAR46->VAR50[1].VAR56 = VAR57 - (1280 - 128);
    
    FUN8(&VAR46->VAR58,     7, 1, 1.0 / (64 * 32768.0));
    FUN8(&VAR46->VAR59, 7, 1, -2.0 * 32768.0);
    FUN9(&VAR46->VAR60);
    FUN10(&VAR46->VAR61);
}

av_cold void FUN11(SpectralBandReplication *VAR46)
{
    FUN12(&VAR46->VAR58);
    FUN12(&VAR46->VAR59);
}

static int FUN13(const void *VAR62, const void *VAR63)
{
    return *(const int16_t *)VAR62 - *(const int16_t *)VAR63;
}

static inline int FUN14(const int16_t *VAR65, int VAR66, int16_t VAR67)
{
     int VAR68;
    for (VAR68 = 0; VAR68 <= VAR66; VAR68++)
        if (VAR65[VAR68] == VAR67)
            return 1;
    return 0;
}


static void sbr_make_f_tablelim(SpectralBandReplication *sbr)
{
     int VAR69;
    if (VAR46->VAR70 > 0) {
        static const float VAR71[3] = { 1.32715174233856803909f,   
                                               1.18509277094158210129f,   
                                               1.11987160404675912501f }; 
        const float VAR72 = VAR71[VAR46->VAR70 - 1];
        int16_t VAR73[7];
        uint16_t *VAR75 = VAR46->VAR76 + 1, *VAR77 = VAR46->VAR76;

        VAR73[0] = VAR46->VAR48[1];
        for (VAR69 = 1; VAR69 <= VAR46->VAR78; VAR69++)
            VAR73[VAR69] = VAR73[VAR69-1] + VAR46->VAR79[VAR69-1];

        FUN100(VAR46->VAR76, VAR46->VAR80,
               (VAR46->VAR32[0] + 1) * sizeof(VAR46->VAR80[0]));
        if (VAR46->VAR78 > 1)
            FUN100(VAR46->VAR76 + VAR46->VAR32[0] + 1, VAR73 + 1,
                   (VAR46->VAR78 - 1) * sizeof(VAR73[0]));

        FUN16(VAR46->VAR76, VAR46->VAR78 + VAR46->VAR32[0],
              sizeof(VAR46->VAR76[0]),
              VAR81);

        VAR46->VAR82 = VAR46->VAR32[0] + VAR46->VAR78 - 1;
        while (VAR77 < VAR46->VAR76 + VAR46->VAR82) {
            if (*VAR75 >= *VAR77 * VAR72) {
                *++VAR77 = *VAR75++;
            } else if (*VAR75 == *VAR77 ||
                !FUN14(VAR73, VAR46->VAR78, *VAR75)) {
                VAR75++;
                VAR46->VAR82--;
            } else if (!FUN14(VAR73, VAR46->VAR78, *VAR77)) {
                *VAR77 = *VAR75++;
                VAR46->VAR82--;
            } else {
                *++VAR77 = *VAR75++;
            }
        }
     } else {
        VAR46->VAR76[0] = VAR46->VAR80[0];
        VAR46->VAR76[1] = VAR46->VAR80[VAR46->VAR32[0]];
        VAR46->VAR82 = 1;
    }
}

static unsigned int FUN17(SpectralBandReplication *VAR46, GetBitContext *VAR84)
{
    unsigned int VAR85 = FUN18(VAR84);
    uint8_t VAR86;
    uint8_t VAR87;
    int VAR88 = VAR46->VAR70;
    SpectrumParameters VAR89;

    VAR46->VAR47 = 1;

   
    FUN100(&&VAR89, &VAR46->VAR52, sizeof(VAR53));

    VAR46->VAR90              = FUN19(VAR84);
    VAR46->VAR52.VAR91  = FUN20(VAR84, 4);
    VAR46->VAR52.VAR92   = FUN20(VAR84, 4);
    VAR46->VAR52.VAR93  = FUN20(VAR84, 3);
                                          FUN21(VAR84, 2);  

     VAR86 = FUN19(VAR84);
    VAR87 = FUN19(VAR84);

    if (VAR86) {
        VAR46->VAR52.VAR94  = FUN20(VAR84, 2);
        VAR46->VAR52.VAR95 = FUN19(VAR84);
        VAR46->VAR52.VAR96 = FUN20(VAR84, 2);
    } else {
        VAR46->VAR52.VAR94  = 2;
        VAR46->VAR52.VAR95 = 1;
        VAR46->VAR52.VAR96 = 2;
    }

  
    if (FUN100(&VAR89, &VAR46->VAR52, sizeof(VAR53)))
        VAR46->VAR97 = 1;

    if (VAR87) {
        VAR46->VAR70  = FUN20(VAR84, 2);
        VAR46->VAR98  = FUN20(VAR84, 2);
        VAR46->VAR99  = FUN19(VAR84);
        VAR46->VAR100 = FUN19(VAR84);
    } else {
        VAR46->VAR70  = 2;
        VAR46->VAR98  = 2;
        VAR46->VAR99  = 1;
        VAR46->VAR100 = 1;
    }

      if (VAR46->VAR70 != VAR88 && !VAR46->VAR97)
        FUN15(VAR46);

    return FUN18(VAR84) - VAR85;
}

static int FUN22(const int16_t *VAR101, int VAR102)
{
    int VAR68, VAR103 = VAR101[0];
    for (VAR68 = 1; VAR68 < VAR102; VAR68++)
        VAR103 = FUN23(VAR101[VAR68], VAR103);
    return VAR103;
}

static void FUN24(int16_t* VAR104, int VAR47, int VAR105, int VAR106)
{
    int VAR69, VAR107, VAR108;
    float VAR109, VAR110;

    VAR109 = FUN25((float)VAR105 / VAR47, 1.0f / VAR106);
    VAR110 = VAR47;
    VAR107 = VAR47;

    for (VAR69 = 0; VAR69 < VAR106-1; VAR69++) {
        VAR110 *= VAR109;
        VAR108  = FUN26(VAR110);
        VAR104[VAR69] = VAR108 - VAR107;
        VAR107 = VAR108;
    }
    VAR104[VAR106-1] = VAR105 - VAR107;
}

static int FUN27(AVCodecContext *VAR112, int VAR113, int VAR93)
{
    
    if (VAR113 <= 0) {
        FUN28(VAR112, VAR114, "", VAR113);
        return -1;
    }
    if (VAR93 >= VAR113) {
        FUN28(VAR112, VAR114,
               "",
               VAR93);
        return -1;
    }
    return 0;
}

static int FUN29(AACContext *VAR55, SpectralBandReplication *VAR46,
                            SpectrumParameters *VAR115)
{
    unsigned int VAR116, VAR117 = 0;
    unsigned int VAR118, VAR119;
    int VAR69;
    const int8_t *VAR121;
    int16_t VAR122[13];

    switch (VAR46->VAR123) {
    case 16000:
        VAR121 = VAR124[0];
        break;
    case 22050:
        VAR121 = VAR124[1];
        break;
    case 24000:
        VAR121 = VAR124[2];
        break;
    case 32000:
        VAR121 = VAR124[3];
        break;
    case 44100: case 48000: case 64000:
        VAR121 = VAR124[4];
        break;
    case 88200: case 96000: case 128000: case 176400: case 192000:
        VAR121 = VAR124[5];
        break;
    default:
        FUN28(VAR55->VAR112, VAR114,
               "", VAR46->VAR123);
        return -1;
    }

    if (VAR46->VAR123 < 32000) {
        VAR116 = 3000;
    } else if (VAR46->VAR123 < 64000) {
        VAR116 = 4000;
    } else
        VAR116 = 5000;

    VAR118 = ((VAR116 << 7) + (VAR46->VAR123 >> 1)) / VAR46->VAR123;
    VAR119  = ((VAR116 << 8) + (VAR46->VAR123 >> 1)) / VAR46->VAR123;

    VAR46->VAR69[0] = VAR118 + VAR121[VAR115->VAR91];


        if (VAR115->VAR92 < 14) {
        VAR46->VAR69[2] = VAR119;
        FUN24(VAR122, VAR119, 64, 13);
        FUN16(VAR122, 13, sizeof(VAR122[0]), VAR81);
        for (VAR69 = 0; VAR69 < VAR115->VAR92; VAR69++)
            VAR46->VAR69[2] += VAR122[VAR69];
    } else if (VAR115->VAR92 == 14) {
        VAR46->VAR69[2] = 2*VAR46->VAR69[0];
    } else if (VAR115->VAR92 == 15) {
        VAR46->VAR69[2] = 3*VAR46->VAR69[0];
    } else {
        FUN28(VAR55->VAR112, VAR114,
               "", VAR115->VAR92);
        return -1;
    }
    VAR46->VAR69[2] = FUN23(64, VAR46->VAR69[2]);

    
    if (VAR46->VAR123 <= 32000) {
        VAR117 = 48;
    } else if (VAR46->VAR123 == 44100) {
        VAR117 = 35;
    } else if (VAR46->VAR123 >= 48000)
        VAR117 = 32;

    if (VAR46->VAR69[2] - VAR46->VAR69[0] > VAR117) {
        FUN28(VAR55->VAR112, VAR114,
               "", VAR46->VAR69[2] - VAR46->VAR69[0]);
        return -1;
    }

    
    if (!VAR115->VAR94) {
        int VAR125, VAR126;

        VAR125 = VAR115->VAR95 + 1;
        VAR46->VAR113 = ((VAR46->VAR69[2] - VAR46->VAR69[0] + (VAR125&2)) >> VAR125) << 1;
        if (FUN27(VAR55->VAR112, VAR46->VAR113, VAR46->VAR52.VAR93))
            return -1;

        for (VAR69 = 1; VAR69 <= VAR46->VAR113; VAR69++)
            VAR46->VAR127[VAR69] = VAR125;

        VAR126 = VAR46->VAR69[2] - VAR46->VAR69[0] - VAR46->VAR113 * VAR125;
        if (VAR126 < 0) {
            VAR46->VAR127[1]--;
            VAR46->VAR127[2]-= (VAR126 < -1);
        } else if (VAR126) {
            VAR46->VAR127[VAR46->VAR113]++;
        }

        VAR46->VAR127[0] = VAR46->VAR69[0];
        for (VAR69 = 1; VAR69 <= VAR46->VAR113; VAR69++)
            VAR46->VAR127[VAR69] += VAR46->VAR127[VAR69 - 1];

    } else {
        int VAR128 = 7 - VAR115->VAR94;      
        int VAR129, VAR130;
        int VAR131, VAR132;
        int16_t VAR133[49];

        if (49 * VAR46->VAR69[2] > 110 * VAR46->VAR69[0]) {
            VAR129 = 1;
            VAR46->VAR69[1] = 2 * VAR46->VAR69[0];
        } else {
            VAR129 = 0;
            VAR46->VAR69[1] = VAR46->VAR69[2];
        }

        VAR130 = FUN26(VAR128 * FUN30(VAR46->VAR69[1] / (float)VAR46->VAR69[0])) * 2;

        if (VAR130 <= 0) { 
            FUN28(VAR55->VAR112, VAR114, "", VAR130);
            return -1;
        }

        VAR133[0] = 0;

        FUN24(VAR133+1, VAR46->VAR69[0], VAR46->VAR69[1], VAR130);

        FUN16(VAR133 + 1, VAR130, sizeof(VAR133[1]), VAR81);
        VAR131 = VAR133[VAR130];

        VAR133[0] = VAR46->VAR69[0];
        for (VAR69 = 1; VAR69 <= VAR130; VAR69++) {
            if (VAR133[VAR69] <= 0) { 
                FUN28(VAR55->VAR112, VAR114, "", VAR69, VAR133[VAR69]);
                return -1;
            }
            VAR133[VAR69] += VAR133[VAR69-1];
        }

       if (VAR129) {
            int16_t VAR134[49];
            float VAR135 = VAR115->VAR95 ? 0.76923076923076923077f
                                                     : 1.0f; 
            int VAR136 = FUN26(VAR128 * VAR135 *
                                     FUN30(VAR46->VAR69[2] / (float)VAR46->VAR69[1])) * 2;

            FUN24(VAR134+1, VAR46->VAR69[1], VAR46->VAR69[2], VAR136);

            VAR132 = FUN22(VAR134 + 1, VAR136);

            if (VAR132 < VAR131) {
                int VAR137;
                FUN16(VAR134 + 1, VAR136, sizeof(VAR134[1]), VAR81);
                VAR137 = FUN23(VAR131 - VAR134[1], (VAR134[VAR136] - VAR134[1]) >> 1);
                VAR134[1]           += VAR137;
                VAR134[VAR136] -= VAR137;
            }

            FUN16(VAR134 + 1, VAR136, sizeof(VAR134[1]), VAR81);

            VAR134[0] = VAR46->VAR69[1];
            for (VAR69 = 1; VAR69 <= VAR136; VAR69++) {
                if (VAR134[VAR69] <= 0) { 
                    FUN28(VAR55->VAR112, VAR114, "", VAR69, VAR134[VAR69]);
                    return -1;
                }
                VAR134[VAR69] += VAR134[VAR69-1];
            }

            VAR46->VAR113 = VAR130 + VAR136;
            if (FUN27(VAR55->VAR112, VAR46->VAR113, VAR46->VAR52.VAR93))
                return -1;
            FUN100(&VAR46->VAR127[0],               VAR133,
                   (VAR130 + 1) * sizeof(VAR46->VAR127[0]));
            FUN100(&VAR46->VAR127[VAR130 + 1], VAR134 + 1,
                    VAR136      * sizeof(VAR46->VAR127[0]));
        } else {
            VAR46->VAR113 = VAR130;
            if (FUN27(VAR55->VAR112, VAR46->VAR113, VAR46->VAR52.VAR93))
                return -1;
            memcpy(VAR46->VAR127, VAR133, (VAR130 + 1) * sizeof(VAR46->VAR127[0]));
        }
    }

    return 0;
}

/// High Frequency Generation - Patch Construction (14496-3 sp04 p216 fig. 4.46)
static int FUN31(AACContext *VAR55, SpectralBandReplication *VAR46)
{
    int VAR68, VAR69, VAR138 = 0;
    int VAR139 = VAR46->VAR69[0];
    int VAR140 = VAR46->VAR48[1];
    int VAR141 = ((1000 << 11) + (VAR46->VAR123 >> 1)) / VAR46->VAR123;

    VAR46->VAR78 = 0;

    if (VAR141 < VAR46->VAR48[1] + VAR46->VAR49[1]) {
        for (VAR69 = 0; VAR46->VAR127[VAR69] < VAR141; VAR69++) ;
    } else
        VAR69 = VAR46->VAR113;

   do {
        int VAR142 = 0;
        for (VAR68 = VAR69; VAR68 == VAR69 || VAR138 > (VAR46->VAR69[0] - 1 + VAR139 - VAR142); VAR68--) {
            VAR138 = VAR46->VAR127[VAR68];
            VAR142 = (VAR138 + VAR46->VAR69[0]) & 1;
        }

        
       
        if (VAR46->VAR78 > 5) {
            FUN28(VAR55->VAR112, VAR114, "", VAR46->VAR78);
            return -1;
        }

        VAR46->VAR79[VAR46->VAR78]  = FUN32(VAR138 - VAR140, 0);
        VAR46->VAR143[VAR46->VAR78] = VAR46->VAR69[0] - VAR142 - VAR46->VAR79[VAR46->VAR78];

        if (VAR46->VAR79[VAR46->VAR78] > 0) {
            VAR140 = VAR138;
            VAR139 = VAR138;
            VAR46->VAR78++;
        } else
            VAR139 = VAR46->VAR48[1];

        if (VAR46->VAR127[VAR69] - VAR138 < 3)
            VAR69 = VAR46->VAR113;
    } while (VAR138 != VAR46->VAR48[1] + VAR46->VAR49[1]);

    if (VAR46->VAR78 > 1 &&
        VAR46->VAR79[VAR46->VAR78 - 1] < 3)
        VAR46->VAR78--;

    return 0;
}


static int FUN33(AACContext *VAR55, SpectralBandReplication *VAR46)
{
    int k, temp;

    VAR46->VAR32[1] = VAR46->VAR113 - VAR46->VAR52.VAR93;
    VAR46->VAR32[0] = (VAR46->VAR32[1] + 1) >> 1;

    FUN100(VAR46->VAR144, &VAR46->VAR127[VAR46->VAR52.VAR93],
           (VAR46->VAR32[1] + 1) * sizeof(VAR46->VAR127[0]));
    VAR46->VAR49[1] = VAR46->VAR144[VAR46->VAR32[1]] - VAR46->VAR144[0];
    VAR46->VAR48[1] = VAR46->VAR144[0];

    
    if (VAR46->VAR48[1] + VAR46->VAR49[1] > 64) {
        FUN28(VAR55->VAR112, VAR114,
               "", VAR46->VAR48[1] + VAR46->VAR49[1]);
        return -1;
    }
    if (VAR46->VAR48[1] > 32) {
        FUN28(VAR55->VAR112, VAR114, "", VAR46->VAR48[1]);
        return -1;
    }

     VAR46->VAR80[0] = VAR46->VAR144[0];
    VAR116 = VAR46->VAR32[1] & 1;
    for (VAR69 = 1; VAR69 <= VAR46->VAR32[0]; VAR69++)
        VAR46->VAR80[VAR69] = VAR46->VAR144[2 * VAR69 - VAR116];

    VAR46->VAR145 = FUN32(1, FUN26(VAR46->VAR52.VAR96 *
                               FUN30(VAR46->VAR69[2] / (float)VAR46->VAR48[1]))); 
    if (VAR46->VAR145 > 5) {
        FUN28(VAR55->VAR112, VAR114, "", VAR46->VAR145);
        return -1;
    }

    VAR46->VAR146[0] = VAR46->VAR80[0];
    VAR116 = 0;
    for (VAR69 = 1; VAR69 <= VAR46->VAR145; VAR69++) {
        VAR116 += (VAR46->VAR32[0] - VAR116) / (VAR46->VAR145 + 1 - VAR69);
        VAR46->VAR146[VAR69] = VAR46->VAR80[VAR116];
    }

    if (FUN31(VAR55, VAR46) < 0)
        return -1;

    FUN15(VAR46);

    VAR46->VAR50[0].VAR147 = 0;
    VAR46->VAR50[1].VAR147 = 0;

    return 0;

static av_always_inline void FUN34(GetBitContext *VAR84, uint8_t *VAR129,
                                              int VAR150)
{
     int VAR68;
    for (VAR68 = 0; VAR68 < VAR150; VAR68++) {
        VAR149[VAR68] = FUN19(VAR84);
    }
}


static const int8_t VAR151[] = {
    0, 1, 2, 2, 3, 3,
};

static int FUN35(AACContext *VAR55, SpectralBandReplication *VAR46,
                         GetBitContext *VAR84, SBRData *VAR153)
{
    int VAR68;
    int VAR154 = 0;
    
    int VAR155 = 16;
    int VAR156, VAR157;
    unsigned VAR158 = VAR153->VAR159;

    VAR153->VAR160[0] = VAR153->VAR160[VAR153->VAR159];
    VAR153->VAR161 = VAR46->VAR90;
    VAR153->VAR162 = VAR153->VAR163[VAR158];

    switch (VAR153->VAR164 = FUN20(VAR84, 2)) {
    case VAR14:
        VAR153->VAR159                 = 1 << FUN20(VAR84, 2);
        VAR156                        = VAR153->VAR159 - 1;
        if (VAR153->VAR159 == 1)
            VAR153->VAR161 = 0;

        if (VAR153->VAR159 > 4) {
            FUN28(VAR55->VAR112, VAR114,
                   "",
                   VAR153->VAR159);
            return -1;
        }

         VAR153->VAR163[0]                   = 0;
        VAR153->VAR163[VAR153->VAR159] = VAR155;

        VAR155 = (VAR155 + (VAR153->VAR159 >> 1)) /
                   VAR153->VAR159;
        for (VAR68 = 0; VAR68 < VAR156; VAR68++)
            VAR153->VAR163[VAR68 + 1] = VAR153->VAR163[VAR68] + VAR155;

        VAR153->VAR160[1] = FUN19(VAR84);
        for (VAR68 = 1; VAR68 < VAR153->VAR159; VAR68++)
            VAR153->VAR160[VAR68 + 1] = VAR153->VAR160[1];
        break;
    case VAR15:
        VAR155                     += FUN20(VAR84, 2);
        VAR157                       = FUN20(VAR84, 2);
        VAR153->VAR159                 = VAR157 + 1;
        VAR153->VAR163[0]                   = 0;
        VAR153->VAR163[VAR153->VAR159] = VAR155;

        for (VAR68 = 0; VAR68 < VAR157; VAR68++)
            VAR153->VAR163[VAR153->VAR159 - 1 - VAR68] =
                VAR153->VAR163[VAR153->VAR159 - VAR68] - 2 * FUN20(VAR84, 2) - 2;

          VAR154 = FUN20(VAR84, VAR151[VAR153->VAR159]);

        for (VAR68 = 0; VAR68 < VAR153->VAR159; VAR68++)
            VAR153->VAR160[VAR153->VAR159 - VAR68] = FUN19(VAR84);
        break;
    case VAR16:
        VAR153->VAR163[0]                   = FUN20(VAR84, 2);
        VAR156                        = FUN20(VAR84, 2);
        VAR153->VAR159                 = VAR156 + 1;
        VAR153->VAR163[VAR153->VAR159] = VAR155;

        for (VAR68 = 0; VAR68 < VAR156; VAR68++)
            VAR153->VAR163[VAR68 + 1] = VAR153->VAR163[VAR68] + 2 * FUN20(VAR84, 2) + 2;

        VAR154 = FUN20(VAR84, VAR151[VAR153->VAR159]);

        FUN34(VAR84, VAR153->VAR160 + 1, VAR153->VAR159);
        break;
     case VAR17:
        VAR153->VAR163[0]                   = FUN20(VAR84, 2);
        VAR155                     += FUN20(VAR84, 2);
        VAR156                        = FUN20(VAR84, 2);
        VAR157                       = FUN20(VAR84, 2);
        VAR153->VAR159                 = VAR156 + VAR157 + 1;

        if (VAR153->VAR159 > 5) {
            FUN28(VAR55->VAR112, VAR114,
                   "",
                   VAR153->VAR159);
            return -1;
        }

        VAR153->VAR163[VAR153->VAR159] = VAR155;

          for (VAR68 = 0; VAR68 < VAR156; VAR68++)
            VAR153->VAR163[VAR68 + 1] = VAR153->VAR163[VAR68] + 2 * FUN20(VAR84, 2) + 2;
        for (VAR68 = 0; VAR68 < VAR157; VAR68++)
            VAR153->VAR163[VAR153->VAR159 - 1 - VAR68] =
                VAR153->VAR163[VAR153->VAR159 - VAR68] - 2 * FUN20(VAR84, 2) - 2;

        VAR154 = FUN20(VAR84, VAR151[VAR153->VAR159]);

        FUN34(VAR84, VAR153->VAR160 + 1, VAR153->VAR159);
        break;
    }

    if (VAR154 < 0 || VAR154 > VAR153->VAR159 + 1) {
        FUN28(VAR55->VAR112, VAR114,
               "",
               VAR154);
        return -1;
    }

    for (VAR68 = 1; VAR68 <= VAR153->VAR159; VAR68++) {
        if (VAR153->VAR163[VAR68-1] > VAR153->VAR163[VAR68]) {
            FUN28(VAR55->VAR112, VAR114, "");
            return -1;
        }
    }

   
    VAR153->VAR165 = (VAR153->VAR159 > 1) + 1;

    VAR153->VAR166[0]                     = VAR153->VAR163[0];
    VAR153->VAR166[VAR153->VAR165] = VAR153->VAR163[VAR153->VAR159];
    if (VAR153->VAR165 > 1) {
        int VAR167;
        if (VAR153->VAR164 == VAR14) {
            VAR167 = VAR153->VAR159 >> 1;
        } else if (VAR153->VAR164 & 1) { 
            VAR167 = VAR153->VAR159 - FUN32(VAR154 - 1, 1);
        } else { 
            if (!VAR154)
                VAR167 = 1;
            else if (VAR154 == 1)
                VAR167 = VAR153->VAR159 - 1;
            else 
                VAR167 = VAR154 - 1;
        }
        VAR153->VAR166[1] = VAR153->VAR163[VAR167];
    }

   VAR153->VAR51[0] = -(VAR153->VAR51[1] != VAR158); 
    VAR153->VAR51[1] = -1;
    if ((VAR153->VAR164 & 1) && VAR154) { 
        VAR153->VAR51[1] = VAR153->VAR159 + 1 - VAR154;
    } else if ((VAR153->VAR164 == 2) && (VAR154 > 1)) 
        VAR153->VAR51[1] = VAR154 - 1;

    return 0;
}

static void FUN36(SBRData *VAR168, const SBRData *VAR169) {
    
    VAR168->VAR160[0]    = VAR168->VAR160[VAR168->VAR159];
    VAR168->VAR162 = VAR168->VAR163[VAR168->VAR159];
    VAR168->VAR51[0]            = -(VAR168->VAR51[1] != VAR168->VAR159);

    
    FUN100(VAR168->VAR160+1, VAR169->VAR160+1, sizeof(VAR168->VAR160)-sizeof(*VAR168->VAR160));
    FUN100(VAR168->VAR163,         VAR169->VAR163,         sizeof(VAR168->VAR163));
    FUN100(VAR168->VAR166,           VAR169->VAR166,           sizeof(VAR168->VAR166));
    VAR168->VAR159        = VAR169->VAR159;
    VAR168->VAR161        = VAR169->VAR161;
    VAR168->VAR165      = VAR169->VAR165;
    VAR168->VAR164    = VAR169->VAR164;
    VAR168->VAR51[1]            = VAR169->VAR51[1];
}

static void FUN37(SpectralBandReplication *VAR46, GetBitContext *VAR84,
                          SBRData *VAR153)
{
    FUN34(VAR84, VAR153->VAR170,   VAR153->VAR159);
    FUN34(VAR84, VAR153->VAR171, VAR153->VAR165);
}


static void FUN38(SpectralBandReplication *VAR46, GetBitContext *VAR84,
                          SBRData *VAR153)
{
    int VAR68;

    FUN100(VAR153->VAR172[1], VAR153->VAR172[0], 5 * sizeof(VAR148));
    for (VAR68 = 0; VAR68 < VAR46->VAR145; VAR68++)
        VAR153->VAR172[0][VAR68] = FUN20(VAR84, 2);
}

static void FUN39(SpectralBandReplication *VAR46, GetBitContext *VAR84,
                              SBRData *VAR153, int VAR173)
{
    int VAR174;
    int VAR68, VAR175, VAR69;
    FUN40 (*VAR176)[2], (*VAR177)[2];
    int VAR178, VAR179;
    const int VAR180 = (VAR173 == 1 && VAR46->VAR181 == 1) + 1;
    const int VAR142 = VAR46->VAR32[1] & 1;

  if (VAR46->VAR181 && VAR173) {
        if (VAR153->VAR161) {
            VAR174   = 5;
            VAR176 = VAR19[VAR10].VAR65;
            VAR178  = VAR20[VAR10];
            VAR177 = VAR19[VAR11].VAR65;
            VAR179  = VAR20[VAR11];
        } else {
            VAR174   = 6;
            VAR176 = VAR19[VAR6].VAR65;
            VAR178  = VAR20[VAR6];
            VAR177 = VAR19[VAR7].VAR65;
            VAR179  = VAR20[VAR7];
        }
    } else {
        if (VAR153->VAR161) {
            VAR174   = 6;
            VAR176 = VAR19[VAR8].VAR65;
            VAR178  = VAR20[VAR8];
            VAR177 = VAR19[VAR9].VAR65;
            VAR179  = VAR20[VAR9];
        } else {
            VAR174   = 7;
            VAR176 = VAR19[VAR4].VAR65;
            VAR178  = VAR20[VAR4];
            VAR177 = VAR19[VAR5].VAR65;
            VAR179  = VAR20[VAR5];
        }
    }

    for (VAR68 = 0; VAR68 < VAR153->VAR159; VAR68++) {
        if (VAR153->VAR170[VAR68]) {
            
            if (VAR153->VAR160[VAR68 + 1] == VAR153->VAR160[VAR68]) {
                for (VAR175 = 0; VAR175 < VAR46->VAR32[VAR153->VAR160[VAR68 + 1]]; VAR175++)
                    VAR153->VAR182[VAR68 + 1][VAR175] = VAR153->VAR182[VAR68][VAR175] + VAR180 * (FUN41(VAR84, VAR176, 9, 3) - VAR178);
            } else if (VAR153->VAR160[VAR68 + 1]) {
                for (VAR175 = 0; VAR175 < VAR46->VAR32[VAR153->VAR160[VAR68 + 1]]; VAR175++) {
                    VAR69 = (VAR175 + VAR142) >> 1; 
                    VAR153->VAR182[VAR68 + 1][VAR175] = VAR153->VAR182[VAR68][VAR69] + VAR180 * (FUN41(VAR84, VAR176, 9, 3) - VAR178);
                }
            } else {
                for (VAR175 = 0; VAR175 < VAR46->VAR32[VAR153->VAR160[VAR68 + 1]]; VAR175++) {
                    VAR69 = VAR175 ? 2*VAR175 - VAR142 : 0; 
                    VAR153->VAR182[VAR68 + 1][VAR175] = VAR153->VAR182[VAR68][VAR69] + VAR180 * (FUN41(VAR84, VAR176, 9, 3) - VAR178);
                }
            }
        } else {
            VAR153->VAR182[VAR68 + 1][0] = VAR180 * FUN20(VAR84, VAR174); 
            for (VAR175 = 1; VAR175 < VAR46->VAR32[VAR153->VAR160[VAR68 + 1]]; VAR175++)
                VAR153->VAR182[VAR68 + 1][VAR175] = VAR153->VAR182[VAR68 + 1][VAR175 - 1] + VAR180 * (FUN41(VAR84, VAR177, 9, 3) - VAR179);
        }
    }

    
   FUN100(VAR153->VAR182[0], VAR153->VAR182[VAR153->VAR159],
           sizeof(VAR153->VAR182[0]));
}

static void FUN42(SpectralBandReplication *VAR46, GetBitContext *VAR84,
                           SBRData *VAR153, int VAR173)
{
    int VAR68, VAR175;
    FUN40 (*VAR176)[2], (*VAR177)[2];
    int VAR178, VAR179;
    int VAR180 = (VAR173 == 1 && VAR46->VAR181 == 1) + 1;

    if (VAR46->VAR181 && VAR173) {
        VAR176 = VAR19[VAR13].VAR65;
        VAR178  = VAR20[VAR13];
        VAR177 = VAR19[VAR11].VAR65;
        VAR179  = VAR20[VAR11];
    } else {
        VAR176 = VAR19[VAR12].VAR65;
        VAR178  = VAR20[VAR12];
        VAR177 = VAR19[VAR9].VAR65;
        VAR179  = VAR20[VAR9];
    }

    for (VAR68 = 0; VAR68 < VAR153->VAR165; VAR68++) {
        if (VAR153->VAR171[VAR68]) {
            for (VAR175 = 0; VAR175 < VAR46->VAR145; VAR175++)
                VAR153->VAR183[VAR68 + 1][VAR175] = VAR153->VAR183[VAR68][VAR175] + VAR180 * (FUN41(VAR84, VAR176, 9, 2) - VAR178);
        } else {
            VAR153->VAR183[VAR68 + 1][0] = VAR180 * FUN20(VAR84, 5); 
            for (VAR175 = 1; VAR175 < VAR46->VAR145; VAR175++)
                VAR153->VAR183[VAR68 + 1][VAR175] = VAR153->VAR183[VAR68 + 1][VAR175 - 1] + VAR180 * (FUN41(VAR84, VAR177, 9, 3) - VAR179);
        }
    }

    
    FUN100(VAR153->VAR183[0], VAR153->VAR183[VAR153->VAR165],
           sizeof(VAR153->VAR183[0]));
}

static void FUN43(AACContext *VAR55, SpectralBandReplication *VAR46,
                               GetBitContext *VAR84,
                               int VAR184, int *VAR185)
{
    switch (VAR184) {
    case VAR18:
        if (!VAR55->VAR186[1].VAR187.VAR60) {
            FUN28(VAR55->VAR112, VAR114, "");
            FUN44(VAR84, *VAR185); 
            *VAR185 = 0;
        } else {
            *VAR185 -= FUN45(VAR55->VAR112, VAR84, &VAR46->VAR60, *VAR185);
            VAR55->VAR112->VAR188 = VAR189;
        }
        break;
    default:
        
        if (VAR184 || *VAR185 > 16 || FUN46(VAR84, *VAR185))
            FUN47(VAR55->VAR112, "");
        FUN44(VAR84, *VAR185); 
        *VAR185 = 0;
        break;
    }
}

static int FUN48(AACContext *VAR55,
                                            SpectralBandReplication *VAR46,
                                            GetBitContext *VAR84)
{
    if (FUN19(VAR84)) 
        FUN21(VAR84, 4); 

    if (FUN35(VAR55, VAR46, VAR84, &VAR46->VAR50[0]))
        return -1;
    FUN37(VAR46, VAR84, &VAR46->VAR50[0]);
    FUN38(VAR46, VAR84, &VAR46->VAR50[0]);
    FUN39(VAR46, VAR84, &VAR46->VAR50[0], 0);
    FUN42(VAR46, VAR84, &VAR46->VAR50[0], 0);

    if ((VAR46->VAR50[0].VAR190 = FUN19(VAR84)))
        FUN34(VAR84, VAR46->VAR50[0].VAR191, VAR46->VAR32[1]);

    return 0;
}

static int FUN49(AACContext *VAR55,
                                          SpectralBandReplication *VAR46,
                                          GetBitContext *VAR84)
{
    if (FUN19(VAR84))    
        FUN21(VAR84, 8); 

    if ((VAR46->VAR181 = FUN19(VAR84))) {
        if (FUN35(VAR55, VAR46, VAR84, &VAR46->VAR50[0]))
            return -1;
        FUN36(&VAR46->VAR50[1], &VAR46->VAR50[0]);
        FUN37(VAR46, VAR84, &VAR46->VAR50[0]);
        FUN37(VAR46, VAR84, &VAR46->VAR50[1]);
        FUN38(VAR46, VAR84, &VAR46->VAR50[0]);
        memcpy(VAR46->VAR50[1].VAR172[1], VAR46->VAR50[1].VAR172[0], sizeof(VAR46->VAR50[1].VAR172[0]));
        memcpy(VAR46->VAR50[1].VAR172[0], VAR46->VAR50[0].VAR172[0], sizeof(VAR46->VAR50[1].VAR172[0]));
        FUN39(VAR46, VAR84, &VAR46->VAR50[0], 0);
        FUN42(VAR46, VAR84, &VAR46->VAR50[0], 0);
        FUN39(VAR46, VAR84, &VAR46->VAR50[1], 1);
        FUN42(VAR46, VAR84, &VAR46->VAR50[1], 1);
    } else {
        if (FUN35(VAR55, VAR46, VAR84, &VAR46->VAR50[0]) ||
            FUN35(VAR55, VAR46, VAR84, &VAR46->VAR50[1]))
            return -1;
        FUN37(VAR46, VAR84, &VAR46->VAR50[0]);
        FUN37(VAR46, VAR84, &VAR46->VAR50[1]);
        FUN38(VAR46, VAR84, &VAR46->VAR50[0]);
        FUN38(VAR46, VAR84, &VAR46->VAR50[1]);
        FUN39(VAR46, VAR84, &VAR46->VAR50[0], 0);
        FUN39(VAR46, VAR84, &VAR46->VAR50[1], 1);
        FUN42(VAR46, VAR84, &VAR46->VAR50[0], 0);
        FUN42(VAR46, VAR84, &VAR46->VAR50[1], 1);
    }

    if ((VAR46->VAR50[0].VAR190 = FUN19(VAR84)))
        FUN34(VAR84, VAR46->VAR50[0].VAR191, VAR46->VAR32[1]);
    if ((VAR46->VAR50[1].VAR190 = FUN19(VAR84)))
        FUN34(VAR84, VAR46->VAR50[1].VAR191, VAR46->VAR32[1]);

    return 0;
}

static unsigned int FUN50(AACContext *VAR55, SpectralBandReplication *VAR46,
                                  GetBitContext *VAR84, int VAR192)
{
    unsigned int VAR85 = FUN18(VAR84);

    if (VAR192 == VAR193 || VAR192 == VAR194) {
        if (FUN48(VAR55, VAR46, VAR84)) {
            FUN6(VAR46);
            return FUN18(VAR84) - VAR85;
        }
    } else if (VAR192 == VAR195) {
        if (FUN49(VAR55, VAR46, VAR84)) {
            FUN6(VAR46);
            return FUN18(VAR84) - VAR85;
        }
    } else {
        FUN28(VAR55->VAR112, VAR114,
            "", VAR192);
        FUN6(VAR46);
        return FUN18(VAR84) - VAR85;
    }
    if (FUN19(VAR84)) { 
        int VAR185 = FUN20(VAR84, 4); 
        if (VAR185 == 15)
            VAR185 += FUN20(VAR84, 8); 

        VAR185 <<= 3;
        while (VAR185 > 7) {
            VAR185 -= 2;
            FUN43(VAR55, VAR46, VAR84, FUN20(VAR84, 2), &VAR185); 
        }
        if (VAR185 < 0) {
            FUN28(VAR55->VAR112, VAR114, "");
        }
        if (VAR185 > 0)
            FUN21(VAR84, VAR185);
    }

      return FUN18(VAR84) - VAR85;
}

static void FUN51(AACContext *VAR55, SpectralBandReplication *VAR46)
{
    int VAR196;
    VAR196 = FUN29(VAR55, VAR46, &VAR46->VAR52);
    if (VAR196 >= 0)
        VAR196 = FUN33(VAR55, VAR46);
    if (VAR196 < 0) {
        FUN28(VAR55->VAR112, VAR114,
               "");
        FUN6(VAR46);
    }
}

int FUN52(AACContext *VAR55, SpectralBandReplication *VAR46,
                            GetBitContext *VAR197, int VAR198, int VAR85, int VAR192)
{
    unsigned int VAR199 = 0, VAR200;
    unsigned VAR201;
    GetBitContext VAR202 = *VAR197, *VAR84 = &VAR202;
    FUN44(VAR197, VAR85*8 - 4);

    VAR46->VAR97 = 0;

    if (!VAR46->VAR123)
        VAR46->VAR123 = 2 * VAR55->VAR186[1].VAR187.VAR123; 
    if (!VAR55->VAR186[1].VAR187.VAR203)
        VAR55->VAR186[1].VAR187.VAR203 = 2 * VAR55->VAR186[1].VAR187.VAR123;

    if (VAR198) {
        FUN21(VAR84, 10); 
        VAR199 += 10;
    }

    VAR46->VAR48[0] = VAR46->VAR48[1];
    VAR46->VAR49[0] = VAR46->VAR49[1];
    VAR46->VAR204 = 1;

    VAR199++;
    if (FUN19(VAR84)) 
        VAR199 += FUN17(VAR46, VAR84);

    if (VAR46->VAR97)
        FUN51(VAR55, VAR46);

    if (VAR46->VAR47)
        VAR199  += FUN50(VAR55, VAR46, VAR84, VAR192);

    VAR200 = ((VAR85 << 3) - 4 - VAR199) & 7;
    VAR201 = ((VAR199 + VAR200 + 4) >> 3);

    if (VAR201 > VAR85) {
        FUN28(VAR55->VAR112, VAR114,
               "", VAR85, VAR201);
        FUN6(VAR46);
    }
    return VAR85;
}

static void FUN53(SpectralBandReplication *VAR46, int VAR192)
{
    int VAR69, VAR205;
    int VAR173;

    if (VAR192 == VAR195 && VAR46->VAR181) {
        float VAR206      = VAR46->VAR50[0].VAR161 ?  1.0f :  0.5f;
        float VAR207 = VAR46->VAR50[0].VAR161 ? 12.0f : 24.0f;
        for (VAR205 = 1; VAR205 <= VAR46->VAR50[0].VAR159; VAR205++) {
            for (VAR69 = 0; VAR69 < VAR46->VAR32[VAR46->VAR50[0].VAR160[VAR205]]; VAR69++) {
                float VAR208 = FUN54(VAR46->VAR50[0].VAR182[VAR205][VAR69] * VAR206 + 7.0f);
                float VAR209 = FUN54((VAR207 - VAR46->VAR50[1].VAR182[VAR205][VAR69]) * VAR206);
                float VAR210   = VAR208 / (1.0f + VAR209);
                VAR46->VAR50[0].VAR182[VAR205][VAR69] = VAR210;
                VAR46->VAR50[1].VAR182[VAR205][VAR69] = VAR210 * VAR209;
            }
        }
        for (VAR205 = 1; VAR205 <= VAR46->VAR50[0].VAR165; VAR205++) {
            for (VAR69 = 0; VAR69 < VAR46->VAR145; VAR69++) {
                float VAR208 = FUN54(VAR211 - VAR46->VAR50[0].VAR183[VAR205][VAR69] + 1);
                float VAR209 = FUN54(12 - VAR46->VAR50[1].VAR183[VAR205][VAR69]);
                float VAR210   = VAR208 / (1.0f + VAR209);
                VAR46->VAR50[0].VAR183[VAR205][VAR69] = VAR210;
                VAR46->VAR50[1].VAR183[VAR205][VAR69] = VAR210 * VAR209;
            }
        }
    } else { 
        for (VAR173 = 0; VAR173 < (VAR192 == VAR195) + 1; VAR173++) {
            float VAR206 = VAR46->VAR50[VAR173].VAR161 ? 1.0f : 0.5f;
            for (VAR205 = 1; VAR205 <= VAR46->VAR50[VAR173].VAR159; VAR205++)
                for (VAR69 = 0; VAR69 < VAR46->VAR32[VAR46->VAR50[VAR173].VAR160[VAR205]]; VAR69++)
                    VAR46->VAR50[VAR173].VAR182[VAR205][VAR69] =
                        FUN54(VAR206 * VAR46->VAR50[VAR173].VAR182[VAR205][VAR69] + 6.0f);
            for (VAR205 = 1; VAR205 <= VAR46->VAR50[VAR173].VAR165; VAR205++)
                for (VAR69 = 0; VAR69 < VAR46->VAR145; VAR69++)
                    VAR46->VAR50[VAR173].VAR183[VAR205][VAR69] =
                        FUN54(VAR211 - VAR46->VAR50[VAR173].VAR183[VAR205][VAR69]);
        }
    }
}


static void FUN55(AVFloatDSPContext *VAR61, FFTContext *VAR58,
                             SBRDSPContext *VAR215, const float *VAR75, float *VAR216,
                             float VAR217[320], float VAR218[2][32][32][2], int VAR219)
{
    int VAR68;
    FUN100(VAR216    , VAR216+1024, (320-32)*sizeof(VAR216[0]));
    FUN100(VAR216+288, VAR75,         1024*sizeof(VAR216[0]));
    for (VAR68 = 0; VAR68 < 32; VAR68++) { 
                               
        VAR61->FUN56(VAR217, VAR44, VAR216, 320);
        VAR215->FUN57(VAR217);
        VAR215->FUN58(VAR217);
        VAR58->FUN59(VAR58, VAR217, VAR217+64);
        VAR215->FUN60(VAR218[VAR219][VAR68], VAR217);
        VAR216 += 32;
    }
}


static void FUN61(FFTContext *VAR58,
                              SBRDSPContext *VAR215, AVFloatDSPContext *VAR61,
                              float *VAR77, float VAR220[2][38][64],
                              float VAR221[2][64],
                              float *VAR222, int *VAR223, const unsigned int VAR224)
{
    int VAR68, VAR32;
    const float *VAR225 = VAR224 ? VAR44 : VAR43;
    const int VAR226 = 128 >> VAR224;
    float *VAR227;
    for (VAR68 = 0; VAR68 < 32; VAR68++) {
        if (*VAR223 < VAR226) {
            int VAR228 = (1280 - 128) >> VAR224;
            FUN100(&VAR222[VAR57 - VAR228], VAR222, VAR228 * sizeof(float));
            *VAR223 = VAR57 - VAR228 - VAR226;
        } else {
            *VAR223 -= VAR226;
        }
         VAR227 = VAR222 + *VAR223;
        if (VAR224) {
            for (VAR32 = 0; VAR32 < 32; VAR32++) {
                VAR220[0][VAR68][   VAR32] = -VAR220[0][VAR68][VAR32];
                VAR220[0][VAR68][32+VAR32] =  VAR220[1][VAR68][31-VAR32];
            }
            VAR58->FUN59(VAR58, VAR221[0], VAR220[0][VAR68]);
            VAR215->FUN62(VAR227, VAR221[0]);
        } else {
            VAR215->FUN63(VAR220[1][VAR68]);
            VAR58->FUN59(VAR58, VAR221[0], VAR220[0][VAR68]);
            VAR58->FUN59(VAR58, VAR221[1], VAR220[1][VAR68]);
            VAR215->FUN64(VAR227, VAR221[1], VAR221[0]);
        }
        VAR61->FUN65    (VAR77, VAR227                , VAR225                       , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + ( 192 >> VAR224), VAR225 + ( 64 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + ( 256 >> VAR224), VAR225 + (128 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + ( 448 >> VAR224), VAR225 + (192 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + ( 512 >> VAR224), VAR225 + (256 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + ( 704 >> VAR224), VAR225 + (320 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + ( 768 >> VAR224), VAR225 + (384 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + ( 960 >> VAR224), VAR225 + (448 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + (1024 >> VAR224), VAR225 + (512 >> VAR224), VAR77   , 64 >> VAR224);
        VAR61->FUN66(VAR77, VAR227 + (1216 >> VAR224), VAR225 + (576 >> VAR224), VAR77   , 64 >> VAR224);
        VAR77 += 64 >> VAR224;
    }
}

static void FUN67(SBRDSPContext *VAR61,
                                  float (*VAR229)[2], float (*VAR230)[2],
                                  const float VAR231[32][40][2], int VAR232)
{
    int VAR69;
    for (VAR69 = 0; VAR69 < VAR232; VAR69++) {
        FUN68(float, VAR233, [3], [2][2]);
        float VAR125;

        VAR61->FUN69(VAR231[VAR69], VAR233);

        VAR125 =  VAR233[2][1][0] * VAR233[1][0][0] -
             (VAR233[1][1][0] * VAR233[1][1][0] + VAR233[1][1][1] * VAR233[1][1][1]) / 1.000001f;

        if (!VAR125) {
            VAR230[VAR69][0] = 0;
            VAR230[VAR69][1] = 0;
        } else {
            float VAR234, VAR235;
            VAR234 = VAR233[0][0][0] * VAR233[1][1][0] -
                        VAR233[0][0][1] * VAR233[1][1][1] -
                        VAR233[0][1][0] * VAR233[1][0][0];
            VAR235   = VAR233[0][0][0] * VAR233[1][1][1] +
                        VAR233[0][0][1] * VAR233[1][1][0] -
                        VAR233[0][1][1] * VAR233[1][0][0];

            VAR230[VAR69][0] = VAR234 / VAR125;
            VAR230[VAR69][1] = VAR235   / VAR125;
        }

        if (!VAR233[1][0][0]) {
            VAR229[VAR69][0] = 0;
            VAR229[VAR69][1] = 0;
        } else {
            float VAR234, VAR235;
            VAR234 = VAR233[0][0][0] + VAR230[VAR69][0] * VAR233[1][1][0] +
                                       VAR230[VAR69][1] * VAR233[1][1][1];
            VAR235   = VAR233[0][0][1] + VAR230[VAR69][1] * VAR233[1][1][0] -
                                       VAR230[VAR69][0] * VAR233[1][1][1];

            VAR229[VAR69][0] = -VAR234 / VAR233[1][0][0];
            VAR229[VAR69][1] = -VAR235   / VAR233[1][0][0];
        }

        if (VAR230[VAR69][0] * VAR230[VAR69][0] + VAR230[VAR69][1] * VAR230[VAR69][1] >= 16.0f ||
           VAR229[VAR69][0] * VAR229[VAR69][0] + VAR229[VAR69][1] * VAR229[VAR69][1] >= 16.0f) {
            VAR230[VAR69][0] = 0;
            VAR230[VAR69][1] = 0;
            VAR229[VAR69][0] = 0;
            VAR229[VAR69][1] = 0;
        }
    }
}


static void FUN70(SpectralBandReplication *VAR46, SBRData *VAR153)
{
    int VAR68;
    float VAR236;
    static const float VAR237[] = { 0.0f, 0.75f, 0.9f, 0.98f };

    for (VAR68 = 0; VAR68 < VAR46->VAR145; VAR68++) {
        if (VAR153->VAR172[0][VAR68] + VAR153->VAR172[1][VAR68] == 1) {
            VAR236 = 0.6f;
        } else
            VAR236 = VAR237[VAR153->VAR172[0][VAR68]];

        if (VAR236 < VAR153->VAR238[VAR68]) {
            VAR236 = 0.75f    * VAR236 + 0.25f    * VAR153->VAR238[VAR68];
        } else
            VAR236 = 0.90625f * VAR236 + 0.09375f * VAR153->VAR238[VAR68];
        VAR153->VAR238[VAR68] = VAR236 < 0.015625f ? 0.0f : VAR236;
    }
}


static int FUN71(AACContext *VAR55, SpectralBandReplication *VAR46,
                      float VAR231[32][40][2], const float VAR218[2][32][32][2],
                      int VAR219)
{
    int VAR68, VAR69;
    const int VAR239 = 8;
    const int VAR240 = 32;
    FUN100(VAR231, 0, 32*sizeof(*VAR231));
    for (VAR69 = 0; VAR69 < VAR46->VAR48[1]; VAR69++) {
        for (VAR68 = VAR239; VAR68 < VAR240 + VAR239; VAR68++) {
            VAR231[VAR69][VAR68][0] = VAR218[VAR219][VAR68 - VAR239][VAR69][0];
            VAR231[VAR69][VAR68][1] = VAR218[VAR219][VAR68 - VAR239][VAR69][1];
        }
    }
    VAR219 = 1-VAR219;
    for (VAR69 = 0; VAR69 < VAR46->VAR48[0]; VAR69++) {
        for (VAR68 = 0; VAR68 < VAR239; VAR68++) {
            VAR231[VAR69][VAR68][0] = VAR218[VAR219][VAR68 + VAR240 - VAR239][VAR69][0];
            VAR231[VAR69][VAR68][1] = VAR218[VAR219][VAR68 + VAR240 - VAR239][VAR69][1];
        }
    }
    return 0;
}


static int FUN72(AACContext *VAR55, SpectralBandReplication *VAR46,
                      float VAR241[64][40][2], const float VAR231[32][40][2],
                      const float (*VAR229)[2], const float (*VAR230)[2],
                      const float VAR238[5], const VAR148 *VAR163,
                      int VAR159)
{
    int VAR175, VAR216;
    int VAR242 = 0;
    int VAR69 = VAR46->VAR48[1];
    for (VAR175 = 0; VAR175 < VAR46->VAR78; VAR175++) {
        for (VAR216 = 0; VAR216 < VAR46->VAR79[VAR175]; VAR216++, VAR69++) {
            const int VAR243 = VAR46->VAR143[VAR175] + VAR216;
            while (VAR242 <= VAR46->VAR145 && VAR69 >= VAR46->VAR146[VAR242])
                VAR242++;
            VAR242--;

            if (VAR242 < 0) {
                FUN28(VAR55->VAR112, VAR114,
                       "", VAR69);
                return -1;
            }

            VAR46->VAR61.FUN73(VAR241[VAR69] + VAR244,
                            VAR231[VAR243]  + VAR244,
                            VAR229[VAR243], VAR230[VAR243], VAR238[VAR242],
                            2 * VAR163[0], 2 * VAR163[VAR159]);
        }
    }
    if (VAR69 < VAR46->VAR49[1] + VAR46->VAR48[1])
        FUN100(VAR241 + VAR69, 0, (VAR46->VAR49[1] + VAR46->VAR48[1] - VAR69) * sizeof(*VAR241));

    return 0;
}


static int FUN74(SpectralBandReplication *VAR46, float VAR220[2][38][64],
                     const float VAR245[38][64][2], const float VAR246[38][64][2],
                     const float VAR231[32][40][2], int VAR173)
{
   int VAR69, VAR68;
    const int VAR240 = 32;
    const int VAR247 = FUN32(2*VAR46->VAR50[VAR173].VAR162 - VAR240, 0);
    FUN100(VAR220, 0, 2*sizeof(*VAR220));
    for (VAR69 = 0; VAR69 < VAR46->VAR48[0]; VAR69++) {
        for (VAR68 = 0; VAR68 < VAR247; VAR68++) {
            VAR220[0][VAR68][VAR69] = VAR231[VAR69][VAR68 + VAR244][0];
            VAR220[1][VAR68][VAR69] = VAR231[VAR69][VAR68 + VAR244][1];
        }
    }
     for (; VAR69 < VAR46->VAR48[0] + VAR46->VAR49[0]; VAR69++) {
        for (VAR68 = 0; VAR68 < VAR247; VAR68++) {
            VAR220[0][VAR68][VAR69] = VAR245[VAR68 + VAR240][VAR69][0];
            VAR220[1][VAR68][VAR69] = VAR245[VAR68 + VAR240][VAR69][1];
        }
    }

    for (VAR69 = 0; VAR69 < VAR46->VAR48[1]; VAR69++) {
        for (VAR68 = VAR247; VAR68 < 38; VAR68++) {
            VAR220[0][VAR68][VAR69] = VAR231[VAR69][VAR68 + VAR244][0];
            VAR220[1][VAR68][VAR69] = VAR231[VAR69][VAR68 + VAR244][1];
        }
    }
    for (; VAR69 < VAR46->VAR48[1] + VAR46->VAR49[1]; VAR69++) {
        for (VAR68 = VAR247; VAR68 < VAR240; VAR68++) {
            VAR220[0][VAR68][VAR69] = VAR246[VAR68][VAR69][0];
            VAR220[1][VAR68][VAR69] = VAR246[VAR68][VAR69][1];
        }
    }
    return 0;
}

static int FUN75(AACContext *VAR55, SpectralBandReplication *VAR46,
                        SBRData *VAR153, int VAR51[2])
{
    int VAR205, VAR68, VAR49;

    memset(VAR153->VAR248[1], 0, 7*sizeof(VAR153->VAR248[1]));
    for (VAR205 = 0; VAR205 < VAR153->VAR159; VAR205++) {
        const unsigned int VAR249 = VAR46->VAR32[VAR153->VAR160[VAR205 + 1]];
        uint16_t *VAR65 = VAR153->VAR160[VAR205 + 1] ? VAR46->VAR144 : VAR46->VAR80;
        int VAR69;

        if (VAR46->VAR48[1] != VAR65[0]) {
            FUN28(VAR55->VAR112, VAR114, ""
                   "");
            FUN6(VAR46);
            return VAR250;
        }
        for (VAR68 = 0; VAR68 < VAR249; VAR68++)
            for (VAR49 = VAR65[VAR68]; VAR49 < VAR65[VAR68 + 1]; VAR49++)
                VAR46->VAR251[VAR205][VAR49 - VAR46->VAR48[1]] = VAR153->VAR182[VAR205+1][VAR68];

        VAR69 = (VAR153->VAR165 > 1) && (VAR153->VAR163[VAR205] >= VAR153->VAR166[1]);
        for (VAR68 = 0; VAR68 < VAR46->VAR145; VAR68++)
            for (VAR49 = VAR46->VAR146[VAR68]; VAR49 < VAR46->VAR146[VAR68 + 1]; VAR49++)
                VAR46->VAR252[VAR205][VAR49 - VAR46->VAR48[1]] = VAR153->VAR183[VAR69+1][VAR68];

        for (VAR68 = 0; VAR68 < VAR46->VAR32[1]; VAR68++) {
            if (VAR153->VAR190) {
                const unsigned int VAR253 =
                    (VAR46->VAR144[VAR68] + VAR46->VAR144[VAR68 + 1]) >> 1;

                VAR153->VAR248[VAR205 + 1][VAR253 - VAR46->VAR48[1]] = VAR153->VAR191[VAR68] *
                    (VAR205 >= VAR51[1] || (VAR153->VAR248[0][VAR253 - VAR46->VAR48[1]] == 1));
            }
        }

       for (VAR68 = 0; VAR68 < VAR249; VAR68++) {
            int VAR254 = 0;
            for (VAR49 = VAR65[VAR68]; VAR49 < VAR65[VAR68 + 1]; VAR49++) {
                if (VAR153->VAR248[VAR205 + 1][VAR49 - VAR46->VAR48[1]]) {
                    VAR254 = 1;
                    break;
                }
            }
            FUN100(&VAR46->VAR255[VAR205][VAR65[VAR68] - VAR46->VAR48[1]], VAR254,
                   (VAR65[VAR68 + 1] - VAR65[VAR68]) * sizeof(VAR46->VAR255[VAR205][0]));
        }
    }

    FUN100(VAR153->VAR248[0], VAR153->VAR248[VAR153->VAR159], sizeof(VAR153->VAR248[0]));
    return 0;
}

static void FUN76(float (*VAR256)[48], float VAR241[64][40][2],
                             SpectralBandReplication *VAR46, SBRData *VAR153)
{
    int VAR205, VAR49;
    int VAR257 = VAR46->VAR48[1];

    if (VAR46->VAR99) {
        for (VAR205 = 0; VAR205 < VAR153->VAR159; VAR205++) {
            const float VAR258 = 0.5f / (VAR153->VAR163[VAR205 + 1] - VAR153->VAR163[VAR205]);
            int VAR259 = VAR153->VAR163[VAR205]     * 2 + VAR244;
            int VAR260 = VAR153->VAR163[VAR205 + 1] * 2 + VAR244;

            for (VAR49 = 0; VAR49 < VAR46->VAR49[1]; VAR49++) {
                float VAR261 = VAR46->VAR61.FUN77(VAR241[VAR49+VAR257] + VAR259, VAR260 - VAR259);
                VAR256[VAR205][VAR49] = VAR261 * VAR258;
            }
        }
    } else {
        int VAR69, VAR243;

        for (VAR205 = 0; VAR205 < VAR153->VAR159; VAR205++) {
            const int VAR262 = 2 * (VAR153->VAR163[VAR205 + 1] - VAR153->VAR163[VAR205]);
            int VAR259 = VAR153->VAR163[VAR205]     * 2 + VAR244;
            int VAR260 = VAR153->VAR163[VAR205 + 1] * 2 + VAR244;
            const VAR74 *VAR65 = VAR153->VAR160[VAR205 + 1] ? VAR46->VAR144 : VAR46->VAR80;

            for (VAR243 = 0; VAR243 < VAR46->VAR32[VAR153->VAR160[VAR205 + 1]]; VAR243++) {
                float VAR261 = 0.0f;
                const int VAR263 = VAR262 * (VAR65[VAR243 + 1] - VAR65[VAR243]);

                for (VAR69 = VAR65[VAR243]; VAR69 < VAR65[VAR243 + 1]; VAR69++) {
                    VAR261 += VAR46->VAR61.FUN77(VAR241[VAR69] + VAR259, VAR260 - VAR259);
                }
                VAR261 /= VAR263;
                for (VAR69 = VAR65[VAR243]; VAR69 < VAR65[VAR243 + 1]; VAR69++) {
                    VAR256[VAR205][VAR69 - VAR257] = VAR261;
                }
            }
        }
    }
}


static void FUN78(AACContext *VAR55, SpectralBandReplication *VAR46,
                          SBRData *VAR153, const int VAR51[2])
{
    int VAR205, VAR69, VAR49;
    
    static const float VAR264[4] = { 0.70795, 1.0, 1.41254, 10000000000 };

    for (VAR205 = 0; VAR205 < VAR153->VAR159; VAR205++) {
        int VAR180 = !((VAR205 == VAR51[1]) || (VAR205 == VAR51[0]));
        for (VAR69 = 0; VAR69 < VAR46->VAR82; VAR69++) {
            float VAR265, VAR266;
            float VAR261[2] = { 0.0f, 0.0f };
            for (VAR49 = VAR46->VAR76[VAR69] - VAR46->VAR48[1]; VAR49 < VAR46->VAR76[VAR69 + 1] - VAR46->VAR48[1]; VAR49++) {
                const float VAR116 = VAR46->VAR251[VAR205][VAR49] / (1.0f + VAR46->VAR252[VAR205][VAR49]);
                VAR46->VAR267[VAR205][VAR49] = FUN79(VAR116 * VAR46->VAR252[VAR205][VAR49]);
                VAR46->VAR268[VAR205][VAR49] = FUN79(VAR116 * VAR153->VAR248[VAR205 + 1][VAR49]);
                if (!VAR46->VAR255[VAR205][VAR49]) {
                    VAR46->VAR269[VAR205][VAR49] = FUN79(VAR46->VAR251[VAR205][VAR49] /
                                            ((1.0f + VAR46->VAR256[VAR205][VAR49]) *
                                             (1.0f + VAR46->VAR252[VAR205][VAR49] * VAR180)));
                } else {
                    VAR46->VAR269[VAR205][VAR49] = FUN79(VAR46->VAR251[VAR205][VAR49] * VAR46->VAR252[VAR205][VAR49] /
                                            ((1.0f + VAR46->VAR256[VAR205][VAR49]) *
                                             (1.0f + VAR46->VAR252[VAR205][VAR49])));
                }
            }
            for (VAR49 = VAR46->VAR76[VAR69] - VAR46->VAR48[1]; VAR49 < VAR46->VAR76[VAR69 + 1] - VAR46->VAR48[1]; VAR49++) {
                VAR261[0] += VAR46->VAR251[VAR205][VAR49];
                VAR261[1] += VAR46->VAR256[VAR205][VAR49];
            }
            VAR266 = VAR264[VAR46->VAR98] * FUN79((VAR270 + VAR261[0]) / (VAR270 + VAR261[1]));
            VAR266 = FUN23(100000.f, VAR266);
            for (VAR49 = VAR46->VAR76[VAR69] - VAR46->VAR48[1]; VAR49 < VAR46->VAR76[VAR69 + 1] - VAR46->VAR48[1]; VAR49++) {
                float VAR272   = VAR46->VAR267[VAR205][VAR49] * VAR266 / VAR46->VAR269[VAR205][VAR49];
                VAR46->VAR267[VAR205][VAR49]  = FUN23(VAR46->VAR267[VAR205][VAR49], VAR272);
                VAR46->VAR269[VAR205][VAR49] = FUN23(VAR46->VAR269[VAR205][VAR49], VAR266);
            }
            VAR261[0] = VAR261[1] = 0.0f;
            for (VAR49 = VAR46->VAR76[VAR69] - VAR46->VAR48[1]; VAR49 < VAR46->VAR76[VAR69 + 1] - VAR46->VAR48[1]; VAR49++) {
                VAR261[0] += VAR46->VAR251[VAR205][VAR49];
                VAR261[1] += VAR46->VAR256[VAR205][VAR49] * VAR46->VAR269[VAR205][VAR49] * VAR46->VAR269[VAR205][VAR49]
                          + VAR46->VAR268[VAR205][VAR49] * VAR46->VAR268[VAR205][VAR49]
                          + (VAR180 && !VAR46->VAR268[VAR205][VAR49]) * VAR46->VAR267[VAR205][VAR49] * VAR46->VAR267[VAR205][VAR49];
            }
            VAR265 = FUN79((VAR270 + VAR261[0]) / (VAR270 + VAR261[1]));
            VAR265 = FUN23(1.584893192f, VAR265);
            for (VAR49 = VAR46->VAR76[VAR69] - VAR46->VAR48[1]; VAR49 < VAR46->VAR76[VAR69 + 1] - VAR46->VAR48[1]; VAR49++) {
                VAR46->VAR269[VAR205][VAR49] *= VAR265;
                VAR46->VAR267[VAR205][VAR49]  *= VAR265;
                VAR46->VAR268[VAR205][VAR49]  *= VAR265;
            }
        }
    }
}


static void FUN80(float VAR246[38][64][2],
                            const float VAR241[64][40][2],
                            SpectralBandReplication *VAR46, SBRData *VAR153,
                            const int VAR51[2])
{
    int VAR205, VAR68, VAR175, VAR49;
    const int VAR273 = 4 * !VAR46->VAR100;
    const int VAR48 = VAR46->VAR48[1];
    const int VAR274 = VAR46->VAR49[1];
    static const float VAR275[5] = {
        0.33333333333333,
        0.30150283239582,
        0.21816949906249,
        0.11516383427084,
        0.03183050093751,
    };
    static const int8_t VAR233[2][4] = {
        {  1,  0, -1,  0}, 
        {  0,  1,  0, -1}, 
    };
    float (*VAR276)[48] = VAR153->VAR276, (*VAR277)[48] = VAR153->VAR277;
    int VAR278 = VAR153->VAR147;
    int VAR279  = VAR153->VAR280;

  if (VAR46->VAR97) {
        for (VAR68 = 0; VAR68 < VAR273; VAR68++) {
            FUN100(VAR276[VAR68 + 2*VAR153->VAR163[0]], VAR46->VAR269[0], VAR274 * sizeof(VAR46->VAR269[0][0]));
            FUN100(VAR277[VAR68 + 2*VAR153->VAR163[0]], VAR46->VAR267[0],  VAR274 * sizeof(VAR46->VAR267[0][0]));
        }
    } else if (VAR273) {
        for (VAR68 = 0; VAR68 < 4; VAR68++) {
            FUN100(VAR276[VAR68 + 2 * VAR153->VAR163[0]],
                   VAR276[VAR68 + 2 * VAR153->VAR162],
                   sizeof(VAR276[0]));
            FUN100(VAR277[VAR68 + 2 * VAR153->VAR163[0]],
                   VAR277[VAR68 + 2 * VAR153->VAR162],
                   sizeof(VAR277[0]));
        }
    }

      for (VAR205 = 0; VAR205 < VAR153->VAR159; VAR205++) {
        for (VAR68 = 2 * VAR153->VAR163[VAR205]; VAR68 < 2 * VAR153->VAR163[VAR205 + 1]; VAR68++) {
            int VAR281 = (1 - 2*(VAR48 & 1));
            FUN68(float, VAR282, [48]);
            FUN68(float, VAR283, [48]);
            float *VAR284, *VAR285;

            if (VAR273 && VAR205 != VAR51[0] && VAR205 != VAR51[1]) {
                VAR284 = VAR282;
                VAR285 = VAR283;
                for (VAR49 = 0; VAR49 < VAR274; VAR49++) {
                    const int VAR286 = VAR68 + VAR273;
                    VAR284[VAR49] = 0.0f;
                    VAR285[VAR49] = 0.0f;
                    for (VAR175 = 0; VAR175 <= VAR273; VAR175++) {
                        VAR284[VAR49] += VAR276[VAR286 - VAR175][VAR49] * VAR275[VAR175];
                        VAR285[VAR49] += VAR277[VAR286 - VAR175][VAR49] * VAR275[VAR175];
                    }
                }
            } else {
                VAR284 = VAR276[VAR68 + VAR273];
                VAR285 = VAR277[VAR68];
            }

            VAR46->VAR61.FUN81(VAR246[VAR68] + VAR48, VAR241 + VAR48, VAR284, VAR274,
                               VAR68 + VAR244);

            if (VAR205 != VAR51[0] && VAR205 != VAR51[1]) {
                VAR46->VAR61.VAR287[VAR279](VAR246[VAR68] + VAR48, VAR46->VAR268[VAR205],
                                                   VAR285, VAR278,
                                                   VAR48, VAR274);
            } else {
                for (VAR49 = 0; VAR49 < VAR274; VAR49++) {
                    VAR246[VAR68][VAR49 + VAR48][0] +=
                        VAR46->VAR268[VAR205][VAR49] * VAR233[0][VAR279];
                    VAR246[VAR68][VAR49 + VAR48][1] +=
                        VAR46->VAR268[VAR205][VAR49] * (VAR233[1][VAR279] * VAR281);
                    VAR281 = -VAR281;
                }
            }
            VAR278 = (VAR278 + VAR274) & 0x1ff;
            VAR279 = (VAR279 + 1) & 3;
        }
    }
    VAR153->VAR147 = VAR278;
    VAR153->VAR280  = VAR279;
}

void FUN82(AACContext *VAR55, SpectralBandReplication *VAR46, int VAR192,
                  float* VAR288, float* VAR289)
{
    int VAR290 = VAR55->VAR186[1].VAR187.VAR203 < VAR46->VAR123;
    int VAR173;
    int VAR291 = (VAR192 == VAR195) ? 2 : 1;
    int VAR196;

    if (!VAR46->VAR204) {
        VAR46->VAR48[0] = VAR46->VAR48[1];
        VAR46->VAR49[0] = VAR46->VAR49[1];
    } else {
        VAR46->VAR204 = 0;
    }

        if (VAR46->VAR47) {
        FUN53(VAR46, VAR192);
    }
    for (VAR173 = 0; VAR173 < VAR291; VAR173++) {
        
        FUN55(&VAR55->VAR292, &VAR46->VAR59, &VAR46->VAR61, VAR173 ? VAR289 : VAR288, VAR46->VAR50[VAR173].VAR293,
                         (float*)VAR46->VAR294,
                         VAR46->VAR50[VAR173].VAR218, VAR46->VAR50[VAR173].VAR295);
        FUN71(VAR55, VAR46, VAR46->VAR231,
                   (const float (*)[32][32][2]) VAR46->VAR50[VAR173].VAR218,
                   VAR46->VAR50[VAR173].VAR295);
        VAR46->VAR50[VAR173].VAR295 ^= 1;
        if (VAR46->VAR47) {
            FUN67(&VAR46->VAR61, VAR46->VAR229, VAR46->VAR230,
                                  (const float (*)[40][2]) VAR46->VAR231, VAR46->VAR69[0]);
            FUN70(VAR46, &VAR46->VAR50[VAR173]);
            FUN72(VAR55, VAR46, VAR46->VAR241,
                       (const float (*)[40][2]) VAR46->VAR231,
                       (const float (*)[2]) VAR46->VAR229,
                       (const float (*)[2]) VAR46->VAR230,
                       VAR46->VAR50[VAR173].VAR238, VAR46->VAR50[VAR173].VAR163,
                       VAR46->VAR50[VAR173].VAR159);


       
           VAR196 = FUN75(VAR55, VAR46, &VAR46->VAR50[VAR173], VAR46->VAR50[VAR173].VAR51);
            if (!VAR196) {
                FUN76(VAR46->VAR256, VAR46->VAR241, VAR46, &VAR46->VAR50[VAR173]);
                FUN78(VAR55, VAR46, &VAR46->VAR50[VAR173], VAR46->VAR50[VAR173].VAR51);
                FUN80(VAR46->VAR50[VAR173].VAR296[VAR46->VAR50[VAR173].VAR295],
                                (const float (*)[40][2]) VAR46->VAR241,
                                VAR46, &VAR46->VAR50[VAR173],
                                VAR46->VAR50[VAR173].VAR51);
            }
        }
     
         FUN74(VAR46, VAR46->VAR220[VAR173],
                  (const float (*)[64][2]) VAR46->VAR50[VAR173].VAR296[1-VAR46->VAR50[VAR173].VAR295],
                  (const float (*)[64][2]) VAR46->VAR50[VAR173].VAR296[  VAR46->VAR50[VAR173].VAR295],
                  (const float (*)[40][2]) VAR46->VAR231, VAR173);
    }
    if (VAR55->VAR186[1].VAR187.VAR60 == 1) {
        if (VAR46->VAR60.VAR47) {
            FUN83(VAR55->VAR112, &VAR46->VAR60, VAR46->VAR220[0], VAR46->VAR220[1], VAR46->VAR48[1] + VAR46->VAR49[1]);
        } else {
            memcpy(VAR46->VAR220[1], VAR46->VAR220[0], sizeof(VAR46->VAR220[0]));
        }
        VAR291 = 2;
    }

     FUN61(&VAR46->VAR58, &VAR46->VAR61, &VAR55->VAR292,
                      VAR288, VAR46->VAR220[0], VAR46->VAR294,
                      VAR46->VAR50[0].VAR297,
                      &VAR46->VAR50[0].VAR56,
                      VAR290);
    if (VAR291 == 2)
        FUN61(&VAR46->VAR58, &VAR46->VAR61, &VAR55->VAR292,
                          VAR289, VAR46->VAR220[1], VAR46->VAR294,
                          VAR46->VAR50[1].VAR297,
                          &VAR46->VAR50[1].VAR56,
                          VAR290);
}
