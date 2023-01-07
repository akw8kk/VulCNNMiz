void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    {
#ifdef VAR4
        WSADATA VAR5;
        int VAR6 = 0;
#endif
        int VAR7;
        struct sockaddr_in VAR8;
        wchar_t *VAR9;
        SOCKET VAR10 = VAR11;
        SOCKET VAR12 = VAR11;
        size_t VAR13 = wcslen(VAR1);
        do
        {
#ifdef VAR4
            if (FUN2(FUN3(2,2), &VAR5) != VAR14)
            {
                break;
            }
            VAR6 = 1;
#endif
            
            VAR10 = socket(VAR15, VAR16, VAR17);
            if (VAR10 == VAR11)
            {
                break;
            }
            memset(&VAR8, 0, sizeof(VAR8));
            VAR8.VAR18 = VAR15;
            VAR8.VAR19.VAR20 = VAR21;
            VAR8.VAR22 = FUN4(VAR23);
            if (FUN5(VAR10, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
            {
                break;
            }
            if (FUN6(VAR10, VAR26) == VAR25)
            {
                break;
            }
            VAR12 = FUN7(VAR10, NULL, NULL);
            if (VAR12 == VAR25)
            {
                break;
            }
            
            VAR7 = recv(VAR12, (char *)(VAR1 + VAR13), sizeof(wchar_t) * (100 - VAR13 - 1), 0);
            if (VAR7 == VAR25 || VAR7 == 0)
            {
                break;
            }
            
            VAR1[VAR13 + VAR7 / sizeof(wchar_t)] = VAR3'';
            
            VAR9 = FUN8(VAR1, VAR3'');
            if (VAR9)
            {
                *VAR9 = VAR3'';
            }
            VAR9 = FUN8(VAR1, VAR3'');
            if (VAR9)
            {
                *VAR9 = VAR3'';
            }
        }
        while (0);
        if (VAR10 != VAR11)
        {
            FUN9(VAR10);
        }
        if (VAR12 != VAR11)
        {
            FUN9(VAR12);
        }
#ifdef VAR4
        if (VAR6)
        {
            FUN10();
        }
#endif
    }
    {
        wchar_t * VAR27 = VAR1;
        wchar_t * VAR1 = VAR27;
        
        FUN11(VAR1);
    }
}