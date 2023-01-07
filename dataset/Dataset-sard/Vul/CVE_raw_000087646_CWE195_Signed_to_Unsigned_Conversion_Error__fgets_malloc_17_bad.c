void FUN1()
{
    int VAR1;
    int VAR2;
    
    VAR2 = -1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            char VAR3[VAR4] = "";
            
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                
                VAR2 = FUN2(VAR3);
            }
            else
            {
                FUN3("");
            }
        }
    }
    
    if (VAR2 < 100)
    {
        
        char * VAR5 = (char *)malloc(VAR2);
        
        memset(VAR5, '', VAR2-1);
        VAR5[VAR2-1] = '';
        FUN3(VAR5);
        free(VAR5);
    }
}