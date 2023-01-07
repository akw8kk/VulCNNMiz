
#include <inttypes.h>

#include "libavutil/channel_layout.h"
#include "avcodec.h"
#include "get_bits.h"
#include "bytestream.h"
#include "internal.h"
#include "unary.h"
#include "mathops.h"
#include "alac_data.h"

#define VAR1 36

typedef struct ALACContext{
    AVCodecContext*VAR6;
    GetBitContext VAR7;
    int VAR8;

    int32_t*VAR10[2];
    int32_t*VAR11[2];
    int32_t*VAR12[2];

    uint32_t VAR13;
    uint8_t  VAR14;
    uint8_t  VAR15;
    uint8_t  VAR16;
    uint8_t  VAR17;

    int VAR18;     
    int VAR19;     
} VAR4;

static inline unsigned int FUN1(GetBitContext*VAR7, int VAR21, int VAR22)
{
    unsigned int VAR23 = FUN2(VAR7);

    if (VAR23 > 8) { 
        
        VAR23 = FUN3(VAR7, VAR22);
    } else if (VAR21 != 1) {
        int VAR24 = FUN4(VAR7, VAR21);

        
        VAR23 = (VAR23 << VAR21) - VAR23;

        if (VAR24 > 1) {
            VAR23 += VAR24 - 1;
            FUN5(VAR7, VAR21);
        } else
            FUN5(VAR7, VAR21 - 1);
    }
    return VAR23;
}

static void FUN6(ALACContext*VAR25, int32_t*VAR26,
                            int VAR19, int VAR22, int VAR15)
{
    int VAR27;
    unsigned int VAR28 = VAR25->VAR16;
    int VAR29 = 0;

    for (VAR27 = 0; VAR27 < VAR19; VAR27++) {
        int VAR21;
        unsigned int VAR23;

        
        VAR21 = FUN7((VAR28 >> 9) + 3);
        VAR21 = FUN8(VAR21, VAR25->VAR17);
        VAR23 = FUN1(&VAR25->VAR7, VAR21, VAR22);
        VAR23 += VAR29;
        VAR29 = 0;
        VAR26[VAR27] = (VAR23 >> 1) ^ -(VAR23 & 1);

        
        if (VAR23 > 0xffff)
            VAR28 = 0xffff;
        else
            VAR28 +=         VAR23 * VAR15 -
                       ((VAR28 * VAR15) >> 9);

        
        if ((VAR28 < 128) && (VAR27 + 1 < VAR19)) {
            int VAR30;

            
            VAR21 = 7 - FUN7(VAR28) + ((VAR28 + 16) >> 6);
            VAR21 = FUN8(VAR21, VAR25->VAR17);
            VAR30 = FUN1(&VAR25->VAR7, VAR21, 16);

            if (VAR30 > 0) {
                if (VAR30 >= VAR19 - VAR27) {
                    FUN9(VAR25->VAR6, VAR31,
                           "", VAR30,
                           VAR19, VAR27);
                    VAR30 = VAR19 - VAR27 - 1;
                }
                FUN200(&VAR26[VAR27 + 1], 0,
                       VAR30 * sizeof(*VAR26));
                VAR27 += VAR30;
            }
            if (VAR30 <= 0xffff)
                VAR29 = 1;
            VAR28 = 0;
        }
    }
}

static inline int FUN10(int VAR32)
{
    return VAR32 ? FUN11(VAR32) : 0;
}

static void FUN12(int32_t*VAR33, int32_t*VAR34,
                           int VAR19, int VAR22, int16_t *VAR36,
                           int VAR37, int VAR38)
{
    int VAR27;
    int32_t*VAR39 = VAR34;

    
    *VAR34 = *VAR33;

    if (VAR19 <= 1)
        return;

    if (!VAR37) {
        FUN200(&VAR34[1], &VAR33[1],
               (VAR19 - 1) * sizeof(*VAR34));
        return;
    }

    if (VAR37 == 31) {
        
        for (VAR27 = 1; VAR27 < VAR19; VAR27++) {
            VAR34[VAR27] = FUN13(VAR34[VAR27 - 1] + VAR33[VAR27],
                                        VAR22);
        }
        return;
    }

    
    for (VAR27 = 1; VAR27 <= VAR37; VAR27++)
        VAR34[VAR27] = FUN13(VAR34[VAR27 - 1] + VAR33[VAR27], VAR22);

    

    for (; VAR27 < VAR19; VAR27++) {
        int VAR40;
        int VAR41 = 0;
        int VAR42 = VAR33[VAR27];
        int VAR43;
        int VAR44 = *VAR39++;

        
        for (VAR40 = 0; VAR40 < VAR37; VAR40++)
            VAR41 += (VAR39[VAR40] - VAR44) * VAR36[VAR40];
        VAR41 = (VAR41 + (1 << (VAR38 - 1))) >> VAR38;
        VAR41 += VAR44 + VAR42;
        VAR34[VAR27] = FUN13(VAR41, VAR22);

        
        VAR43 = FUN10(VAR42);
        if (VAR43) {
            for (VAR40 = 0; VAR40 < VAR37 && VAR42 * VAR43 > 0; VAR40++) {
                int VAR45;
                VAR41  = VAR44 - VAR39[VAR40];
                VAR45 = FUN10(VAR41) * VAR43;
                VAR36[VAR40] -= VAR45;
                VAR41 *= VAR45;
                VAR42 -= (VAR41 >> VAR38) * (VAR40 + 1);
            }
        }
    }
}

static void FUN14(int32_t*VAR46[2], int VAR19,
                               int VAR47, int VAR48)
{
    int VAR27;

    for (VAR27 = 0; VAR27 < VAR19; VAR27++) {
        int32_t VAR49, VAR50;

        VAR49 = VAR46[0][VAR27];
        VAR50 = VAR46[1][VAR27];

        VAR49 -= (VAR50 * VAR48) >> VAR47;
        VAR50 += VAR49;

        VAR46[0][VAR27] = VAR50;
        VAR46[1][VAR27] = VAR49;
    }
}

static void FUN15(int32_t*VAR46[2], int32_t*VAR12[2],
                              int VAR18, int VAR8, int VAR19)
{
    int VAR27, VAR51;

    for (VAR51 = 0; VAR51 < VAR8; VAR51++)
        for (VAR27 = 0; VAR27 < VAR19; VAR27++)
            VAR46[VAR51][VAR27] = (VAR46[VAR51][VAR27] << VAR18) | VAR12[VAR51][VAR27];
}

static int FUN16(AVCodecContext*VAR6, AVFrame *VAR53, int VAR54,
                          int VAR8)
{
    ALACContext*VAR25 = VAR6->VAR55;
    int VAR56, VAR22, VAR57, VAR47, VAR48, VAR58;
    uint32_t VAR59;
    int VAR27, VAR51;

    FUN5(&VAR25->VAR7, 4);  
    FUN5(&VAR25->VAR7, 12); 

    
    VAR56 = FUN17(&VAR25->VAR7);

    VAR25->VAR18 = FUN18(&VAR25->VAR7, 2) << 3;
    VAR22 = VAR25->VAR14 - VAR25->VAR18 + VAR8 - 1;
    if (VAR22 > 32) {
        FUN9(VAR6, VAR31, "", VAR22);
        return VAR60;
    }

    
    VAR57 = !FUN17(&VAR25->VAR7);

    if (VAR56)
        VAR59 = FUN3(&VAR25->VAR7, 32);
    else
        VAR59 = VAR25->VAR13;
    if (!VAR59 || VAR59 > VAR25->VAR13) {
        FUN9(VAR6, VAR31, ""VAR61"",
               VAR59);
        return VAR62;
    }
    if (!VAR25->VAR19) {
        
        VAR53->VAR19 = VAR59;
        if ((VAR58 = FUN19(VAR6, VAR53, 0)) < 0) {
            FUN9(VAR6, VAR31, "");
            return VAR58;
        }
    } else if (VAR59 != VAR25->VAR19) {
        FUN9(VAR6, VAR31, ""VAR61"",
               VAR59, VAR25->VAR19);
        return VAR62;
    }
    VAR25->VAR19 = VAR59;
    if (VAR25->VAR14 > 16) {
        for (VAR51 = 0; VAR51 < VAR8; VAR51++)
            VAR25->VAR11[VAR51] = (int32_t*)VAR53->VAR63[VAR54 + VAR51];
    }

    if (VAR57) {
        int16_t VAR36[2][32];
        int VAR37[2];
        int VAR64[2];
        int VAR38[2];
        int VAR15[2];

        if (!VAR25->VAR17) {
            FUN20(VAR25->VAR6,
                                  "");
            return FUN21(VAR65);
        }

        VAR47       = FUN18(&VAR25->VAR7, 8);
        VAR48 = FUN18(&VAR25->VAR7, 8);

        for (VAR51 = 0; VAR51 < VAR8; VAR51++) {
            VAR64[VAR51]   = FUN18(&VAR25->VAR7, 4);
            VAR38[VAR51]         = FUN18(&VAR25->VAR7, 4);
            VAR15[VAR51] = FUN18(&VAR25->VAR7, 3);
            VAR37[VAR51]         = FUN18(&VAR25->VAR7, 5);

            if (VAR37[VAR51] >= VAR25->VAR13)
                return VAR62;

            
            for (VAR27 = VAR37[VAR51] - 1; VAR27 >= 0; VAR27--)
                VAR36[VAR51][VAR27] = FUN22(&VAR25->VAR7, 16);
        }

        if (VAR25->VAR18) {
            for (VAR27 = 0; VAR27 < VAR25->VAR19; VAR27++) {
                for (VAR51 = 0; VAR51 < VAR8; VAR51++)
                    VAR25->VAR12[VAR51][VAR27] = FUN18(&VAR25->VAR7, VAR25->VAR18);
            }
        }
        for (VAR51 = 0; VAR51 < VAR8; VAR51++) {
            FUN6(VAR25, VAR25->VAR10[VAR51],
                            VAR25->VAR19, VAR22,
                            VAR15[VAR51] * VAR25->VAR15 / 4);

            
            if (VAR64[VAR51] == 15) {
                
                FUN12(VAR25->VAR10[VAR51],
                               VAR25->VAR10[VAR51],
                               VAR25->VAR19, VAR22, NULL, 31, 0);
            } else if (VAR64[VAR51] > 0) {
                FUN9(VAR6, VAR66, "",
                       VAR64[VAR51]);
            }
            FUN12(VAR25->VAR10[VAR51],
                           VAR25->VAR11[VAR51], VAR25->VAR19,
                           VAR22, VAR36[VAR51], VAR37[VAR51], VAR38[VAR51]);
        }
    } else {
        
        for (VAR27 = 0; VAR27 < VAR25->VAR19; VAR27++) {
            for (VAR51 = 0; VAR51 < VAR8; VAR51++) {
                VAR25->VAR11[VAR51][VAR27] =
                         FUN23(&VAR25->VAR7, VAR25->VAR14);
            }
        }
        VAR25->VAR18   = 0;
        VAR47       = 0;
        VAR48 = 0;
    }

    if (VAR8 == 2 && VAR48) {
        FUN14(VAR25->VAR11, VAR25->VAR19,
                           VAR47, VAR48);
    }

    if (VAR25->VAR18) {
        FUN15(VAR25->VAR11, VAR25->VAR12,
                          VAR25->VAR18, VAR8, VAR25->VAR19);
    }

    switch(VAR25->VAR14) {
    case 16: {
        for (VAR51 = 0; VAR51 < VAR8; VAR51++) {
            int16_t *VAR67 = (int16_t *)VAR53->VAR63[VAR54 + VAR51];
            for (VAR27 = 0; VAR27 < VAR25->VAR19; VAR27++)
                *VAR67++ = VAR25->VAR11[VAR51][VAR27];
        }}
        break;
    case 24: {
        for (VAR51 = 0; VAR51 < VAR8; VAR51++) {
            for (VAR27 = 0; VAR27 < VAR25->VAR19; VAR27++)
                VAR25->VAR11[VAR51][VAR27] <<= 8;
        }}
        break;
    }

    return 0;
}

static int FUN24(AVCodecContext*VAR6, void *VAR68,
                             int *VAR69, AVPacket *VAR71)
{
    ALACContext*VAR25 = VAR6->VAR55;
    AVFrame *VAR53    = VAR68;
    enum AlacRawDataBlockType VAR72;
    int VAR8;
    int VAR51, VAR58, VAR73;

    FUN25(&VAR25->VAR7, VAR71->VAR68, VAR71->VAR74 * 8);

    VAR73 = 0;
    VAR25->VAR19 = 0;
    VAR51 = 0;
    while (FUN26(&VAR25->VAR7) >= 3) {
        VAR72 = FUN18(&VAR25->VAR7, 3);
        if (VAR72 == VAR75) {
            VAR73 = 1;
            break;
        }
        if (VAR72 > VAR76 && VAR72 != VAR77) {
            FUN9(VAR6, VAR31, "", VAR72);
            return VAR60;
        }

        VAR8 = (VAR72 == VAR76) ? 2 : 1;
        if (VAR51 + VAR8 > VAR25->VAR8 ||
            VAR78[VAR25->VAR8 - 1][VAR51] + VAR8 > VAR25->VAR8) {
            FUN9(VAR6, VAR31, "");
            return VAR62;
        }

        VAR58 = FUN16(VAR6, VAR53,
                             VAR78[VAR25->VAR8 - 1][VAR51],
                             VAR8);
        if (VAR58 < 0 && FUN26(&VAR25->VAR7))
            return VAR58;

        VAR51 += VAR8;
    }
    if (!VAR73) {
        FUN9(VAR6, VAR31, "");
        return VAR62;
    }
    if (!VAR25->VAR19) {
        FUN9(VAR6, VAR31, "");
        return VAR62;
    }

    if (VAR71->VAR74 * 8 - FUN27(&VAR25->VAR7) > 8) {
        FUN9(VAR6, VAR31, "",
               VAR71->VAR74 * 8 - FUN27(&VAR25->VAR7));
    }

    *VAR69 = 1;

    return VAR71->VAR74;
}

static av_cold int FUN28(AVCodecContext*VAR6)
{
    ALACContext*VAR25 = VAR6->VAR55;

    int VAR51;
    for (VAR51 = 0; VAR51 < FUN8(VAR25->VAR8, 2); VAR51++) {
        FUN29(&VAR25->VAR10[VAR51]);
        if (VAR25->VAR14 == 16)
            FUN29(&VAR25->VAR11[VAR51]);
        FUN29(&VAR25->VAR12[VAR51]);
    }

    return 0;
}

static int FUN30(ALACContext*VAR25)
{
    int VAR51;
    int VAR79 = VAR25->VAR13 * sizeof(VAR9);

    for (VAR51 = 0; VAR51 < FUN8(VAR25->VAR8, 2); VAR51++) {
        FUN31(VAR25->VAR6, VAR25->VAR10[VAR51],
                         VAR79, VAR80);

        if (VAR25->VAR14 == 16) {
            FUN31(VAR25->VAR6, VAR25->VAR11[VAR51],
                             VAR79, VAR80);
        }

        FUN31(VAR25->VAR6, VAR25->VAR12[VAR51],
                         VAR79, VAR80);
    }
    return 0;
VAR80:
    FUN28(VAR25->VAR6);
    return FUN21(VAR81);
}

static int FUN32(ALACContext*VAR25)
{
    GetByteContext VAR7;

    FUN33(&VAR7, VAR25->VAR6->VAR82,
                     VAR25->VAR6->VAR83);

    FUN34(&VAR7, 12); 

    VAR25->VAR13 = FUN35(&VAR7);
    if (!VAR25->VAR13 ||
        VAR25->VAR13 > VAR84 / sizeof(VAR9)) {
        FUN9(VAR25->VAR6, VAR31,
               ""VAR61"",
               VAR25->VAR13);
        return VAR62;
    }
    FUN34(&VAR7, 1);  
    VAR25->VAR14          = FUN36(&VAR7);
    VAR25->VAR15    = FUN36(&VAR7);
    VAR25->VAR16 = FUN36(&VAR7);
    VAR25->VAR17           = FUN36(&VAR7);
    VAR25->VAR8             = FUN36(&VAR7);
    FUN37(&VAR7); 
    FUN35(&VAR7); 
    FUN35(&VAR7); 
    FUN35(&VAR7); 

    return 0;
}

static av_cold int FUN38(AVCodecContext* VAR6)
{
    int VAR58;
    ALACContext*VAR25 = VAR6->VAR55;
    VAR25->VAR6 = VAR6;

    
    if (VAR25->VAR6->VAR83 < VAR85) {
        FUN9(VAR6, VAR31, "");
        return VAR62;
    }
    if (FUN32(VAR25)) {
        FUN9(VAR6, VAR31, "");
        return -1;
    }

    switch (VAR25->VAR14) {
    case 16: VAR6->VAR86 = VAR87;
             break;
    case 24:
    case 32: VAR6->VAR86 = VAR88;
             break;
    default: FUN20(VAR6, "", VAR25->VAR14);
             return VAR60;
    }
    VAR6->VAR89 = VAR25->VAR14;

    if (VAR25->VAR8 < 1) {
        FUN9(VAR6, VAR66, "");
        VAR25->VAR8 = VAR6->VAR8;
    } else {
        if (VAR25->VAR8 > VAR90)
            VAR25->VAR8 = VAR6->VAR8;
        else
            VAR6->VAR8 = VAR25->VAR8;
    }
    if (VAR6->VAR8 > VAR90) {
        FUN9(VAR6, VAR31, "",
               VAR6->VAR8);
        return VAR60;
    }
    VAR6->VAR91 = VAR92[VAR25->VAR8 - 1];

    if ((VAR58 = FUN30(VAR25)) < 0) {
        FUN9(VAR6, VAR31, "");
        return VAR58;
    }

    return 0;
}

AVCodec VAR93 = {
    .VAR94           = "",
    .VAR95      = FUN39(""),
    .VAR96           = VAR97,
    .VAR98             = VAR99,
    .VAR100 = sizeof(VAR4),
    .VAR101           = VAR102,
    .close          = VAR103,
    .VAR104         = VAR105,
    .VAR106   = VAR107,
};