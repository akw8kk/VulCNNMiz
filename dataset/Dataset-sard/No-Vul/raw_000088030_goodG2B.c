static void FUN1()
{
    int VAR1;
    int VAR2;
    
    VAR2 = -1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = 100-1;
    }
    
    if (VAR2 < 100)
    {
        
        char * VAR3 = (char *)malloc(VAR2);
        
        memset(VAR3, '', VAR2-1);
        VAR3[VAR2-1] = '';
        FUN2(VAR3);
        free(VAR3);
    }
}