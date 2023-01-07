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
        char VAR10[VAR11];
        do
        {
#ifdef VAR2
            if (FUN2(FUN3(2,2), &VAR3) != VAR12)
            {
                break;
            }
            VAR4 = 1;
#endif
            VAR8 = socket(VAR13, VAR14, VAR15);
            if (VAR8 == VAR9)
            {
                break;
            }
            memset(&VAR7, 0, sizeof(VAR7));
            VAR7.VAR16 = VAR13;
            VAR7.VAR17.VAR18 = FUN4(VAR19);
            VAR7.VAR20 = FUN5(VAR21);
            if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
            {
                break;
            }
            
            
            VAR5 = recv(VAR8, VAR10, VAR11 - 1, 0);
            if (VAR5 == VAR23 || VAR5 == 0)
            {
                break;
            }
            
            VAR10[VAR5] = '';
            
            VAR6 = FUN6(VAR10);
            if (VAR6 > VAR24 || VAR6 < VAR25)
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
            FUN7(VAR8);
        }
#ifdef VAR2
        if (VAR4)
        {
            FUN8();
        }
#endif
    }
    VAR26 = VAR1;
    FUN9();
}