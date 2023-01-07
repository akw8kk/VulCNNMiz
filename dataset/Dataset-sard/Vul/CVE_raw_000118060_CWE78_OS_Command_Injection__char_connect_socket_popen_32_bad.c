void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[100] = VAR5;
    VAR1 = VAR4;
    {
        char * VAR1 = *VAR2;
        {
#ifdef VAR6
            WSADATA VAR7;
            int VAR8 = 0;
#endif
            int VAR9;
            struct sockaddr_in VAR10;
            char *VAR11;
            SOCKET VAR12 = VAR13;
            size_t VAR14 = strlen(VAR1);
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
                
                
                VAR9 = recv(VAR12, (char *)(VAR1 + VAR14), sizeof(char) * (100 - VAR14 - 1), 0);
                if (VAR9 == VAR26 || VAR9 == 0)
                {
                    break;
                }
                
                VAR1[VAR14 + VAR9 / sizeof(char)] = '';
                
                VAR11 = strchr(VAR1, '');
                if (VAR11)
                {
                    *VAR11 = '';
                }
                VAR11 = strchr(VAR1, '');
                if (VAR11)
                {
                    *VAR11 = '';
                }
            }
            while (0);
            if (VAR12 != VAR13)
            {
                FUN6(VAR12);
            }
#ifdef VAR6
            if (VAR8)
            {
                FUN7();
            }
#endif
        }
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            VAR27 *VAR28;
            
            VAR28 = FUN8(VAR1, "");
            if (VAR28 != NULL)
            {
                FUN9(VAR28);
            }
        }
    }
}