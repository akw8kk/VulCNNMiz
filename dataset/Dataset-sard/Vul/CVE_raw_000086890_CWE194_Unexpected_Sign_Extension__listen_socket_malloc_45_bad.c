void FUN1()
{
    short VAR1;
    
    VAR1 = 0;
    {
#ifdef VAR2
        WSADATA VAR3;
        int VAR4 = 0;
#endif
        int VAR5;
        int VAR6;
        struct sockaddr_in VAR7;
        SOCKET VAR8 = VAR9;
        SOCKET VAR10 = VAR9;
        char VAR11[VAR12];
        do
        {
#ifdef VAR2
            if (FUN2(FUN3(2,2), &VAR3) != VAR13)
            {
                break;
            }
            VAR4 = 1;
#endif
            VAR8 = socket(VAR14, VAR15, VAR16);
            if (VAR8 == VAR9)
            {
                break;
            }
            memset(&VAR7, 0, sizeof(VAR7));
            VAR7.VAR17 = VAR14;
            VAR7.VAR18.VAR19 = VAR20;
            VAR7.VAR21 = FUN4(VAR22);
            if (FUN5(VAR8, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
            {
                break;
            }
            if (FUN6(VAR8, VAR25) == VAR24)
            {
                break;
            }
            VAR10 = FUN7(VAR8, NULL, NULL);
            if (VAR10 == VAR24)
            {
                break;
            }
            
            VAR5 = recv(VAR10, VAR11, VAR12 - 1, 0);
            
            if (VAR5 == VAR24 || VAR5 == 0)
            {
                break;
            }
            
            VAR11[VAR5] = '';
            
            VAR6 = FUN8(VAR11);
            if (VAR6 > VAR26 || VAR6 < VAR27)
            {
                VAR1 = -1;
            }
            else
            {
                VAR1 = VAR6;
            }
        }
        while (0);
        if (VAR8 != VAR9)
        {
            FUN9(VAR8);
        }
        if (VAR10 != VAR9)
        {
            FUN9(VAR10);
        }
#ifdef VAR2
        if (VAR4)
        {
            FUN10();
        }
#endif
    }
    VAR28 = VAR1;
    FUN11();
}