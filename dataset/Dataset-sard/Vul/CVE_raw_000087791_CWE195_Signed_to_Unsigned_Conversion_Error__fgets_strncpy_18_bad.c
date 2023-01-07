void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    goto VAR2;
VAR2:
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
    {
        char VAR2[100];
        char VAR5[100] = "";
        memset(VAR2, '', 100-1);
        VAR2[100-1] = '';
        if (VAR1 < 100)
        {
            
            strncpy(VAR5, VAR2, VAR1);
            VAR5[VAR1] = ''; 
        }
        FUN3(VAR5);
    }
}