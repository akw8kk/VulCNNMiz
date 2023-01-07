static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2==5)
    {
        {
#ifdef VAR3
            WSADATA VAR4;
            int VAR5 = 0;
#endif
            int VAR6;
            struct sockaddr_in VAR7;
            SOCKET VAR8 = VAR9;
            SOCKET VAR10 = VAR9;
            char VAR11[VAR12];
            do
            {
#ifdef VAR3
                if (FUN2(FUN3(2,2), &VAR4) != VAR13)
                {
                    break;
                }
                VAR5 = 1;
#endif
                
                VAR8 = socket(VAR14, VAR15, VAR16);
                if (VAR8 == VAR9)
                {
                    break;
                }
                memset(&VAR7, 0, sizeof(VAR7));
                VAR7.VAR17 = VAR14;
                VAR7.VAR18.VAR19 = VAR20;
                VAR7.VAR21 = FUN4(VAR22);
                if (FUN5(VAR8, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
                {
                    break;
                }
                if (FUN6(VAR8, VAR25) == VAR24)
                {
                    break;
                }
                VAR10 = FUN7(VAR8, NULL, NULL);
                if (VAR10 == VAR24)
                {
                    break;
                }
                
                VAR6 = recv(VAR10, VAR11, VAR12 - 1, 0);
                if (VAR6 == VAR24 || VAR6 == 0)
                {
                    break;
                }
                
                VAR11[VAR6] = '';
                
                VAR1 = FUN8(VAR11);
            }
            while (0);
            if (VAR8 != VAR9)
            {
                FUN9(VAR8);
            }
            if (VAR10 != VAR9)
            {
                FUN9(VAR10);
            }
#ifdef VAR3
            if (VAR5)
            {
                FUN10();
            }
#endif
        }
    }
    if(VAR2!=5)
    {
        
        FUN11("");
    }
    else
    {
        {
            int VAR26;
            int * VAR27 = (int *)malloc(10 * sizeof(int));
            
            for (VAR26 = 0; VAR26 < 10; VAR26++)
            {
                VAR27[VAR26] = 0;
            }
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR27[VAR1] = 1;
                
                for(VAR26 = 0; VAR26 < 10; VAR26++)
                {
                    FUN12(VAR27[VAR26]);
                }
            }
            else
            {
                FUN11("");
            }
            free(VAR27);
        }
    }
}