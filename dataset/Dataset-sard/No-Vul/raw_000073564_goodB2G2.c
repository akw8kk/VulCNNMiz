static void FUN1()
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
        char VAR9[VAR10];
        do
        {
#ifdef VAR2
            if (FUN2(FUN3(2,2), &VAR3) != VAR11)
            {
                break;
            }
            VAR4 = 1;
#endif
            
            VAR7 = socket(VAR12, VAR13, VAR14);
            if (VAR7 == VAR8)
            {
                break;
            }
            memset(&VAR6, 0, sizeof(VAR6));
            VAR6.VAR15 = VAR12;
            VAR6.VAR16.VAR17 = FUN4(VAR18);
            VAR6.VAR19 = FUN5(VAR20);
            if (connect(VAR7, (struct VAR21*)&VAR6, sizeof(VAR6)) == VAR22)
            {
                break;
            }
            
            VAR5 = recv(VAR7, VAR9, VAR10 - 1, 0);
            if (VAR5 == VAR22 || VAR5 == 0)
            {
                break;
            }
            
            VAR9[VAR5] = '';
            
            VAR1 = FUN6(VAR9);
        }
        while (0);
        if (VAR7 != VAR8)
        {
            FUN7(VAR7);
        }
#ifdef VAR2
        if (VAR4)
        {
            FUN8();
        }
#endif
    }
    break;
    default:
        
        FUN9("");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int VAR23;
        int VAR24[10] = { 0 };
        
        if (VAR1 >= 0 && VAR1 < (10))
        {
            VAR24[VAR1] = 1;
            
            for(VAR23 = 0; VAR23 < 10; VAR23++)
            {
                FUN10(VAR24[VAR23]);
            }
        }
        else
        {
            FUN9("");
        }
    }
    break;
    default:
        
        FUN9("");
        break;
    }
}