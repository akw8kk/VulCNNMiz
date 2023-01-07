static void FUN1()
{
    int VAR1;
    int *VAR2 = &VAR1;
    int *VAR3 = &VAR1;
    
    VAR1 = -1;
    {
        int VAR1 = *VAR2;
        
        VAR1 = 100-1;
        *VAR2 = VAR1;
    }
    {
        int VAR1 = *VAR3;
        
        if (VAR1 < 100)
        {
            
            char * VAR4 = (char *)malloc(VAR1);
            
            memset(VAR4, '', VAR1-1);
            VAR4[VAR1-1] = '';
            FUN2(VAR4);
            free(VAR4);
        }
    }
}