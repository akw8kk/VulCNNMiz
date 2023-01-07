
#include "avcodec.h"
#include "internal.h"
#include "libavutil/common.h"


typedef struct VAR2 {
    uint8_t VAR3[2];
    const int8_t *VAR5;

    uint8_t *VAR7[2];
    int VAR8;
    int VAR9;
} VAR2;

static const int8_t VAR10[16]   = { -34, -21, -13,  -8, -5, -3, -2, -1,
                                          0,   1,   2,   3,  5,  8, 13, 21 };
static const int8_t VAR11[16] = { -128, -64, -32, -16, -8, -4, -2, -1,
                                           0,   1,   2,   4,  8, 16, 32, 64 };

#define VAR4 32768


static void FUN1(uint8_t *VAR12, const uint8_t *VAR13, int VAR14,
                         uint8_t *VAR15, const int8_t *VAR5)
{
    uint8_t VAR16 = *VAR15;

    while (VAR14--) {
        uint8_t VAR17 = *VAR13++;
        VAR16 = FUN2(VAR16 + VAR5[VAR17 & 0xF]);
        *VAR12++ = VAR16;
        VAR16 = FUN2(VAR16 + VAR5[VAR17 >> 4]);
        *VAR12++ = VAR16;
    }

    *VAR15 = VAR16;
}

static void FUN3(uint8_t *VAR12, const int8_t *VAR13, int VAR14)
{
    while (VAR14--)
        *VAR12++ = *VAR13++ + 128;
}


static int FUN4(AVCodecContext *VAR19, void *VAR7,
                                 int *VAR20, AVPacket *VAR22)
{
    EightSvxContext *VAR23 = VAR19->VAR24;
    AVFrame *VAR26       = VAR7;
    int VAR27;
    int VAR28, VAR29;
    int VAR30 = (VAR19->VAR31 != VAR32);

    
    if (VAR22->VAR7) {
        int VAR33  = VAR30 ? 2 : 0;
        int VAR34 = (VAR22->VAR35 - VAR33 * VAR19->VAR36) / VAR19->VAR36;

        if (VAR22->VAR35 < VAR33 * VAR19->VAR36) {
            FUN5(VAR19, VAR37, "");
            return VAR38;
        }
         if (VAR23->VAR7[0]) {
            FUN5(VAR19, VAR37, "");
            return VAR38;
        }

        if (VAR30) {
        VAR23->VAR3[0] = VAR22->VAR7[1] + 128;
        if (VAR19->VAR36 == 2)
            VAR23->VAR3[1] = VAR22->VAR7[2+VAR34+1] + 128;
        }

         VAR23->VAR9  = 0;
        VAR23->VAR8 = VAR34;
        if (!(VAR23->VAR7[0] = FUN6(VAR34)))
            return FUN7(VAR39);
        if (VAR19->VAR36 == 2) {
            if (!(VAR23->VAR7[1] = FUN6(VAR34))) {
                FUN8(&VAR23->VAR7[0]);
                return FUN7(VAR39);
            }
        }
        FUN45(VAR23->VAR7[0], &VAR22->VAR7[VAR33], VAR34);
        if (avctx->channels == 2)
            FUN45(VAR23->VAR7[1], &VAR22->VAR7[2*VAR33+VAR34], VAR34);
    }
     if (!VAR23->VAR7[0]) {
        FUN5(VAR19, VAR37, "");
        return VAR38;
    }

    
     VAR27 = FUN9(VAR40, VAR23->VAR8 - VAR23->VAR9);
    if (VAR27 <= 0) {
        *VAR20 = 0;
        return VAR22->VAR35;
    }

   VAR26->VAR41 = VAR27 * (VAR30 + 1);
    if ((VAR29 = FUN10(VAR19, VAR26, 0)) < 0) {
        FUN5(VAR19, VAR37, "");
        return VAR29;
    }

     for (VAR28 = 0; VAR28 < VAR19->VAR36; VAR28++) {
        if (VAR30) {
            FUN1(VAR26->VAR7[VAR28], &VAR23->VAR7[VAR28][VAR23->VAR9],
                         VAR27, &VAR23->VAR3[VAR28], VAR23->VAR5);
        } else {
            FUN3(VAR26->VAR7[VAR28], &VAR23->VAR7[VAR28][VAR23->VAR9],
                       VAR27);
        }
    }

    VAR23->VAR9 += VAR27;

    *VAR20 = 1;

    return VAR22->VAR35;
}


static av_cold int FUN11(AVCodecContext *VAR19)
{
    EightSvxContext *VAR23 = VAR19->VAR24;

    if (VAR19->VAR36 < 1 || VAR19->VAR36 > 2) {
        FUN5(VAR19, VAR37, "");
        return VAR38;
    }

    switch(VAR19->VAR42->VAR43) {
        case VAR44:
          VAR23->VAR5 = VAR10;
          break;
        case VAR45:
          VAR23->VAR5 = VAR11;
          break;
        case VAR32:
            break;
        default:
          return VAR38;
    }
    VAR19->VAR46 = VAR47;

    return 0;
}

static av_cold int FUN12(AVCodecContext *VAR19)
{
    EightSvxContext *VAR23 = VAR19->VAR24;

    FUN8(&VAR23->VAR7[0]);
    FUN8(&VAR23->VAR7[1]);

    return 0;
}

AVCodec VAR48 = {
  .VAR49           = "",
  .VAR50      = FUN13(""),
  .VAR51           = VAR52,
  .VAR43             = VAR44,
  .VAR53 = sizeof (EightSvxContext),
  .VAR54           = VAR55,
  .close          = VAR56,
  .VAR57         = VAR58,
  .VAR59   = VAR60 | VAR61,
  .VAR62    = (const enum VAR63[]) { VAR47,
                                                    VAR64 },
};

AVCodec VAR65 = {
  .VAR49           = "",
  .VAR50      = FUN13(""),
  .VAR51           = VAR52,
  .VAR43             = VAR45,
  .VAR53 = sizeof (EightSvxContext),
  .VAR54           = VAR55,
  .close          = VAR56,
  .VAR57         = VAR58,
  .VAR59   = VAR60 | VAR61,
  .VAR62    = (const enum VAR63[]) { VAR47,
                                                    VAR64 },
};

AVCodec VAR66 = {
    .VAR49           = "",
    .VAR50      = FUN13(""),
    .VAR51           = VAR52,
    .VAR43             = VAR32,
    .VAR53 = sizeof(EightSvxContext),
    .VAR54           = VAR55,
    .close          = VAR56,
    .VAR57         = VAR58,
    .VAR59   = VAR60 | VAR61,
    .VAR62    = (const enum VAR63[]) { VAR47,
                                                      VAR64 },
};
