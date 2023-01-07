static void FUN1()
{
    wchar_t * VAR1;
    CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_printf_67_structType VAR2;
    wchar_t VAR3[100] = VAR4"";
    VAR1 = VAR3;
    {
#ifdef VAR5
        WSADATA VAR6;
        int VAR7 = 0;
#endif
        int VAR8;
        struct sockaddr_in VAR9;
        wchar_t *VAR10;
        SOCKET VAR11 = VAR12;
        SOCKET VAR13 = VAR12;
        size_t VAR14 = wcslen(VAR1);
        do
        {
#ifdef VAR5
            if (FUN2(FUN3(2,2), &VAR6) != VAR15)
            {
                break;
            }
            VAR7 = 1;
#endif
            
            VAR11 = socket(VAR16, VAR17, VAR18);
            if (VAR11 == VAR12)
            {
                break;
            }
            memset(&VAR9, 0, sizeof(VAR9));
            VAR9.VAR19 = VAR16;
            VAR9.VAR20.VAR21 = VAR22;
            VAR9.VAR23 = FUN4(VAR24);
            if (FUN5(VAR11, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
            {
                break;
            }
            if (FUN6(VAR11, VAR27) == VAR26)
            {
                break;
            }
            VAR13 = FUN7(VAR11, NULL, NULL);
            if (VAR13 == VAR26)
            {
                break;
            }
            
            VAR8 = recv(VAR13, (char *)(VAR1 + VAR14), sizeof(wchar_t) * (100 - VAR14 - 1), 0);
            if (VAR8 == VAR26 || VAR8 == 0)
            {
                break;
            }
            
            VAR1[VAR14 + VAR8 / sizeof(wchar_t)] = VAR4'';
            
            VAR10 = FUN8(VAR1, VAR4'');
            if (VAR10)
            {
                *VAR10 = VAR4'';
            }
            VAR10 = FUN8(VAR1, VAR4'');
            if (VAR10)
            {
                *VAR10 = VAR4'';
            }
        }
        while (0);
        if (VAR11 != VAR12)
        {
            FUN9(VAR11);
        }
        if (VAR13 != VAR12)
        {
            FUN9(VAR13);
        }
#ifdef VAR5
        if (VAR7)
        {
            FUN10();
        }
#endif
    }
    VAR2.VAR28 = VAR1;
    FUN11(VAR2);
}