void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
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
    {
        char VAR23[100];
        char VAR24[100] = "";
        memset(VAR23, '', 100-1);
        VAR23[100-1] = '';
        if (VAR1 < 100)
        {
            
            memmove(VAR24, VAR23, VAR1);
            VAR24[VAR1] = ''; 
        }
        FUN9(VAR24);
    }
}