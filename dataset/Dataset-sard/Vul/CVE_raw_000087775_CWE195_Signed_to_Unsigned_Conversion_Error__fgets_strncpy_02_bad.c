void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(1)
    {
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
    }
    {
        char VAR4[100];
        char VAR5[100] = "";
        memset(VAR4, '', 100-1);
        VAR4[100-1] = '';
        if (VAR1 < 100)
        {
            
            strncpy(VAR5, VAR4, VAR1);
            VAR5[VAR1] = ''; 
        }
        FUN3(VAR5);
    }
}