void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        {
#ifdef VAR2
            WSADATA VAR3;
            int VAR4 = 0;
#endif
            int VAR5;
            struct sockaddr_in VAR6;
            SOCKET VAR7 = VAR8;
            SOCKET VAR9 = VAR8;
            char VAR10[VAR11];
            do
            {
#ifdef VAR2
                if (FUN3(FUN4(2,2), &VAR3) != VAR12)
                {
                    break;
                }
                VAR4 = 1;
#endif
                
                VAR7 = socket(VAR13, VAR14, VAR15);
                if (VAR7 == VAR8)
                {
                    break;
                }
                memset(&VAR6, 0, sizeof(VAR6));
                VAR6.VAR16 = VAR13;
                VAR6.VAR17.VAR18 = VAR19;
                VAR6.VAR20 = FUN5(VAR21);
                if (FUN6(VAR7, (struct VAR22*)&VAR6, sizeof(VAR6)) == VAR23)
                {
                    break;
                }
                if (FUN7(VAR7, VAR24) == VAR23)
                {
                    break;
                }
                VAR9 = FUN8(VAR7, NULL, NULL);
                if (VAR9 == VAR23)
                {
                    break;
                }
                
                VAR5 = recv(VAR9, VAR10, VAR11 - 1, 0);
                if (VAR5 == VAR23 || VAR5 == 0)
                {
                    break;
                }
                
                VAR10[VAR5] = '';
                
                VAR1 = FUN9(VAR10);
            }
            while (0);
            if (VAR7 != VAR8)
            {
                FUN10(VAR7);
            }
            if (VAR9 != VAR8)
            {
                FUN10(VAR9);
            }
#ifdef VAR2
            if (VAR4)
            {
                FUN11();
            }
#endif
        }
    }
    else
    {
        
        VAR1 = 7;
    }
    if(FUN2())
    {
        {
            int VAR25;
            int * VAR26 = (int *)malloc(10 * sizeof(int));
            
            for (VAR25 = 0; VAR25 < 10; VAR25++)
            {
                VAR26[VAR25] = 0;
            }
            
            if (VAR1 >= 0)
            {
                VAR26[VAR1] = 1;
                
                for(VAR25 = 0; VAR25 < 10; VAR25++)
                {
                    FUN12(VAR26[VAR25]);
                }
            }
            else
            {
                FUN13("");
            }
            free(VAR26);
        }
    }
    else
    {
        {
            int VAR25;
            int * VAR26 = (int *)malloc(10 * sizeof(int));
            
            for (VAR25 = 0; VAR25 < 10; VAR25++)
            {
                VAR26[VAR25] = 0;
            }
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR26[VAR1] = 1;
                
                for(VAR25 = 0; VAR25 < 10; VAR25++)
                {
                    FUN12(VAR26[VAR25]);
                }
            }
            else
            {
                FUN13("");
            }
            free(VAR26);
        }
    }
}