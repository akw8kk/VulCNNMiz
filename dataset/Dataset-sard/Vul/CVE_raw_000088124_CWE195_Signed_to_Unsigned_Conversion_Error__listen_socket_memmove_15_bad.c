void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    switch(6)
    {
    case 6:
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
            if (FUN2(FUN3(2,2), &VAR3) != VAR12)
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
            VAR6.VAR20 = FUN4(VAR21);
            if (FUN5(VAR7, (struct VAR22*)&VAR6, sizeof(VAR6)) == VAR23)
            {
                break;
            }
            if (FUN6(VAR7, VAR24) == VAR23)
            {
                break;
            }
            VAR9 = FUN7(VAR7, NULL, NULL);
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
            
            VAR1 = FUN8(VAR10);
        }
        while (0);
        if (VAR7 != VAR8)
        {
            FUN9(VAR7);
        }
        if (VAR9 != VAR8)
        {
            FUN9(VAR9);
        }
#ifdef VAR2
        if (VAR4)
        {
            FUN10();
        }
#endif
    }
    break;
    default:
        
        FUN11("");
        break;
    }
    {
        char VAR25[100];
        char VAR26[100] = "";
        memset(VAR25, '', 100-1);
        VAR25[100-1] = '';
        if (VAR1 < 100)
        {
            
            memmove(VAR26, VAR25, VAR1);
            VAR26[VAR1] = ''; 
        }
        FUN11(VAR26);
    }
}