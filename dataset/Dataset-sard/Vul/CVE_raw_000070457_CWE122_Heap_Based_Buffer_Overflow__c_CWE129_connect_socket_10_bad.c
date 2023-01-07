void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2)
    {
        {
#ifdef VAR3
            WSADATA VAR4;
            int VAR5 = 0;
#endif
            int VAR6;
            struct sockaddr_in VAR7;
            SOCKET VAR8 = VAR9;
            char VAR10[VAR11];
            do
            {
#ifdef VAR3
                if (FUN2(FUN3(2,2), &VAR4) != VAR12)
                {
                    break;
                }
                VAR5 = 1;
#endif
                
                VAR8 = socket(VAR13, VAR14, VAR15);
                if (VAR8 == VAR9)
                {
                    break;
                }
                memset(&VAR7, 0, sizeof(VAR7));
                VAR7.VAR16 = VAR13;
                VAR7.VAR17.VAR18 = FUN4(VAR19);
                VAR7.VAR20 = FUN5(VAR21);
                if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
                {
                    break;
                }
                
                VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
                if (VAR6 == VAR23 || VAR6 == 0)
                {
                    break;
                }
                
                VAR10[VAR6] = '';
                
                VAR1 = FUN6(VAR10);
            }
            while (0);
            if (VAR8 != VAR9)
            {
                FUN7(VAR8);
            }
#ifdef VAR3
            if (VAR5)
            {
                FUN8();
            }
#endif
        }
    }
    if(VAR2)
    {
        {
            int VAR24;
            int * VAR25 = (int *)malloc(10 * sizeof(int));
            
            for (VAR24 = 0; VAR24 < 10; VAR24++)
            {
                VAR25[VAR24] = 0;
            }
            
            if (VAR1 >= 0)
            {
                VAR25[VAR1] = 1;
                
                for(VAR24 = 0; VAR24 < 10; VAR24++)
                {
                    FUN9(VAR25[VAR24]);
                }
            }
            else
            {
                FUN10("");
            }
            free(VAR25);
        }
    }
}