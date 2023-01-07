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
            char VAR11[VAR12];
            do
            {
#ifdef VAR4
                if (FUN2(FUN3(2,2), &VAR5) != VAR13)
                {
                    break;
                }
                VAR6 = 1;
#endif
                
                VAR9 = socket(VAR14, VAR15, VAR16);
                if (VAR9 == VAR10)
                {
                    break;
                }
                memset(&VAR8, 0, sizeof(VAR8));
                VAR8.VAR17 = VAR14;
                VAR8.VAR18.VAR19 = FUN4(VAR20);
                VAR8.VAR21 = FUN5(VAR22);
                if (connect(VAR9, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
                {
                    break;
                }
                
                VAR7 = recv(VAR9, VAR11, VAR12 - 1, 0);
                if (VAR7 == VAR24 || VAR7 == 0)
                {
                    break;
                }
                
                VAR11[VAR7] = '';
                
                VAR1 = FUN6(VAR11);
            }
            while (0);
            if (VAR9 != VAR10)
            {
                FUN7(VAR9);
            }
#ifdef VAR4
            if (VAR6)
            {
                FUN8();
            }
#endif
        }
        *VAR2 = VAR1;
    }
    {
        int VAR1 = *VAR3;
        {
            int VAR25;
            int VAR26[10] = { 0 };
            
            if (VAR1 >= 0)
            {
                VAR26[VAR1] = 1;
                
                for(VAR25 = 0; VAR25 < 10; VAR25++)
                {
                    FUN9(VAR26[VAR25]);
                }
            }
            else
            {
                FUN10("");
            }
        }
    }
}