

#include "libavutil/common.h"
#include "libavutil/mem.h"

#include "timefilter.h"

struct VAR2 {
    
    
    double VAR3;
    double VAR4;
    double VAR5;
    double VAR6;
    int VAR7;
};

TimeFilter *FUN1(double VAR6,
                              double VAR4,
                              double VAR5)
{
    TimeFilter *VAR8 = FUN2(sizeof(VAR2));

    if (!VAR8)
        return NULL;

    VAR8->VAR6     = VAR6;
    VAR8->VAR4 = VAR4;
    VAR8->VAR5 = VAR5;
    return VAR8;
}

void FUN3(VAR2 *VAR8)
{
    FUN4(&VAR8);
}

void FUN5(VAR2 *VAR8)
{
    VAR8->VAR7 = 0;
}

double FUN6(TimeFilter *VAR8, double VAR9, double VAR10)
{
    VAR8->VAR7++;
    if (VAR8->VAR7 == 1) {
        VAR8->VAR3 = VAR9;
    } else {
        double VAR11;
        VAR8->VAR3 += VAR8->VAR6 * VAR10;
        VAR11 = VAR9 - VAR8->VAR3;

        VAR8->VAR3   += FUN7(VAR8->VAR4, 1.0 / VAR8->VAR7) * VAR11;
        VAR8->VAR6 += VAR8->VAR5 * VAR11 / VAR10;
    }
    return VAR8->VAR3;
}
