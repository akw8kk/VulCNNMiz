void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(FUN2())
    {
        {
#ifdef VAR3
            WSADATA VAR4;
            int VAR5 = 0;
#endif
            int VAR6;
            struct sockaddr_in VAR7;
            char *VAR8;
            SOCKET VAR9 = VAR10;
            SOCKET VAR11 = VAR10;
            size_t VAR12 = strlen(VAR1);
            do
            {
#ifdef VAR3
                if (FUN3(FUN4(2,2), &VAR4) != VAR13)
                {
                    break;
                }
                VAR5 = 1;
#endif
                
                VAR9 = socket(VAR14, VAR15, VAR16);
                if (VAR9 == VAR10)
                {
                    break;
                }
                memset(&VAR7, 0, sizeof(VAR7));
                VAR7.VAR17 = VAR14;
                VAR7.VAR18.VAR19 = VAR20;
                VAR7.VAR21 = FUN5(VAR22);
                if (FUN6(VAR9, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
                {
                    break;
                }
                if (FUN7(VAR9, VAR25) == VAR24)
                {
                    break;
                }
                VAR11 = FUN8(VAR9, NULL, NULL);
                if (VAR11 == VAR24)
                {
                    break;
                }
                
                VAR6 = recv(VAR11, (char *)(VAR1 + VAR12), sizeof(char) * (100 - VAR12 - 1), 0);
                if (VAR6 == VAR24 || VAR6 == 0)
                {
                    break;
                }
                
                VAR1[VAR12 + VAR6 / sizeof(char)] = '';
                
                VAR8 = strchr(VAR1, '');
                if (VAR8)
                {
                    *VAR8 = '';
                }
                VAR8 = strchr(VAR1, '');
                if (VAR8)
                {
                    *VAR8 = '';
                }
            }
            while (0);
            if (VAR9 != VAR10)
            {
                FUN9(VAR9);
            }
            if (VAR11 != VAR10)
            {
                FUN9(VAR11);
            }
#ifdef VAR3
            if (VAR5)
            {
                FUN10();
            }
#endif
        }
    }
    else
    {
        
        strcpy(VAR1, "");
    }
    if(FUN2())
    {
        {
            char VAR26[100] = "";
            
            FUN11(VAR26, 100-1, VAR1);
            FUN12(VAR26);
        }
    }
    else
    {
        {
            char VAR26[100] = "";
            
            FUN11(VAR26, 100-1, "", VAR1);
            FUN12(VAR26);
        }
    }
}