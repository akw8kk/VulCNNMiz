static void FUN1()
{
    char * VAR1;
    CWE134_Uncontrolled_Format_String__char_connect_socket_snprintf_34_unionType VAR2;
    char VAR3[100] = "";
    VAR1 = VAR3;
    {
#ifdef VAR4
        WSADATA VAR5;
        int VAR6 = 0;
#endif
        int VAR7;
        struct sockaddr_in VAR8;
        char *VAR9;
        SOCKET VAR10 = VAR11;
        size_t VAR12 = strlen(VAR1);
        do
        {
#ifdef VAR4
            if (FUN2(FUN3(2,2), &VAR5) != VAR13)
            {
                break;
            }
            VAR6 = 1;
#endif
            
            VAR10 = socket(VAR14, VAR15, VAR16);
            if (VAR10 == VAR11)
            {
                break;
            }
            memset(&VAR8, 0, sizeof(VAR8));
            VAR8.VAR17 = VAR14;
            VAR8.VAR18.VAR19 = FUN4(VAR20);
            VAR8.VAR21 = FUN5(VAR22);
            if (connect(VAR10, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
            {
                break;
            }
            
            
            VAR7 = recv(VAR10, (char *)(VAR1 + VAR12), sizeof(char) * (100 - VAR12 - 1), 0);
            if (VAR7 == VAR24 || VAR7 == 0)
            {
                break;
            }
            
            VAR1[VAR12 + VAR7 / sizeof(char)] = '';
            
            VAR9 = strchr(VAR1, '');
            if (VAR9)
            {
                *VAR9 = '';
            }
            VAR9 = strchr(VAR1, '');
            if (VAR9)
            {
                *VAR9 = '';
            }
        }
        while (0);
        if (VAR10 != VAR11)
        {
            FUN6(VAR10);
        }
#ifdef VAR4
        if (VAR6)
        {
            FUN7();
        }
#endif
    }
    VAR2.VAR25 = VAR1;
    {
        char * VAR1 = VAR2.VAR26;
        {
            char VAR27[100] = "";
            
            FUN8(VAR27, 100-1, "", VAR1);
            FUN9(VAR27);
        }
    }
}