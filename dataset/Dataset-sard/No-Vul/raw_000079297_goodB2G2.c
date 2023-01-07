static void FUN1()
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
            size_t VAR11 = strlen(VAR1);
            do
            {
#ifdef VAR3
                if (FUN3(FUN4(2,2), &VAR4) != VAR12)
                {
                    break;
                }
                VAR5 = 1;
#endif
                
                VAR9 = socket(VAR13, VAR14, VAR15);
                if (VAR9 == VAR10)
                {
                    break;
                }
                memset(&VAR7, 0, sizeof(VAR7));
                VAR7.VAR16 = VAR13;
                VAR7.VAR17.VAR18 = FUN5(VAR19);
                VAR7.VAR20 = FUN6(VAR21);
                if (connect(VAR9, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
                {
                    break;
                }
                
                
                VAR6 = recv(VAR9, (char *)(VAR1 + VAR11), sizeof(char) * (100 - VAR11 - 1), 0);
                if (VAR6 == VAR23 || VAR6 == 0)
                {
                    break;
                }
                
                VAR1[VAR11 + VAR6 / sizeof(char)] = '';
                
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
                FUN7(VAR9);
            }
#ifdef VAR3
            if (VAR5)
            {
                FUN8();
            }
#endif
        }
    }
    if(FUN2())
    {
        FUN9(VAR1, VAR1);
    }
}