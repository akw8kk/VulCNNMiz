static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    
    if (VAR1 < 100)
    {
        
        char * VAR3 = (char *)malloc(VAR1);
        
        memset(VAR3, '', VAR1-1);
        VAR3[VAR1-1] = '';
        FUN3(VAR3);
        free(VAR3);
    }
}