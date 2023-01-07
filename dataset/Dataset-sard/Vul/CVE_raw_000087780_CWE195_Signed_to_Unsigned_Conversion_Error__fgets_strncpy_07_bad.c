void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2==5)
    {
        {
            char VAR3[VAR4] = "";
            
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                
                VAR1 = FUN2(VAR3);
            }
            else
            {
                FUN3("");
            }
        }
    }
    {
        char VAR5[100];
        char VAR6[100] = "";
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        if (VAR1 < 100)
        {
            
            strncpy(VAR6, VAR5, VAR1);
            VAR6[VAR1] = ''; 
        }
        FUN3(VAR6);
    }
}