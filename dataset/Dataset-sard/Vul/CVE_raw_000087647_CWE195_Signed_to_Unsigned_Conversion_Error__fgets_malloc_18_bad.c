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
    
    if (VAR1 < 100)
    {
        
        char * VAR5 = (char *)malloc(VAR1);
        
        memset(VAR5, '', VAR1-1);
        VAR5[VAR1-1] = '';
        FUN3(VAR5);
        free(VAR5);
    }
}