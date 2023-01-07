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
        
        if (VAR1 < 100)
        {
            
            char * VAR5 = (char *)malloc(VAR1);
            
            memset(VAR5, '', VAR1-1);
            VAR5[VAR1-1] = '';
            FUN3(VAR5);
            free(VAR5);
        }
    }
}