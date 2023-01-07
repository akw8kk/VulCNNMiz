void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        {
            char VAR2[VAR3] = "";
            
            if (fgets(VAR2, VAR3, stdin) != NULL)
            {
                
                VAR1 = FUN3(VAR2);
            }
            else
            {
                FUN4("");
            }
        }
    }
    else
    {
        
        VAR1 = 100-1;
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
        FUN4(VAR5);
    }
}