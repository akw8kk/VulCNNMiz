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
    
    if (VAR1 < 100)
    {
        
        char * VAR4 = (char *)malloc(VAR1);
        
        memset(VAR4, '', VAR1-1);
        VAR4[VAR1-1] = '';
        FUN4(VAR4);
        free(VAR4);
    }
}