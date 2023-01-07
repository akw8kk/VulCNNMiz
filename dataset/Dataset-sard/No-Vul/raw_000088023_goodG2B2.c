static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2)
    {
        
        VAR1 = 100-1;
    }
    
    if (VAR1 < 100)
    {
        
        char * VAR3 = (char *)malloc(VAR1);
        
        memset(VAR3, '', VAR1-1);
        VAR3[VAR1-1] = '';
        FUN2(VAR3);
        free(VAR3);
    }
}