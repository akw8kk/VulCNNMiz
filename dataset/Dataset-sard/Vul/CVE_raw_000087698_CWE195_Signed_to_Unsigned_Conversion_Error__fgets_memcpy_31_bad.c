void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    {
        char VAR2[VAR3] = "";
        
        if (fgets(VAR2, VAR3, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR2);
        }
        else
        {
            FUN3("");
        }
    }
    {
        int VAR4 = VAR1;
        int VAR1 = VAR4;
        {
            char VAR5[100];
            char VAR6[100] = "";
            memset(VAR5, '', 100-1);
            VAR5[100-1] = '';
            if (VAR1 < 100)
            {
                
                memcpy(VAR6, VAR5, VAR1);
                VAR6[VAR1] = ''; 
            }
            FUN3(VAR6);
        }
    }
}