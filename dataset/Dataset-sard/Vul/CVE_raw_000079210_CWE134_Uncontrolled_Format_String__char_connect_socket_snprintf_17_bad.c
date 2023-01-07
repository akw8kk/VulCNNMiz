void FUN1()
{
    int VAR1,VAR2;
    char * VAR3;
    char VAR4[100] = "";
    VAR3 = VAR4;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
#ifdef VAR5
            WSADATA VAR6;
            int VAR7 = 0;
#endif
            int VAR8;
            struct sockaddr_in VAR9;
            char *VAR10;
            SOCKET VAR11 = VAR12;
            size_t VAR13 = strlen(VAR3);
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
                
                
                VAR8 = recv(VAR11, (char *)(VAR3 + VAR13), sizeof(char) * (100 - VAR13 - 1), 0);
                if (VAR8 == VAR25 || VAR8 == 0)
                {
                    break;
                }
                
                VAR3[VAR13 + VAR8 / sizeof(char)] = '';
                
                VAR10 = strchr(VAR3, '');
                if (VAR10)
                {
                    *VAR10 = '';
                }
                VAR10 = strchr(VAR3, '');
                if (VAR10)
                {
                    *VAR10 = '';
                }
            }
            while (0);
            if (VAR11 != VAR12)
            {
                FUN6(VAR11);
            }
#ifdef VAR5
            if (VAR7)
            {
                FUN7();
            }
#endif
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        {
            char VAR26[100] = "";
            
            FUN8(VAR26, 100-1, VAR3);
            FUN9(VAR26);
        }
    }
}