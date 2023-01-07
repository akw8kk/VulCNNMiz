void FUN1()
{
    int VAR1,VAR2;
    wchar_t * VAR3;
    wchar_t VAR4[100] = VAR5"";
    VAR3 = VAR4;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
#ifdef VAR6
            WSADATA VAR7;
            int VAR8 = 0;
#endif
            int VAR9;
            struct sockaddr_in VAR10;
            wchar_t *VAR11;
            SOCKET VAR12 = VAR13;
            size_t VAR14 = wcslen(VAR3);
            do
            {
#ifdef VAR6
                if (FUN2(FUN3(2,2), &VAR7) != VAR15)
                {
                    break;
                }
                VAR8 = 1;
#endif
                
                VAR12 = socket(VAR16, VAR17, VAR18);
                if (VAR12 == VAR13)
                {
                    break;
                }
                memset(&VAR10, 0, sizeof(VAR10));
                VAR10.VAR19 = VAR16;
                VAR10.VAR20.VAR21 = FUN4(VAR22);
                VAR10.VAR23 = FUN5(VAR24);
                if (connect(VAR12, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
                {
                    break;
                }
                
                
                VAR9 = recv(VAR12, (char *)(VAR3 + VAR14), sizeof(wchar_t) * (100 - VAR14 - 1), 0);
                if (VAR9 == VAR26 || VAR9 == 0)
                {
                    break;
                }
                
                VAR3[VAR14 + VAR9 / sizeof(wchar_t)] = VAR5'';
                
                VAR11 = FUN6(VAR3, VAR5'');
                if (VAR11)
                {
                    *VAR11 = VAR5'';
                }
                VAR11 = FUN6(VAR3, VAR5'');
                if (VAR11)
                {
                    *VAR11 = VAR5'';
                }
            }
            while (0);
            if (VAR12 != VAR13)
            {
                FUN7(VAR12);
            }
#ifdef VAR6
            if (VAR8)
            {
                FUN8();
            }
#endif
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        
        FUN9(VAR3);
    }
}