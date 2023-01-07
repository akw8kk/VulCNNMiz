void FUN1()
{
    int VAR1;
    int *VAR2 = &VAR1;
    int *VAR3 = &VAR1;
    
    VAR1 = -1;
    {
        int VAR1 = *VAR2;
        {
#ifdef VAR4
            WSADATA VAR5;
            int VAR6 = 0;
#endif
            int VAR7;
            struct sockaddr_in VAR8;
            SOCKET VAR9 = VAR10;
            SOCKET VAR11 = VAR10;
            char VAR12[VAR13];
            do
            {
#ifdef VAR4
                if (FUN2(FUN3(2,2), &VAR5) != VAR14)
                {
                    break;
                }
                VAR6 = 1;
#endif
                
                VAR9 = socket(VAR15, VAR16, VAR17);
                if (VAR9 == VAR10)
                {
                    break;
                }
                memset(&VAR8, 0, sizeof(VAR8));
                VAR8.VAR18 = VAR15;
                VAR8.VAR19.VAR20 = VAR21;
                VAR8.VAR22 = FUN4(VAR23);
                if (FUN5(VAR9, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
                {
                    break;
                }
                if (FUN6(VAR9, VAR26) == VAR25)
                {
                    break;
                }
                VAR11 = FUN7(VAR9, NULL, NULL);
                if (VAR11 == VAR25)
                {
                    break;
                }
                
                VAR7 = recv(VAR11, VAR12, VAR13 - 1, 0);
                if (VAR7 == VAR25 || VAR7 == 0)
                {
                    break;
                }
                
                VAR12[VAR7] = '';
                
                VAR1 = FUN8(VAR12);
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
#ifdef VAR4
            if (VAR6)
            {
                FUN10();
            }
#endif
        }
        *VAR2 = VAR1;
    }
    {
        int VAR1 = *VAR3;
        {
            char VAR27[100];
            char VAR28[100] = "";
            memset(VAR27, '', 100-1);
            VAR27[100-1] = '';
            if (VAR1 < 100)
            {
                
                memcpy(VAR28, VAR27, VAR1);
                VAR28[VAR1] = ''; 
            }
            FUN11(VAR28);
        }
    }
}