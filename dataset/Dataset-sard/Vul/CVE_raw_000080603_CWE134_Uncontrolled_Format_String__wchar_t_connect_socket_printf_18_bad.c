void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    goto VAR4;
VAR4:
    {
#ifdef VAR5
        WSADATA VAR6;
        int VAR7 = 0;
#endif
        int VAR8;
        struct sockaddr_in VAR9;
        wchar_t *VAR10;
        SOCKET VAR11 = VAR12;
        size_t VAR13 = wcslen(VAR1);
        do
        {
#ifdef VAR5
            if (FUN2(FUN3(2,2), &VAR6) != VAR14)
            {
                break;
            }
            VAR7 = 1;
#endif
            
            VAR11 = socket(VAR15, VAR16, VAR17);
            if (VAR11 == VAR12)
            {
                break;
            }
            memset(&VAR9, 0, sizeof(VAR9));
            VAR9.VAR18 = VAR15;
            VAR9.VAR19.VAR20 = FUN4(VAR21);
            VAR9.VAR22 = FUN5(VAR23);
            if (connect(VAR11, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
            {
                break;
            }
            
            
            VAR8 = recv(VAR11, (char *)(VAR1 + VAR13), sizeof(wchar_t) * (100 - VAR13 - 1), 0);
            if (VAR8 == VAR25 || VAR8 == 0)
            {
                break;
            }
            
            VAR1[VAR13 + VAR8 / sizeof(wchar_t)] = VAR3'';
            
            VAR10 = FUN6(VAR1, VAR3'');
            if (VAR10)
            {
                *VAR10 = VAR3'';
            }
            VAR10 = FUN6(VAR1, VAR3'');
            if (VAR10)
            {
                *VAR10 = VAR3'';
            }
        }
        while (0);
        if (VAR11 != VAR12)
        {
            FUN7(VAR11);
        }
#ifdef VAR5
        if (VAR7)
        {
            FUN8();
        }
#endif
    }
    goto VAR26;
VAR26:
    
    FUN9(VAR1);
}